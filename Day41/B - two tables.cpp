/*
Platform :- Codeforces 
Contest :-  Codeforce Educational Round 112
Approach :- let W and H be width and height of room , w1 = abs(x2-x1) and h1 = abs(y2-y1) be the width and height of table present in room 
            let 'a' and 'b' be the width and height of table we want to add in room
            Case 1 :- when it is impossible to insert the table
                    ---> when  (w1 + a)> W and ( h1 + b)>H then we cannot insert the following table and we will print "-1"
            
            Case 2 :- when we can insert the table by moving the table to left ,right ,up or down 
                   ---> we need to move current table from initial position if (( W - max( x2,x1)) < a ) and ( min(x1,x2))<a similarly for 'y1' and y2
                   ---> we will try to move box in all the four directions and will choose one with minimum cost and which will help us fit the box in the room
*/
