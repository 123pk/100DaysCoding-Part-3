/*
Platform :- Leetcode
Contest :- Biweekly contest 57
Approach :- You need to note that for an index 'i' we try to find next greater element than this value in [i+1,end] , we use stack to do so we run a loop from behind and
            if ( A[i] > top_value_of_stack ) then we pop the value and increment our count by 1 we do so until stack is empty of stack top value is greater that current
            , if stack is not empty we increment our count by 1 and push value of count in array .
             At the end return the ans after reversing it
** One of the beautiful problems that I have seen in leetcode
*/
