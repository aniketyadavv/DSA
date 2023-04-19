#include<iostream>
using namespace std;

struct node{
    int data;
    node *next;
};

void displayList(node *n){
    while(n!= NULL){
        cout << n->data<<" ";
        n = n->next;
    }
}
int main(){
    node *head = new node();
    node *second = new node();
    node *third = new node();

    head->data = 1;
    head->next = second;

    second->data = 3;
    second->next = third;

    third->data = 7;
    third->next = NULL;

    displayList(head);
}