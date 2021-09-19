/*
Platform :- Leetcode
Contest :- Leetcode Weekly contest 259
Approach :-  maintain a max prefix array and min suffix array and for each index 'i' check if prefix[i-1] < nums[i] && nums[i] < suff[i+1] , if this condition is satisfied then 
             we add 2 to our answer else we check for adjancent element ( nums[i-1]<nums[i] && nums[i]< nums[i+1] ) and add '1' if it sastisifes . 
*/
