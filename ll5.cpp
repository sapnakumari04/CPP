#include <iostream>
using namespace std;

//Delete Kth node 

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
    if (head == NULL || k <= 0) // Invalid list or invalid value of k
        return head;

    if (k == 1) { // Deleting the first node
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    int cnt = 1;
    Node* temp = head;
    Node* prev = NULL;

    while (temp != NULL && cnt != k) {
        prev = temp;
        temp = temp->next;
        cnt++;
    }

    if (temp == NULL) // Kth node not found
        return head;

    prev->next = temp->next;
    delete temp;
    
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
    cout << "Enter the value of k: ";
    cin >> k;

    head = del(head, k);
    cout << "After deletion:";
    printlist(head);

    return 0;
}
