/*
Platform:- Codechef
Contest :- Codechef September Lunch time
Approach :- If you will analyse carefully you will found out for power of 2 >4 , let val = power_of_2 >4 then :-
            1. if val == n then "Alice" wins
            2. if n == val-1 then also "Alice" wins
            3. for val-2 and val-3, "Bob" wins
            
            else for odd values of n we  have "Bob" as winner and for even value we have "Alice"
*/
