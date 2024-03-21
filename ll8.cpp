#include <iostream>
using namespace std;

//Code to insert element at tail/end

struct Node
{
    int data;
    Node*next;
    Node(int x)
    {
        data=x;
        next=NULL;
    }
};

Node*insert(Node*head,int val)
{
    Node*temp=new Node(val);
    if(head==NULL)
        return temp;
    Node*curr=head;
    while(curr->next!=NULL)
    {
        curr=curr->next;
    }
    curr->next=temp;
    return head;
    
}

void printlist(Node *head)
{
    Node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
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


int main()
{
    Node* head = createLinkedList();
    cout << "Before insertion: ";
    printlist(head);

    int val;
    cout << "\nEnter the value you want to insert at the tail: ";
    cin >> val;
    head = insert(head, val);

    cout << "After insertion: ";
    printlist(head);


    return 0;
}

   