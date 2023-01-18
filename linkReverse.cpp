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
node* reverseRecursive(node* &head){
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    
    node* n = reverseRecursive(head->next);
    head->next->next = head;
    head->next = NULL;
    return n;
}