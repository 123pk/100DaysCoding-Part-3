/*
Platform :- CSES
Approach :- we do BFS as we need shortest path too and for each node we store parent of that node , remember parent of starting node is  that node itself which is our termination
           condition while backtracking . As soon as we reached 'B' our destination we start our backtracking and add 'U','L','R' and 'D' accordingy .
           At the end reverse the answer string you got as we backtracked.
*/
