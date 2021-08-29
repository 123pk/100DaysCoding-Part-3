/*
Platform :- Codeforces
Contest :- Codeforces Round 742 Div(1+2)
Approach :- let x = no of odd numbers , y = no of even numbers . If abs( x - y) > 1  then it is not possible to do so .
           --> else if ( x == y )  --> then we try to form two case oeoe.. and eoeo.. where o = odd number and e = evne number and find cost of both and store the min in answer
           ---> else if (x > y) then we try eoeo.. else we find cost of converting to oeoe..
*/
