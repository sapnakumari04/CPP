#include <iostream>
using namespace std;

//Length of the linked list

struct Node{
    int data;
    Node*next;
    Node(int x)
    {
        data=x;
        next=NULL;
    }
};

void printlist(Node*head)
{
    Node*curr=head;
    while(curr!=NULL)
    {
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}

int length(Node*head)
{
    int cnt=0;
    Node*temp=head;
    while(temp)
    {
        temp = temp->next;
        cnt++;
    }
    return cnt;
}

int main()
{
    Node*head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    printlist(head);
    cout<<"\n";
    cout<<"The length of the linked list is :";
    cout<<length(head);


    return 0;
}