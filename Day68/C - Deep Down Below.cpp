/*
Platform :- Codeforces
Contest :- Codeforces Contest 740 Div 2 Based on VK Cup
Approach :- For each of ith array find two thing the minimum value required to kill all the monsters and the max value acheived from the ith array , now sort the array based
            on minimum value required in increasing order and then traverse through all the n value if current max value is greater than the minimum value required for cleaing
            ith cave then we increment the max value by the no of monster in that cave because we will be able to kill all of them and gain points equal to monster in array and if
            the max value is less than the minimum required for ith array/cave then we substract sum of length of all arrays which are under the max value .
*/
