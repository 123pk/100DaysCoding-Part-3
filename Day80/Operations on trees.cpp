/*
Platform :- Leetcode
Contest :- Bi weekly contest 60
Approach :- https://leetcode.com/problems/operations-on-tree/discuss/1444398/tle-to-ac-code-bfs
*/
class LockingTree {
public:
   //used array is to check if current node is locked or not and locked with which value
    vector<int>used;
      
    vector<vector<int>>par,chi;
    //chi stores the link from parent->child
    //par stores the link from child->parent
    
    LockingTree(vector<int>& parent) {
        int n = parent.size();  
        for(int i=0;i<n;++i){
            used.push_back(-1);
            
        }
        
        par.resize(n);
        chi.resize(n);
        for(int i=0;i<parent.size();++i){
             par[i].push_back(parent[i]);
            
            if(i==0)continue;
            chi[parent[i]].push_back(i);
        }
    }
    
    bool lock(int num, int user) {
        if(used[num]==-1){
            used[num]=user;
            return true;
        }
        return false;
    }
    
    
    bool unlock(int num, int user) {
        if(used[num]==user){
            used[num]=-1;             
            return true;
        }
        return false;
    }
    
    bool upgrade(int num, int user) {
        
        //if node is already blocked then we cannot upgrade
        if(used[num]!=-1)return false;
        
        //check if parent are not occupied 
        int start = num;
        int parent=0;
        
        while(1){
           parent = par[start][0];
            if(parent==-1)break;
            if(used[parent]!=-1)return false;
            start=parent;
        }    
		
		
        //check if atleast one child is is occupied
        int g=0;
      
        queue<int>bfs;
        bfs.push(num);
         
        while(!bfs.empty()){
            int c = bfs.size();
            for(int i=0;i<c;++i){
                int temp = bfs.front();
                bfs.pop();
              
                for(int j=0;j<chi[temp].size();++j){
                
                        if(used[chi[temp][j]]!=-1){
                            g=1;                         
                           used[chi[temp][j]]=-1;
                        }
                        bfs.push(chi[temp][j]);
                   }
                   
                }
            }
        } 
        
        //when we have not descendent which is blocked
       if(g==0)return false;
       used[num]=user;
           
        return true;
    }
};
