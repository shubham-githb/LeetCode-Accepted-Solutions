/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */


class Solution {
public:
    ListNode* removeZeroSumSublists(ListNode* head) {
        ListNode* temp=new ListNode();
        temp->next=head;
        
        for(ListNode* t=temp;t!=NULL;t=t->next)
        {
           int sum=0;
            for(ListNode* j=t->next;j!=NULL;j=j->next)
            {
                sum+=j->val;
                if(sum==0)
                {
                    if(j->next!=NULL)
                         t->next=j->next;
                    else
                    {
                        t->next=NULL;
                        break;
                    }
                }
            }
            
        }
        
        return temp->next;
        
        
        
    }
};