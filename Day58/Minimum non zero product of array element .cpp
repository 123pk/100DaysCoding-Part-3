/*
Platform :- Leetcode
Contest :- Leetcode Weekly contest 254
Approach :- If you will analyse you will find that each bit appears 2^(n-1) times , and it is optimal to have those many (2^(n-1)-1) '1' in our array and same number of (2^n-2)
            your anwer is let x = (2^n - 1) and y= (2^(n-1) -1) , your answer is [ ans = (x^y % mod) ]*(x+1)]
*/
