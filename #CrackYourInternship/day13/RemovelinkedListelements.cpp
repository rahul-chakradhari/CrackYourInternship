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
    ListNode *removeElements(ListNode *head, int val)
    {
        // agar kuch hoga hi nhi to head dal do sidha
        if (head == NULL)
        {
            return head;
        }
        // agr value mile to skip krwa kr next value ko point krdo
        while (head != nullptr && head->val == val)
        {
            head = head->next;
        }
        ListNode *curr = head;
        // jaha check kr re wo agr NULL na ho to uske next me direct next ka bi next krke dal do wrna skip kr do val ko
        while (curr != NULL && curr->next != NULL)
        {
            if (curr->next->val == val)
            {
                curr->next = curr->next->next;
            }
            else
            {
                curr = curr->next;
            }
        }
        return head;
    }
};