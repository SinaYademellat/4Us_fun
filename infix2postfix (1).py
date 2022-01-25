# -*- coding: utf-8 -*-
"""


@author: shayan
"""
import ply.lex as lex

# List of token names.   This is always required
tokens = (
    'ID',
    'NUMBER',
    'PLUS',
    'MINUS',
    'TIMES',
    'DIVIDE',
    'LPAREN',
    'RPAREN',
)

# Regular expression rules for simple tokens

t_PLUS = r'\+'
t_MINUS = r'-'
t_TIMES = r'\*'
t_DIVIDE = r'/'
t_LPAREN = r'\('
t_RPAREN = r'\)'


def t_ID(t):
    r'[a-zA-Z_][a-zA-Z_0-9]*'
    t.type = tokens.get(t.value, 'ID')  # Check for reserved words
    return t


# A regular expression rule with some action code
def t_NUMBER(t):
    r'/^[+-]?([0-9]+\.?[0-9]*|\.[0-9]+)$/'
    t.value = t.value
    return t


# Define a rule so we can track line numbers
def t_newline(t):
    r'\n+'
    t.lexer.lineno += len(t.value)


# A string containing ignored characters (spaces and tabs)
t_ignore = ' \t'


# Error handling rule
def t_error(t):
    print("Illegal character '%s'" % t.value[0])
    t.lexer.skip(1)


# Build the lexer
lexer = lex.lex()


def prec(op1, op2):
    pm = '+-'
    md = '*/'
    same = (op1 in pm and op2 in pm) or (op1 in md and op2 in md)
    if same or (op1 in md and op2 in pm):
        return 1;
    return -1;


def in2pos(data):
    # Give the lexer some input
    lexer.input(data)

    op = []
    operators = dict([('PLUS', '+'), ('MINUS', '-'), ('TIMES', '*'), ('DIVIDE', '/')])

    postfix = ""
    # Tokenize
    while True:
        tok = lexer.token()
        if not tok:
            break  # No more input
        if tok.type == 'NUMBER':
            postfix += (tok.value + ' ')
        elif tok.type in operators.keys():
            _op = operators.get(tok.type)
            if len(op) == 0:
                op.append(_op)
            else:
                while True:
                    if len(op) == 0:
                        op.append(_op)
                        break
                    left = op[-1]
                    if prec(left, _op) == 1:
                        postfix += (op.pop() + ' ')
                    else:
                        op.append(_op)
                        break
    while len(op) > 0:
        postfix += (op.pop() + ' ')
    return postfix


def exe_pos(data):
    # Give the lexer some input
    lexer.input(data)

    val = []
    operators = dict([('PLUS', '+'), ('MINUS', '-'), ('TIMES', '*'), ('DIVIDE', '/')])

    # Tokenize
    while True:
        tok = lexer.token()
        if not tok:
            break  # No more input
        if tok.type == 'NUMBER':
            val.append(int(tok.value))
        else:
            op = operators.get(tok.type)
            right = val.pop()
            left = val.pop()
            if op == '+':
                val.append(left + right)
            elif op == '-':
                val.append(left - right)
            elif op == '*':
                val.append(left * right)
            elif op == '/':
                val.append(left / right)
    return val.pop()


# Test it out
data = '''a+2*-5'''

# Show input
print(data)
i2p = in2pos(data)
print(i2p)
res = exe_pos(i2p)
print(res)
