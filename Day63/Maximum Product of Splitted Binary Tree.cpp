/*
Platform :- Leetcode
Approach :- First compute the total sum value of each node ,here we used bfs to find the sum then do dfs and for each node find the sum of nodes of subtree where current node is
            root of that subtree and the find the max value of ( sum *(tot-sum)) ,here [ tot =  sum of values of all nodes ] and [ sum = sum of nodes of subtree of current node]
            
            For avoidng TLE in c++ use long long to caculate the max value and while returning the value returun its mod.
*/
