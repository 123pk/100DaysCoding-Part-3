/*
Platform :- Codeforces 
Contest :- Codeforces Round 739 Div 3
Approach :- reverse the string and store the index of each character when first appeared, sort the characters based on increasing order of that index , now the number of occurence
            of ( ith ) character in original array is ( total_occurence / i ) if (total_occurence % i!=0) then it is not possible else we find [ x = sum of [ ( total_occurence / i ) ] ]
            and choose the first 'x' elements and try to create the given string if we are not able to do so we print ("-1") else we print the string and order in which character 
            are choosen
*/
