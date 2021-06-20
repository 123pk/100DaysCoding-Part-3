/*
Platform :- Leetcode
Problem :- Number of full rounds you have played
Contest :- Weekly contest 246
Approach :- we can have two cases here 
           case 1: when start time is less than end time
                  --> we need to find total number of rond to [ start to end ]
           case 2: when start time is greater than end time
                  --> we need to find total number of round that we can play from [ start to [00:00]] + number of rouds from [ [00:15] to end ]
                  
           there are only 4 valid minutes [ 00, 15 , 30 ,45 ]
           so we will convert the start time to nearest valid minute >= current minute ,
           similarly we will convert end time minute to nearest valide minute<= end time.
           
           now we will increment the value of minute by 15 and our count until we reach to end , note if our min =45 then aadding 15 --> 60 here we will increment hour and min =0
  
*/

class Solution {
public:
    int numberOfRounds(string s, string f ) {
        int ans=0;
        int sh=(s[0]-'0')*10+(s[1]-'0');
        int sm=(s[s.size()-2]-'0')*10+(s[s.size()-1]-'0');
 
        
        int fh=(f[0]-'0')*10+(f[1]-'0');
        int fm=(f[f.size()-2]-'0')*10+(f[f.size()-1]-'0');
    
        //if finsish time is on next day or no
        int g=0;
        
        if(fh<sh)g=1;
        else if(fh==sh && fm<sm)g=1;
        
        if(g){
           // cout<<" & "<<endl;
            int d1=15; 
            while(sm%15){
                sm++;
                if(sm==60){
                    sm=0;
                    if(sh==23)sh=0;
                    else sh++;
                    break;
                }
               // cout<<sm<<" checking "<<(sm%15)<<endl;
            }
            
            while(fm%15){
                fm--;
            }
    
            int d=0;
            while(1){
                if(sm==0 && sh==0)break;
                sm+=15;
                
                if(sm==60){
                    sm=0;
                    if(sh==23)sh=0;
                    else sh++;
                }
                d++;
            }
            ans+=d;
            d=0;
            while(1){
                sh=sh%24;
                sm+=d1;
                 
                if(sm==60){
                    sm=0;
                    sh++;
                }
                
                if(sh>fh)break;
                if(sh==fh){
                    if(sm>fm)break;
                }
                d++;
            }
            ans+=d;
        }
        else{
            int d1=15; 
            while(sm%15){
                sm++;
                if(sm==60){
                    sm=0;
                    if(sh==23)sh=0;
                    else sh++;
                    break;
                }
            }
       
            
            int d=0;
            while(1){
                sh=sh%24;
                sm+=d1;
                 
                if(sm==60){
                    sm=0;
                    sh++;
                }
                if(sh>fh)break;
                if(sh==fh){
                    if(sm>fm)break;
                }
                d++;
            }
            ans+=d;
        }
        
        return ans;
        
    }
};
