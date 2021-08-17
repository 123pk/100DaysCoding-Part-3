/*
Platform :- Leetcode
Approach :- we maintain a prefix sum array for given input and for each range query 'l'--> 'r' there are two case 
            case 1 :- 'L' = 0 in this case we return ( pref[R] )
            case 2 :- 'L'!=0 in this case we return ( pref[R]-pref[L-1] )
*/
class NumArray {
public:
    vector<int>temp,pref;
    NumArray(vector<int>& nums) {
        temp = nums;
        for(int i=0;i<nums.size();++i){
            if(i==0)pref.push_back(temp[i]);
            else pref.push_back(pref[i-1]+temp[i]);
        }
    }
    
    int sumRange(int left, int right) {
        if(left==0){
            return pref[right];
        }
       // left--;
        //right--;
        return pref[right]-pref[left-1]; 
    }
};
