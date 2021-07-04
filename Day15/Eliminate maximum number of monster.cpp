/*
Platform :- Leetcode
Problem :- Eliminate maximum number of monster
Approach :- Find the time taken by each monster to reach the town and sort then increasing order of time taken , traerse from i=0 to len-1 and 
            if (time_taken_by_ith_monster <= i) then we lost else we increment our count by 1 . return count 
*/
