/*
Platform :- Leetcode
Problem :- Eliminate maximum number of monster
Approach :- Find the time taken by each monster to reach the town and sort then increasing order of time taken , traerse from i=0 to len-1 and 
            if (time_taken_by_ith_monster <= i) then we lost else we increment our count by 1 . return count 
*/

//comoparator function to sort array by increasing time taken by monster to reach town
bool comp(pair<int,int>& P,pair<int,int>&Q){
    double x1=P.first;
    double s1=P.second;
    x1=x1/s1;
    double x2=Q.first;
    double s2=Q.second;
    x2=x2/s2;
    
    return x1<x2;
    
}

class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        vector<pair<int,int>>P;
        int n=dist.size();
        for(int i=0;i<n;++i){
            P.push_back({dist[i],speed[i]});
        }
        
        sort(P.begin(),P.end(),comp);
        
        int ans=0;
        
        
        for(int i=0;i<n;++i){
            double x1=P[i].first;
           double s1=P[i].second;
           x1=x1/s1;
            
          double z=i;
            if(x1<=z)break;
            ans++;
        }
        
        return ans;
    }
};
