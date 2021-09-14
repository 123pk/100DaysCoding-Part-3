/*
Platform :- Leetcode
Approach :- There can be multiple approaches to this problem , 
            i .one can be to store all the alphabetic characters in new string and reverese them and then fill all the alphabatic 
               characters in oringinal string by the reversed chracters ,
            ii. we can make a new string which contains non alphabatic characters at the same position as in original string and store alphabatic characters with any character with
                higher ASCII value than 122  which can be '~' etc. Now reverse the original string and replace all the '~' with alphabatic characters of reversed original string.
*/
