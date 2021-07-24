/*
Platform :- Codeforces
Contest :- Codeforces Round 734 Div 3
Approach :- As there are atmax 5 types of characters in string ( 'a','b','c','d' and 'e') for each string we can map it with array which contain detail of frequecy of 
             each character in that string , we will iterate through 'a' to 'e' and for each string we will find ( frequecy of choosen element - sum of frequecy of other element)
             of string and store in array . Now for the array formed we will find the max number of elements of array whose sum is >=0 let it be c1,c2,c3,c4 and c5 for each of 
             5 character the max out of 5 values is our answer
*/
