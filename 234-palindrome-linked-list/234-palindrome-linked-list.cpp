/**
 *Definition for singly-linked list.
 *struct ListNode {
 *  int val;
 *  ListNode * next;
 *  ListNode() : val(0), next(nullptr) {}
 *  ListNode(int x) : val(x), next(nullptr) {}
 *  ListNode(int x, ListNode *next) : val(x), next(next) {}
 *};
 */
class Solution
{
    public:
        bool isPalindrome(ListNode *head)
        {
            ListNode *fast = head, *slow = head;
            while (fast != NULL && fast->next != NULL)
            {
                fast = fast->next->next;
                slow = slow->next;
            }
            if (fast != NULL)
            {
                slow = slow->next;
            }
           	// cout<<slow->val<<endl;

           	//reverse second part

            ListNode *prev = NULL;
            while (slow!=NULL)
            {
                ListNode *x = slow->next;
                slow->next = prev;
                if (x == NULL)
                {
                    break;
                }
                prev = slow;
                slow = x;
            }

            while (slow != NULL)
            {
                cout << slow->val << " " << head->val << endl;
               	if(slow->val!=head->val)
               	{
               	    return false;
               	}
                slow = slow->next;
                head = head->next;
            }

            return true;
        }
};