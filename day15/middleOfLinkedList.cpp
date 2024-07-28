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
private:
    // pehle lenmgth nikal lo
    int getLength(ListNode *head)
    {
        int length = 0;
        while (head != NULL)
        {
            length++;
            head = head->next;
        }
        return length;
    }

public:
    // fir middle le kr suru se midile tk print krwa do
    ListNode *middleNode(ListNode *head)
    {
        int length = getLength(head);
        int ans = (length / 2) + 1;
        ListNode *current = head;
        for (int i = 1; i < ans; i++)
        {
            current = current->next;
        }
        return current;
    }
};