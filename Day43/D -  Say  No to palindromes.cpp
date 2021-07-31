/*
Platform :- Codeforces
Contest :- Educational Round 112
Approach :- just '3' characters 'a', 'b' and 'c' are in string so we can find all the permutaionf of "abc" and we can analyse that for string to not contain 
           any palindrome of size >=2 it should follow following pattern of any permutaion "abcabcabc..." ,
           there are six such permutation we will find the minimum number of changes need for each permutaiton for each index and we can find minimum 
           value of ( change[r]-change[l-1] ) for all the six permutation
*/
