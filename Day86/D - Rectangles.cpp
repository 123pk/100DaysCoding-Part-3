/*
Platform :- Atcoder
Contest :- Atcoder Beginner Contest 218
Approach :- Sort the points by increasing order of x coordinte , now for each of matching x coordinte between two different pair find the coordintes pair required to form rectangle
            maintain the frequency of those coordintes . Let 'x' be the frequency of required coordinate then no of rectangles that can be formed is (x*(x-1))/2 ,  so add this value
            for each and every 'x' of required coordinate.
*/
