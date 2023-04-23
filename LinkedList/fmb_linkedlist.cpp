#include <iostream>
using namespace std;

/* LinkedList node creation*/
struct node{
    int data;
    node *next;
};

/* Print the LinkdeList */
void PrintList(node *n){
    int count = 0;
    while (n!= NULL)
    {
        cout << n->data <<" ";
        n = n->next;
        count++;
    }
    cout << endl;
    cout << "The number of element in linkedlist is " << count << endl;
}
/* Add node at front*/
void front(node **head_ref, int newData){
    node *newNode = new node();
    newNode -> data = newData;
    newNode->next = *head_ref;
    *head_ref = newNode;
}

/* Add node after a node*/
void insertafter(node *prev_node, int newData){
    node *newNode = new node();
    newNode->data = newData;
    newNode->next = prev_node->next;
    prev_node->next = newNode;
}
int main()
{
    node *head = NULL;
     front(&head, 9);
     front(&head, -2);
     front(&head, 1);
     front(&head, 3);
     front(&head, 13);

     insertafter(head->next, 21);

     PrintList(head);
}