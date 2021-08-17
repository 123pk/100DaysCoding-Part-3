/*
Platform :- Leetcode
Approach :- we maintain a prefix sum array for given input and for each range query 'l'--> 'r' there are two case 
            case 1 :- 'L' = 0 in this case we return ( pref[R] )
            case 2 :- 'L'!=0 in this case we return ( pref[R]-pref[L-1] )
*/
