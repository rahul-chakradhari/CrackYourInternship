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
    int skipA, skipB;
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        // pehle 2 pointers bnae
        ListNode *listA = headA;
        ListNode *listB = headB;
        // fir skip tk ke aaghe bdha liye kyoki whi se check krna hai n
        for (int i = 0; i < skipA && listA != NULL; i++)
        {
            listA = listA->next;
        }
        for (int i = 0; i < skipB && listB != NULL; i++)
        {
            listB = listB->next;
        }
        while (listA != listB)
        { // null nhi hoga ek bdhao
            if (listA != NULL)
            {
                listA = listA->next;
            }
            // wrna khtm hog to 2nd ko dekho
            else
            {
                listA = headB;
            }
            // null nhi hoga ek bdhao
            if (listB != NULL)
            {
                listB = listB->next;
            } // wrna 1st ko dekho
            else
            {
                listB = headA;
            }
        }
        return listB;
    }
};