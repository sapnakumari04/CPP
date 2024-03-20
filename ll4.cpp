#include <iostream>
using namespace std;

// Delete last/tail node
struct Node {
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

void printlist(Node* head) {
    Node* curr = head;
    while (curr != NULL) {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}


Node* del(Node* head) {
    if (head == NULL) 
        return NULL;
    if (head->next == NULL) { 
        delete head;
        return NULL;
    }
    Node* temp = head;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }
    delete (temp->next);
    temp->next = NULL;
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

int main() {
    Node* head = createLinkedList();

    cout << "Linked List before deletion: ";
    printlist(head);

    head = del(head);

    cout << "Linked List after deletion: ";
    printlist(head);

    return 0;
}
