/*
Platform :- Codeforces
Contest :- Codeforces Contest 741 Div 2
Approach :- We can clearly analyse that if the number contains ( 1,4,6,8,9) then we can always delete 'k-1' digits and leave one of these remaining digits 
           else we have only (2,3,5,7) then we can have number of atmax 2 digits left , there are few cases if there is any digit before 2 and 5 then we can print that digit
           followed by 2 or 5 as both type of digits are composite ( 22,25,32,35,52,55,72,75)  .. If we have '7' and we have already digits 7,2 or 5 in string then we print those
           digit followed by 7 as thses are also composite (27,57,77) and now we are left with only one type of string when '3'is followed by 3(33)
*/
