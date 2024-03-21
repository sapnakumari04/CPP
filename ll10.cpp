#include <iostream>
using namespace std;

//Code to insert element before the value x

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


Node* insert(Node* head, int el, int val)
{
    if (head == NULL) return NULL;

    if (head->data == val) {
        Node* newNode = new Node(el);
        newNode->next = head;
        return newNode;
    }

    Node* temp = head;
    while (temp->next != NULL) {
        if (temp->next->data == val) {
            Node* newNode = new Node(el);
            newNode->next = temp->next;
            temp->next = newNode;
            break;
        }
        temp = temp->next;
    }
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

    int el;
    cout << "\nEnter the element you want to insert : ";
    cin >> el;
    int k;
    cout << "\nEnter the value before which you want to insert the el: ";
    cin >> k;
    
    head = insert(head, el,k);

    cout << "After insertion: ";
    printlist(head);


    return 0;
}

   