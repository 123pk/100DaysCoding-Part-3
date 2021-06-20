/*
Platform :- Codeforces 
Contest :- Codeforces Round 627 Div 2
Problem :- B - Love song
Approach :- We can store occurence of each word of alphabet at each index of string , as there are 26 alphabets our time complexity will  be O(n*26) which will work,
            now for each [l,r] we will find two array one storing occurence of each alphabet at index 'l' and other at 'r', we will find [ Ar[i] - Al[i]] which will give us 
            occurenece of each alphabet in range [l,r], now we will run a loop from 'a' to 'z' and update our answer by [ count*(index_of_corresponding_letter_in_alphabet)]
*/
