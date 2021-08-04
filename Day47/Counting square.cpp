/*
Platform :- CSES
Approach :- store all the index wher you have '.' in grid , now perform bfs and move in neighbouring cells having'.' and mark them visited so you don't visit them 
            multiple times , once the bfs is completed and you cannot move , itterate through the index until you find any unvisited index and increment your count 
            by 1 after each bfs.
*/
