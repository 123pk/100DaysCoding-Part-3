/*
Platform :- Codingcompetitionwithgoogle
Contest :- Google Kickstart Round E 2021
Approach :- There are two cases :-
          1. IMPOSSIBLE --> when the most frequent character appears more than (string_lenght/2)
          2. else we create an array of pair sorted by total occurence in string then create an array of index with character index and greedily intialise each index to character
             prioritise the ones with highest frequency.
*/
