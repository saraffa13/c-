#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next, *prev ;
    Node(int x){
        data=x;
        next=NULL;
        prev=NULL;
    }
};

void printList(Node *head)
{
    Node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
Node *deleteHead(Node *head){
    if(head==NULL){
        return NULL;
    }
    if(head->next==NULL){
        delete head;
        return NULL;
    }
    Node *temp=head;
    head=head->next;
    head->prev = NULL;
    delete temp;
    return head;

}



int main()
{
    cout<<"Enter the number of nodes that you want to create"<<endl;
    int n,x,val,pos;
    cin>>n;
    struct Node *temp=NULL,*head=NULL;
    cout<<"Enter the value "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(i==0){
            head = new Node (x);
            temp = head;
            continue;
        }        
        temp -> next = new Node (x);
        temp = temp->next;  

    }
    head = deleteHead(head);
    printList(head);
    return 0;
}
