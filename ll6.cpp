#include <iostream>
using namespace std;

//Delete  the given value from the entered linked list 

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
    cout<<endl;
}

Node* del(Node* head, int k) {
    if (head == NULL ) 
        return head;

    if (head->data==k) { 
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    Node *temp=head;
    Node*prev=NULL;
    while(temp!=NULL)
    {
        if(temp->data==k)
        {
            prev->next=prev->next->next;
            delete(temp);
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;
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
    cout << "Before deletion:";
    printlist(head);

    int k;
    cout << "Enter the element you want to delete from linked list : ";
    cin >> k;

    head = del(head, k);
    cout << "After deletion:";
    printlist(head);

    return 0;
}
