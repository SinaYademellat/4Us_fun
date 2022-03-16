# Input: s = "Let's take LeetCode contest"
# Output: "s'teL ekat edoCteeL tsetnoc"


class Solution:
    def reverseWords(self, s: str) -> str:
        tmp_=s.split()
        s=''
        for i in  tmp_:
                for j in range(len(i)-1,-1,-1):
                    s+=i[j]
                s+=' '
        #print(s)
        return s[:-1]

if __name__ == '__main__':
    A=Solution()
    A.reverseWords("Let's take LeetCode contest")