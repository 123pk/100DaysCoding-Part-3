/*
Platform:- Leetcode
Problem :- Number of matching subsequence
Approach :- we need to greedily compare main string with array of strings in order to avoid tle . 
           --> we can store occurence of each alphabet for each string in 'words'array as there are only 26 alpabets, we will only compare when number of each alphabet 
               in main string is ( >=) number of alphabets in string of 'words'array
           ---> we will take care of already used strings of 'words'array and will not compare them again
*/
