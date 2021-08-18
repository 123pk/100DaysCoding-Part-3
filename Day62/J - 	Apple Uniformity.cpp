/*
Platform :-Codedrills 
Contest :- ICPC Gwalior Pune Regionals 2020
Approach :- it doesnot really matter how big your array is we need to find the min of A[i]-A[i+1] for each query . How to optimise it , we can use set to store difference in sorted 
            order and can get the smallest or min value in O(log N) time which will do the job and we will maintain the frequency array of difference for each unique difference
            If we remove any element we decase the frequency of differnece of this value with its neighbours similarly if we add  new value we add the new differnces and increment
            the frequency
*/
