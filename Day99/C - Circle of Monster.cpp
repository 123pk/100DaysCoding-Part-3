/*
Platform :- Codeforces
Contest :- Educational Round 85
Approach :- We will create a prefix sum array which store the minimum number of bullets require to kill upto ith monster starting from '1' and going to 'n' and for each value
           'i' find the cost of (pref[i-1]+(pref[n-1]-pref[i])+A[i].first)
*/
