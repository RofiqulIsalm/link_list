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
int serach(node* head, int value){
    node* temp = head;
    int count = 0;
    while (temp!=NULL)
    {
        if (temp->data==value)
        {
            return true;
        }
        count++;
        temp = temp->next;
    }
    return count;
    
}