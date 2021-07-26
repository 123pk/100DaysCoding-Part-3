/*
Platform :- Atcoder
Contest :- Atcoder beginner contest 211
Approach :- We need to use modifies bfs where we maintain two values for each node { dist , no_of_shortest_path } where dist is the distance of this node from root node and
            no_of_shortest_path is total number of shortest path till current node from root node .
            --> we initialise dist to 'inf'--> 10^18 for each node and dist of root node is 0 and no_of_shortest_path = 1 for this node . 
            --> we do bfs and if ( dist[v] > dist[u]+1 ) then dist[v]= dist[u]+1 , no_of_shortest_path[v]=no_of_shortest_path[u] & dfs(v) ,  
            ---> if dist[v] == dist[u]+1 then ( no_of_shortest_path[v] = no_of_shortest_path[v]+no_of_shortest_path[u] % mod )
            print the values of no_of_shortest_path[n]
*/
