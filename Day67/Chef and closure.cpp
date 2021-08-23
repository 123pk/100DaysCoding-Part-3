/*
Platform :- Codechef
Contest :- Codechef August Cookoff 2021
Approach :- If you will analyse the problem carefully you will find that we have three cases ,
            Case 1 :- we have element more than 1 element with abs(x)>1 , as that will lead to infinte array and it cannot be closed 
            Case 2 :- We have atleast two negative values and one of them is ( less that -1 ) , this will also create infinte array and cannot be closed
            Case 3 :- If we have more than two (-1) then we need atleast one (1) positive one else array cannot be closed
            Case 4 :- In all othe case we have a closed array
*/
