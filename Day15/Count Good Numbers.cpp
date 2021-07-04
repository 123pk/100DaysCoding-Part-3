/*
Platform :- Leetcode
Problem :- Cound Good Numbers 
Approach :- we can have {0, 2, 4, 6, 8} at even places and {2, 3, 5, 7} at odd indices , let ev = number of even indices and od = number of odd indices ,
            [ ev = (n+1)/2 ]  and [ od = (n/2) ]  the number of good strings is [ ( (5^ev) % mod * (4^od))%mod ] 
*/
