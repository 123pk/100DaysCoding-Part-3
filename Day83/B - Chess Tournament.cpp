/*
Platform :- Codeforces
Contest :- Codeforces Educaional Round 113 Div 2
Approach :- Fill all grid with row 'i' where ith player is of type '1' , fill A[i][j] = A[j][i]='=' , now we are left with player with atleast one win , to do so maintain a set
            which show if the which  player has win atleast one match and is satisfying condition '2' and fill A[i][j]='+' and A[j][i]='-' accordingly and add in set 
*/
