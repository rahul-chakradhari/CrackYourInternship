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
#include <vector>
class Solution
{
private:
    bool checkPalindrome(vector<int> v)
    {
        int n = v.size();
        int s = 0, e = n - 1;
        while (s <= e)
        {
            if (v[s] != v[e])
            {
                return false;
            }
            s++;
            e--;
        }
        return true;
    }

public:
    bool isPalindrome(ListNode *head)
    {
        // pehle array bnao
        vector<int> v;
        ListNode *temp = head;
        // fir pure contents ko array me daldo
        while (temp != NULL)
        {
            v.push_back(temp->val);
            temp = temp->next;
        }
        // 2 pointer logic apply kro
        return checkPalindrome(v);
    }
};