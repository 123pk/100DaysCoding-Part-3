/*
Platform :- Codeforces
Contest :- Codeforces Round 712 Div 2
Approach :- If you carefully analyse the problem , you will find that it doesn't really matter what we put at places where both string are different , so problem comes down to
            filling all the places where string 1 and string 2 have same character . So for that we take all the index where s[i] == '1' and fill starting position with'('
            ans ending position with ')' now we move starting pointer forward and ending postion backward till the time starting position<= ending position.
            --> then we fill the disimilar position in either '()()()' way or ')()()()' way as it doesnot effect and then check if both fomed stirings are equal or not 
*/
