/*
Platform :- Leetcode
Problem :- Reversing a linked list
*/

class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        ListNode*p=NULL;
        ListNode*q=NULL;
        ListNode*r=NULL;
        ListNode*s=NULL;
        ListNode*t=NULL;
        p=head;
        int c=0;
        if(m==1)
        {
            while(p)
            {  
             if(c==n)
            {
                break;
            }
                r=q;
                q=p;
                p=p->next;
                q->next=r;
                c++;
            
            }
            head->next=p;
            head=q;
            return head;
        }
       
        while(p)
        {
            if(c<m)
            {
                r=q;
                q=p;
                p=p->next;
                    
            }
            else if(c<=n)
            {
                 r=q;
                q=p;
                p=p->next;
                q->next=r;
                
            }
            c++;
            if(c==m)
                    {
                        s=r;
                        t=q;
                    }
            if(c==n)
            {
                break;
            }
        }
        
        s->next=q;
        t->next=p;
        return head;
    }
};
