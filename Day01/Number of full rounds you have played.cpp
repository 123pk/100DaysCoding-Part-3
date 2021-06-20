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
