/*
Platform :- Leetcode
Approach :- use three pointers one to point at previous element, one to point current element and one to point next element , make current element point to previous element 
            keep on moving right and pointing to the previous element as soon as you reach the last element make head point to that last element and return head.
*/
class Solution {
public:
    
    
    
    ListNode* reverseList(ListNode* head) {
        
        ListNode*prev = new ListNode;
        ListNode*next = new ListNode;
        ListNode*curr = new ListNode;
        prev = head;
        if(!prev || !prev->next)return head;
        
        curr = prev->next;
        prev->next = NULL;
        while(1){
            next = curr->next;
            curr->next = prev;
            if(!next){
                head = curr;
                break;
            }
            prev = curr;
            curr = next;
        }
        return head;
    }
};
