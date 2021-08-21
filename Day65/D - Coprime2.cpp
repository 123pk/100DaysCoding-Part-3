/*
Platform :- Atcoder
Contest :- Atcoder Beginner Contest 215
Appraoch :- Find the prime numbers less than 10^5 then for each element of array find the prime factors of it and mark them , now run a loop on those prime numbers and 
            mark all their multiples also which are less than 'm' , now run a loop from 2 to 'm' and if it is not marked add it to your answer vector ,don't forget to add '1' in 
            it will be valid for each and every number as [ gcd( any_number , 1 ) = 1 ] 
*/
