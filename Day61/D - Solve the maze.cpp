/*
Platform :- Codeforces 
Contest :- Codefroces Round 648 Div 2
Approach :- We will first surround each 'B' (bad guys) with wall if there is an empty cell , and if there is a 'G' (good guy ) sharing border with 'B' then it is never possible
           and we print "No" else we now should be able to visit every node including 'bottom right cell' and all 'G' cells if we are able to do so we will print "Yes" else "No".
           --> We use bfs and check for all the four directions in both cases
*/
