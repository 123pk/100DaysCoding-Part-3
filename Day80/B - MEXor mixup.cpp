/*
Platform :- Codeforces
Contest :-Codefoces Contest 742 Div 2
Approach :- Compute the xor values from 0 to 3*(10^5) and store it in array , then for given input a,b we need to have atleast 'a' elements in our array , let val be the xor
            of all value from 0 to 'a' , if (val == 'b') then our answer is 'a' else we will check if ( val xor a)==b then we need to add two more elements to our array else we
            need to add just one more element in our array.
*/
