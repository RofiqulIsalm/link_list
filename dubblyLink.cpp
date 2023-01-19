#include<bits/stdc++.h>
using namespace std;
class node{ // creating node class
    public: 
        int data;
        node* next;
        node* pvt;

        node(int value){
            data = value;
            next = NULL;
            pvt = NULL;
        }
};
void insertAtHead(node* &head, int value) // creating a insert at head function for store value in Head
{
    node* n = new node(value);
    n->next = head;
    if (head!=NULL)
    {
        head->pvt = n;
    }
    head = n;    
}
void insertAtTail(node* &head, int value) // creating a insert at tail function for store value in Tail
{
    if (head==NULL)
    {
        insertAtHead(head,value);
        return;
    }
    
    node* n = new node(value);
    node* temp = head;
    while (temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->pvt = temp; 
}
void deletionHead(node* head){
    node* todelete = head;
    head = head->next;
    head->pvt = NULL;
    delete todelete;
}
void deletion(node* &head, int pos){ // creaing deletion function for deleted a value
    if (pos==1)
    {
        deletionHead(head);
        return;
    }
    
    node* temp = head;
    int count = 1;
    while (temp!=NULL&&count!=pos)
    {
        temp = temp->next;
        count++;
    }
    temp->pvt->next = temp->next;
    if (temp->next!=NULL)
    {
        temp->next->pvt = temp->pvt;
    }
    delete temp;
}
void display(node* head){ // creating display function for out put all  value in the list
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
    cout << "\nEnter size of list : ";
    cin >> n;
    cout << "\nEnter the link list value : ";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        insertAtTail(head,x);
    }
    cout << "Here is the link list : ";
    display(head);
    cout << "Do you want to delete [Y/N] : ";
    char x;
    cin >> x;
    if (x=='Y'||x=='y')
    {
        cout << "\nenter the position what you want to delete : ";
        int y;
        cin >> y;
        deletion(head,y);
    }
    cout << "Here is the Result : ";
    display(head);
    
    return 0;
}