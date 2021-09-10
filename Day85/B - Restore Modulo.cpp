/*
Platform :- Codeforces
Contest :- Codeforces Round 709 Div 2 (based on TEKNO Cup)
Approach :- There are few cases which you need to take care of :- 
          1. if number of different type of ( A[i] - A[i-1]) positive value or negative value is greater than 1 then it never possible to get that array
          2. if there is only one type of (A[i]-A[i-1]) value then there are infinite possible solutions
          3. if n==1 then we print 0  as we have infinte solutions
*/
