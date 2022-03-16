


class Solution:
    def reverseString(self, s) -> None:
        """
        Do not return anything, modify s in-place instead.
        """
        for i in range(0,len(s)//2):
            s[i],s[len(s)-(1+i)] = s[len(s)-(1+i)] , s[i]
            
        
if __name__ == '__main__':
    A =Solution()
    s = ["h","e","l","l","o"]
    A.reverseString(s)
    print(s)
    