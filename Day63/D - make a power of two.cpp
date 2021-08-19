/*
Platform :- Codeforces
Contest :- Codeforces Round 739 Div 3
Approach :- As the max value of A=10^9 so max operation required to make it into power of 2 is 10( remove all the digits in worst case and add '1') , we can find all the numbers
            which  are power of 2 till 10^18 in (log N time ---> 60 itterations) then we will find for each value the minimum digits need to be changed so and print the minimum 
            value.
*/
