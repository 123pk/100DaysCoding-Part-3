/*
Platform :- Leetcode
Approach :- store the index of all the rotten orranges in vector , now traverse through the vector and also maintain a 2d grid of same dimension as input matrix and 
            every time we visit( using bfs ) the fresh orange, we look for smallest time it needed to get rotten , intitally we fill the values with fresh oranges in our 
            new matrix with ( infintiy ) , at the end we will look for the max value in our new matrix if that value is infinity then we return empty array else we return the
            max value
*/
