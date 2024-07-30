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
        // empty list hai
        if (head == NULL)
        {
            return NULL;
        }
        // non empty list hai
        ListNode *current = head;
        while (current != NULL)
        {
            if ((current->next != NULL) && current->val == current->next->val)
            {
                ListNode *next = current->next->next;
                ListNode *todelete = current->next;
                delete (todelete);
                current->next = next;
            }
            else
            {
                current = current->next;
            }
        }
        return head;
    }
};