/*
Platform :- Codeforces
Contest :- Codeforces Global Round 14
Approach :- If you will carefully read the  problem you will be able to distinguish problem into two cases 
           Case 1 :- when (l == r)  then we iterate through left socks and their frequency , if same color of socks is present in right side then we remove the ( min(left[x],right[x]) )
                     from both ends and add up the remaining left[x] .
                    
           Case 2 :- when (l != r) in this case we first make l == r in efficient way possible which is to change those elements from left to right or vice versa which are 
                     available in large extent and before doing so we remove the matching pairs of left and right from both sides , so we are left with unmatcher left and right socks
                     if the amount of some unmatched socks is >1 then we add floor[x/2] to minimum value side.
                     and then it becomes case 1 and we solve in same way as we solve case 1.
*/
