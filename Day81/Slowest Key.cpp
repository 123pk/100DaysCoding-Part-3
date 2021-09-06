/*
Platform :- Leetcode
Approach :- use a mx to store the max time taken by any key , for each (0<= i < n) if ( mx < ( releasetime[i] - releasetime[i-1] ) ) then we change mx to that value and store the 
            key[i] in it else if they are equal then we store the lexiographically bigger character in our answer.
*/
