/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
public:
    bool hasCycle(ListNode *head)
    {
        // simpel 2 pointers bnao
        ListNode *first = head;
        ListNode *last = head;
        // 1 ko 2kdm bdhao or 1 ko 1 kadam badhao
        while (first != NULL && first->next != NULL)
        {
            // agr dono kisi jgh same aae to cyclic hai
            first = first->next->next;
            last = last->next;
            if (first == last)
            {
                return true;
            }
        }
        return false;
    }
};