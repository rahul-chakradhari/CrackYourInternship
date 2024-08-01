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
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        // 4 nodes bnao
        ListNode *dummy = new ListNode(-1);
        ListNode *curr = dummy;
        ListNode *temp1 = l1;
        ListNode *temp2 = l2;
        int carry = 0;
        // jbtk ke pura last tk na check ho add krte jao dono Linkedlist se
        while (temp1 != NULL || temp2 != NULL)
        {
            int sum = carry;
            if (temp1)
            {
                sum = sum + temp1->val;
            }
            if (temp2)
            {
                sum = sum + temp2->val;
            } // normal sum or carry ka formula lgao
            ListNode *newNode = new ListNode(sum % 10);
            carry = sum / 10;
            curr->next = newNode;
            curr = curr->next;
            // temp1 ko aaghe bdhao
            if (temp1)
            {
                temp1 = temp1->next;
            }
            // temp2 ko aaghe bdhao
            if (temp2)
            {
                temp2 = temp2->next;
            }
        } // agr dono me se 1 list empty ho to carry ko add krna pdega
        if (carry)
        {
            ListNode *newNode = new ListNode(carry);
            curr->next = newNode;
        }
        // return krao dummy ke next ko
        return dummy->next;
    }
};