/*
Platform :- Codedrills
Contest :- Interview Preperation 16
Approach :- Maintain two stack one of string and one of integers , first push intger in stack and then followed by character( in string format) then when you get ']' pop out the
            top string and integer value from stack . i.e. ( 3 , "a" )we have these now change "a"---> "aaa" and if stack of string is empty then push this value in stack else
            take the top element and add with this string and push it back .
            return the last formed string of stack at the end
*/
