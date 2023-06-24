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
class Solution
{
public:
    ListNode *deleteDuplicates(ListNode *head)
    {

        ListNode *ans = head;

        if (ans == NULL)
            return head;
        else
        {
            while (ans->next != NULL)
            {
                if (ans->val == ans->next->val)
                    ans->next = ans->next->next;
                else
                    ans = ans->next;
            }
        }

        return head;
    }
};