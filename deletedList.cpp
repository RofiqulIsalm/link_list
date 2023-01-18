#include<bits/stdc++.h>
using namespace std;
class node{
    public:
        int data;
        node* next;

        node(int value){
            data = value;
            next = NULL;
        }
};
void deletionAtHead(node* &head){ // deleted at head
    node* temp = head;
    head = head->next;
    delete temp;
}
void deletion(node* &head, int vlaue){ // deleted at tail
    node* temp = head;
    while (temp->next->data!=value)
    {
        temp = temp->next;
    }
    node* todeleted = temp->next;
    temp->next = temp->next->next;

    delete todeleted;
}
