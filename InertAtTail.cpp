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
void InsertAtTail(node* &head,int value){
    node* n = new node(value);
    if(head==NULL){
        head = n;
        return;
    }
    node* temp = head;
    while (temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

void display(node* head){
    node* temp = head;
    while (temp!=NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
    
}

int main(){
    node* head = NULL;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        InsertAtTail(head,x);
    }
    display(head);
    return 0;
}