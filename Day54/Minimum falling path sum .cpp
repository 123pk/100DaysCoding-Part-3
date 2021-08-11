/*
Platform :- Leetcode
Approach :- we will create a new grid with same dimension as of input grid and fill row 1 as it is in main grid then from row 2 we will greedily check for minimum sum possible
            for each index .  we will  lookat cells at (i-1,j), (i-1,j-1) and (i-1 ,j+1) valid pairs out of these three and find the minimum cost for cell (i,j) which is 
            minimum cost out of those three valid cells + value of current cell in main grid and store that minimum value in our new grid .
            
            At the end we will check all the value in last row and return the minimum value
*/
