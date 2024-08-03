class Solution
{
public:
    Node *compute(Node *head)
    {

        if (head == NULL)
        {
            return head;
        }
        Node *temp = head;
        Node *current = head;

        while (temp->next != NULL)
        {
            if (temp->next->data > temp->data)
            {
                temp->data = temp->next->data;
                Node *nodeToDelete = temp->next;
                temp->next = temp->next->next;
                delete nodeToDelete;

                temp = current;
            }
            else
            {
                temp = temp->next;
            }
        }
        return head;
    }
};