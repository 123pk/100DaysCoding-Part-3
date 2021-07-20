/*
Platform :- Codeforces 
Contest :- Educational Round 92 
Approach :- move from i=0 to i=k, that is the max we can go , for each index find the max value that can be acheived if we apply back-forth operation at that index
            if no of left operation is less than number of moves for that index then move to right the max(remaining,valid) values
*/
