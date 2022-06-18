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
    bool isPalindrome(ListNode* head) {
        ListNode *slow=head,*fast=head;
        while(fast!=NULL && fast->next!=NULL)
        {
            fast=fast->next->next;
            slow=slow->next;
        }
        if(fast!=NULL)
        {
            slow=slow->next;
        }
        ListNode *prev=NULL;
        while(slow!=NULL)
        {
            ListNode *next=slow->next;
            slow->next=prev;
            prev=slow;
            slow=next;
        }
        while(prev!=NULL)
        {
            if(prev->val!=head->val)
            {
                return false;
            }
            prev=prev->next;
            head=head->next;
        }
            
            
     return true;
    }
};