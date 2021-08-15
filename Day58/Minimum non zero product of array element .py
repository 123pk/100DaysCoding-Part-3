'''
Platform :- Leetcode
Contest :- Leetcode Weekly contest 254
Approach :- If you will analyse you will find that each bit appears 2^(n-1) times , and it is optimal to have those many (2^(n-1)-1) '1' in our array and same number of (2^n-2)
            your anwer is let x = (2^n - 1) and y= (2^(n-1) -1) , your answer is [ ans = (x^y % mod) ]*(x+1)]
'''
def pk(x, y, p) :
    res = 1     # Initialize result
 
    # Update x if it is more
    # than or equal to p
    x = x % p
     
    if (x == 0) :
        return 0
 
    while (y > 0) :
         
        # If y is odd, multiply
        # x with result
        if ((y & 1) == 1) :
            res = (res * x) % p
 
        # y must be even now
        y = y >> 1      # y = y/2
        x = (x * x) % p
         
    return res

class Solution:
    def minNonZeroProduct(self, x: int) -> int:
        if(x==1):
            return 1
        mod = 1000000007
        y = 2**x
        y = y-1
        z = 2**(x-1)
        z = z-1
        ans = pk(y-1,z,mod)
        ans = ans*y
        ans = ans%mod
        return ans
        
