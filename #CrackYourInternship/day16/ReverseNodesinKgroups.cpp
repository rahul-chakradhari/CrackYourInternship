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
    ListNode *reverseKGroup(ListNode *head, int k)
    {
        // base condition
        if (head == NULL)
        {
            return NULL;
        }
        // agr list size less than k ho to
        ListNode *check = head;
        for (int i = 0; i < k; i++)
        {
            if (check == NULL)
            {
                return head;
            }
            check = check->next;
        }

        // first k nodes ko reverse kro
        ListNode *prev = NULL;
        ListNode *current = head;
        ListNode *temp = NULL;
        int count = 0;
        // suru k nodes reverse kro
        while (count < k && current != NULL)
        {
            temp = current->next;
            current->next = prev;
            prev = current;
            current = temp;
            count++;
        }
        // recursion call
        if (current != NULL)
        {
            head->next = reverseKGroup(temp, k);
        }

        // return krdo fir prev ko
        return prev;
    }
};