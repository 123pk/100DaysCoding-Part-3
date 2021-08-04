/*
Platform :- Codeforces 
Contest :- Codeforces Round 708 Div 2
Approach :- do prime factorisation of each value and maintain a vector which contains values in ascending order and if prime factor of that element has odd power push it in
            that vector and maintain its fequency if we again get any element which have same frequency array then we have to partition our array as those two values product is
            going to be a perfect square.
            
            --> A perfect square prime factors have 'even' power
            ---> for finding prime efficientyly use seive
*/
