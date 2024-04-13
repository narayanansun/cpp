// Online C++ compiler to run C++ program online
#include <iostream>

struct Node {
    int data;
    Node *next;
};

void insertNode (struct Node **head, int data);
void printList (struct Node *head);
void deleteNode (struct Node **head, int position);

void insertNode (struct Node **head, int data)
{
    struct Node *newnode = (struct Node*) malloc(sizeof(struct Node));
    newnode->data = data;
    newnode->next = *head;
    *head = newnode;
}

void printList (struct Node *head)
{
    while (head != NULL)
    {
        std::cout << head->data <<"\n";
        head = head->next;
    }
}

void deleteNode (struct Node **head, int position)
{
    struct Node *temp = *head;
    
    if (position == 0)
    {
        *head = temp->next;
        free(temp);
        return;
    }
    
    for (int i=0; temp!=NULL & i < (position-1); i++)
    {
        temp = temp->next;
    }
    
    if (temp == NULL & temp->next == NULL)
    return;
    
    struct Node *next = temp->next->next;
    free(temp->next);
    temp->next = next;
    
}


int main() {
    //declaration
    int iValue = 100;
    int *ptr = &iValue;
    
    struct Node *head = NULL;
    
    insertNode(&head, 4);
    insertNode(&head, 5);
    insertNode(&head, 6);
    insertNode(&head, 7);
    insertNode(&head, 8);

    printList(head);
    
    deleteNode(&head, 2);
    std::cout << "Node deleted \n";
    printList(head);
    // Write C++ code here
    std::cout << "Value  :" << iValue <<"\n";

    return 0;
}