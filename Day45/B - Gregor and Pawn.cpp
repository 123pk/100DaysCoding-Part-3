/*
Platform :- Codeforces 
Contest :- Codeforces Round 736 Div 2
Approach :- itterate thorugh Gregor pawn and if it is '1' and enemy pawn is '0' for current index then we can directly use it , increment your count
           --> if current Gregor pawn is '1'  and if (i-1) pawn of enemy is '1' we choose that pawn else we check if (i+1) enemy pawn is '1' then we mark that pawn as
           used so that we cannot use that pawn again and increment our count.
*/
