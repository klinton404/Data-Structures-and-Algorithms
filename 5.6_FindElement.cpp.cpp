#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

Node *linkedListTraversal(struct Node *head, int item, Node **prev)
{
    Node *ptr = head;
    *prev = NULL; // frist e prev null thakbe karon kono value na thaktei pare

    while (ptr != NULL)
    {
        if (ptr->data == item)
        {
            return ptr; // first ei peye gele pointer return and prev hobe null
        }
        else
        {
            *prev = ptr;     // first e na pele ager pointer hobe prev
            ptr = ptr->next; // and next pointer hobe new ptr
        }
    }
    return NULL;
}

int main()
{
    // Declare node names
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    // Allocate memory for nodes in the linked list in Heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    // Link first and second nodes
    head->data = 7;
    head->next = second;

    // Link second and third nodes
    second->data = 11;
    second->next = third;

    // Link third and fourth nodes
    third->data = 41;
    third->next = fourth;

    // Terminate the list at the third node
    fourth->data = 66;
    fourth->next = NULL;

    int item = 41;
    Node *prev = NULL;
    Node *searchedResult = linkedListTraversal(head, item, &prev);

    if (searchedResult)
    {
        cout << "Found item " << searchedResult->data << " at address " << searchedResult << endl;
        if (prev)
        {
            cout << "Previous node's data: " << prev->data << " at address " << prev << endl;
        }
        else
        {
            cout << "The item is the head of the list, so there is no previous node." << endl;
        }
    }
    else
    {
        cout << "Item not found in the list." << endl;
    }

    return 0;
}
