/*
Platform :- Facebook 
Contest :- Facebook Hackercup 2021 Round 1
Approach :- If you will carefully read the constraints and the condition you will find the solution only exist for value 'a' and 'b' if both are greater than or equal to (n+m-1)
            Now if this condition is satisfied then we can always have one common side let in our case be the right most column which will be part of shortest path for both the paths
            from top rigtht to bottom left and top left to bottom right , we will fill it with all '1' , now we are left to fill top row and bottom row with last cell already filled
            under last column , so we will fill '1'  in each cell from j = m-2 to 1 , as j==0 we fill all the remaining values required to make path sum 'a' and 'b' for all other cell
            we fill them with 1000.
*/
