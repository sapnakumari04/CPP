#include <iostream>
using namespace std;

//Deleting the head of the Doubly Linked List 

struct Node{
    int data;
    Node*prev;
    Node*next;
    Node(int d)
    {
        data=d;
        prev=NULL;
        next=NULL;
    }
};

void printlist(Node *head)
{
    Node *curr=head;
    while(curr!=NULL)
    {
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    cout<<endl;
}

Node* createLinkedList() {
    Node* head = NULL;
    Node* tail = NULL;
    char choice = 'y';

    while (choice == 'y' || choice == 'Y') {
        int data;
        cout << "Enter data for the new node: ";
        cin >> data;

        Node* newNode = new Node(data);

        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }

        cout << "Do you want to continue (y/n)?: ";
        cin >> choice;
    }

    return head;
}

Node *del(Node*head)
{
    if(head==NULL) return NULL;
    if(head->next==NULL)
    {
        delete head;
        return NULL;
    }
    else
    {
        Node*temp=head;
        head=head->next;
        head->prev=NULL;
        delete temp;
        return head;
        
    }
}


int main()
{
    Node*head=createLinkedList();
    cout << "Doubly Linked List Before Deletion: ";
    printlist(head);
    head=del(head);
    cout<<"Doubly Linked List After Deletion: ";
    printlist(head);
    
    return 0;
}    