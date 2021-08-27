/*
Platform :- Leetcode
Approach :- We use two stack one to store the number of children deleted of current node and other store the current node , if no of deleted children for current node is 2 then 
            we pop our the current node from stack and increment the number of deleted node of parent of current node by 1. If stack is not empty after traversing to the very end
            then we return false else return true.
*/
