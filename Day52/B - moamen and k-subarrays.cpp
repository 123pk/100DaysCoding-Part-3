/*
Platform :- Codeforces 
Contest :- Codeforce Round 737 Div 2
Approach :- make a copy of input array and sort the copy array then compress it ,comrpression means changing large values to smaller values for easy computation .
          As there a 'n' values in array and all are distinct so we can map each value with a small value upto 'n' .
          Now on original array run a loop and if ( compressed_value[A[i]] - compressed_value[A[i-1]] != 1 ) count++ , count is minimum number of subarrays required for sorting
          the array in non decreasing order, initially count =1 .
*/
