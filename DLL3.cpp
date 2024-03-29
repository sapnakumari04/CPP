#include <iostream>
using namespace std;

//Deleting the tail of the Doubly Linked List 
struct Node {
    int data;
    Node* next;
    Node* prev;
    
    Node(int d) {
        data = d;
        prev = NULL;
        next = NULL;
    }
};

void printList(Node* head) {
    Node* curr = head;
    while (curr != NULL) {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
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
            newNode->prev = tail;
            tail = newNode;
        }

        cout << "Do you want to continue (y/n)?: ";
        cin >> choice;
    }

    return head;
}

Node* deleteLast(Node* head) {
    if (head == NULL)
        return NULL;
    
    if (head->next == NULL) {
        delete head;
        return NULL;
    }

    Node* curr = head;
    while (curr->next != NULL) {
        curr = curr->next;
    }

    if (curr->prev != NULL) {
        curr->prev->next = NULL;
    }
    delete curr;

    return head;
}

int main() {
    Node* head = createLinkedList();

    cout << "Doubly Linked List Before Deletion: ";
    printList(head);

    head = deleteLast(head);

    cout << "Doubly Linked List After Deletion: ";
    printList(head);

    return 0;
}
