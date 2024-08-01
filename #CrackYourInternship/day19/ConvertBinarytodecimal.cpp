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
#include <cmath> // Include cmath for pow functi
class Solution
{
private:
    // pehle ll ko reverse kro
    ListNode *getReverse(ListNode *head)
    {
        ListNode *prev = NULL;
        ListNode *curr = head;
        ListNode *temp = NULL;
        while (curr != NULL)
        {
            temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        return prev;
    }
    // fir length find kro
    int getLength(ListNode *head)
    {
        int count = 0;
        {
            while (head != NULL)
            {
                count++;
                head = head->next;
            }
            return count;
        }
    }

public:
    // length tkke 2 * x krte jao or add kro or prinmt krdo
    int getDecimalValue(ListNode *head)
    {
        if (head == nullptr)
        {
            return 0;
        }

        head = getReverse(head);
        int length = getLength(head);
        int x = 0;
        for (int i = 0; i < length; i++)
        {
            x = x + head->val * pow(2, i);
            head = head->next;
        }
        return x;
    }
};