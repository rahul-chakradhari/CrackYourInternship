/* Linked list node structure
struct Node
{
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};*/

/*The method multiplies
two  linked lists l1 and l2
and returns their product*/

/* Multiply contents of two linked lists */
class solution
{
public:
    long long multiplyTwoLists(Node *first, Node *second)
    {
        // code here
        long long int a = 0, b = 0;
        long long int mod = 1000000007;
        Node *temp1 = first;
        Node *temp2 = second;

        while (temp1 != NULL)
        {
            a = (a * 10 + (temp1->data)) % mod;
            temp1 = temp1->next;
        }

        while (temp2 != NULL)
        {
            b = (b * 10 + (temp2->data)) % mod;
            temp2 = temp2->next;
        }

        return (a * b) % mod;
    }
};