/*
Platform :- Codeforces 
Contest :- Codeforces Round 699 Div2
Approach :- first check if our painters can make our A into B array , we count frequecy of color of B where ( A[i] != B[i] ) and compare with frequency of color in C
            array if there is a colour whose frequency in 'B' is > frequency in 'C'  then we will not be able to change .
            
            else we will find the index of each painter accordingly , if we have random painter who paint a color which is not in our 'B' array then we give that painter 
            last index where (A[i] !=B[i]) if this random index if after last index of B[i] in 'C' then we can't paint from A to B.
            
            The explanation is messed up as it took more than 5 submissions before getting AC
*/
