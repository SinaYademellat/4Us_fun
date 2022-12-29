'''
    @sina Yademellat 
    target : subnet mask calculator
        input : /k
        output : A.B.C.D
            (ex) /8 : 255.0.0.0

'''

import tkinter as tk
from tkinter import *

def make_new_root(ip_of_subnet:str) -> None:
   
    new_root = tk.Toplevel(window)

    data_string = StringVar()
    data_string.set(ip_of_subnet)

    putPut_labla = tk.Entry( new_root , textvariable = data_string,justify='center' , fg= 'red'  , bd=0, font = ('Helvetica 16'),state="readonly")
    
    putPut_labla.pack()



def run_it() -> None:

    # subnets for IPv4.
    dic_of_prefix_size={
                                    '1':'128.0.0.0'     ,'2':'192.0.0.0	'           ,'3':'224.0.0.0'        ,'4':'240.0.0.0',       '5':'248.0.0.0'     ,   '6':'252.0.0.0'         ,'7':'254.0.0.0',
                '8':'255.0.0.0'     ,'9':'255.128.0.0'      ,'10':'255.192.0.0'     ,'11':'255.224.0.0'     ,'12':'255.240.0.0',    '13':'255.248.0.0'      ,'14':'255.252.0.0'     ,'15':'255.254.0.0',
                '16':'255.255.0.0'  ,'17':'255.255.128.0'   ,'18':'255.255.192.0'   ,'19':'255.255.224.0'   ,'20':'255.255.255.240',   '21':'255.255.248.0'    ,'22':'255.255.252.0'   ,'23':'255.255.254.0',
                '24':'255.255.255.0'  ,'25':'255.255.255.128'   ,'26':'255.255.255.192'   ,'27':'255.255.255.224'   ,'28':'255.255.255.240',   '29':'255.255.255.248'    ,'30':'255.255.255.252'   ,'31':'255.255.255.254',
                
                '32':'255.255.255.255'
            } 
    input_text = entry_K.get()

    entry_K.delete(0,2)
 
    make_new_root(dic_of_prefix_size[input_text])



if __name__ =='__main__':
    
    window = tk.Tk()
    
    
    color_of_back_ground = "#2B3A55"
    color_hashtak = "#CE7777"


    window.configure(background= color_of_back_ground)


    label_K = tk.Label(bg= color_hashtak, text="/K",font=('Helvetica 13'))
    entry_K = tk.Entry(bd=2,justify='center',font=('Helvetica 13'))
    
    run_btn = tk.Button( window , bg=  color_hashtak ,text = 'Run', command = run_it )

    label_K.grid(row=0 ,column=0)
    entry_K.grid(row=0, column=1)
    run_btn.grid(row=2, column=0)

    window.mainloop()

