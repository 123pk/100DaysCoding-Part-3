/*
Platform :- Codeforces
Contest :- Codeforces Round 668 Div 2
Approach :- we need to observe that all the non overlapping substring of lenth 'k' should be equal or ' ch[i%k] ' where ch[i] is character at ith index should be same for all
            such values else we cannot find any such string , now for substring of lenth 'k' if no of '0' is greater than (k/2) or no of '1' is greater then also string can never
            be created else it is always possible
*/
