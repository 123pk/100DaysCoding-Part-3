/*
Platform :- Codeforces
Contest :- Codeforces Round 736 Div 2
Appraoch :- create a graph from input such that there is outgoing edge from ( min(u,v) towards ---> max(u,v) )
           --> then we count number edgest that have atleast one outgoing edge 
           --> now we start taking queries
           Query type 1 :- when we have new edge we create edge going from min value to max and increment out edges count for min value , if value ==1,
                           it means we got one more node with aleast outgoing edge
           Query type 2 :- we will decrement count of no of outgoing edges for min value of ( u,v ) if value becomes '0' we decrease count of number of nodes with atleast
                           one outgoing edge by 1.
           Query type 3 :- print ( n - count_of_nodes_with_atleast_one_edge )
           
*/
