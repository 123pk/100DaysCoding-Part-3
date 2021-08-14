/*
Platform :- Hakcerrank
Approach :- We need to perform standard dijkstra to find the shortest path .
           If you want to learn dijkstra check out " striver graph series " on youtube.
           Note :- To avoid TLE on test case 7 try to use the optimal/ minimum value between two pairs of nodes
           ex :- In input you may get 
                  1 2 4  // edge between 1 and 2 with distance 4
                  1 2 3  // edge between 1 and 2 with distance 3
                  1 2 1  // edge between 1 and 2 with distance 1
                  we will use the last 1 as it has the minium distance and avoid/ignore the rest two, so for each pair of unique nodes we will store the minimum value possible between
                  then
*/
