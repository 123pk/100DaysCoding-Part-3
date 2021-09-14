/*
Platform :- Codeforces
Contest :- Codeforces Global Round 16
Approach :- In this problem we make a copy of original array and sort it , now we will assign the row in which that element will belong as there are 'n' rows so each element in 
            array will be assigned value between '1' and 'n' inclusive . Now we will traverse on original array and for each row we will maintain a set which will tell us how many
            elments it already contain and we go through that set and the number of elements which are less than the current element will cause incovenience and we will add that 
            incovenience to our answer, to deal with duplicate values we will maintain a map for each row which will store the frequency of each element in that row.
*/
