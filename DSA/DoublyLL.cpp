#include <iostream>
using namespace std;

class Node {
public:
    int data;       // data of the node
    Node* prev;     // pointer to the previous node
    Node* next;     // pointer to the next node

    // constructor
    Node(int d) {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }

    // destructor
    ~Node() {
        int value = this->data;
        if (this->next != NULL) {
            delete next;   // delete remaining list nodes
            this->next = NULL;
        }
        cout << "Memory freed for node with data: " << value << endl;
    }
};

// print the doubly linked list
// print the doubly linked list
void print(Node* head, Node* tail) {
    Node* temp = head;
    cout << "List: ";
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    // also show head and tail
    if (head != NULL && tail != NULL) {
        cout << "Head: " << head->data << "  Tail: " << tail->data << endl << endl;
    } else {
        cout << "List is empty!" << endl << endl;
    }
}

// get the length of the doubly linked list
int getLength(Node* head) {
    int len = 0;
    Node* temp = head;
    while (temp != NULL) {
        len++;
        temp = temp->next;
    }
    return len;
}

// insert a new node at the head
void InsertAtHead(Node*& head, Node*& tail, int d) {
    if (head == NULL) {
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    } else {
        Node* temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

// insert a new node at the tail
void InsertAtTail(Node*& head, Node*& tail, int d) {
    if (tail == NULL) {
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    } else {
        Node* temp = new Node(d);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

// insert a new node at a specific position
void InsertAtPosition(Node*& head, Node*& tail, int position, int d) {
    if (position == 1) {
        InsertAtHead(head, tail, d);
        return;
    }

    Node* temp = head;
    int cnt = 1;

    while (cnt < position - 1 && temp != NULL) {
        temp = temp->next;
        cnt++;
    }

    // inserting at last
    if (temp->next == NULL) {
        InsertAtTail(head, tail, d);
        return;
    }

    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}

// delete a node at a specific position
void DeleteNode(int position, Node*& head, Node*& tail) {
    if (head == NULL) return;

    // deleting first node
    if (position == 1) {
        Node* temp = head;
        head = head->next;
        if (head != NULL) {
            head->prev = NULL;
        } else {
            // if list becomes empty
            tail = NULL;
        }
        temp->next = NULL;
        delete temp;
    } 
    // deleting any other node
    else {
        Node* curr = head;
        int cnt = 1;
        while (cnt < position && curr != NULL) {
            curr = curr->next;
            cnt++;
        }

        if (curr == NULL) return; // invalid position

        if (curr->next == NULL) {
            // deleting last node
            tail = curr->prev;
            tail->next = NULL;
        } else {
            curr->next->prev = curr->prev;
            curr->prev->next = curr->next;
        }

        curr->next = NULL;
        curr->prev = NULL;
        delete curr;
    }
}

// main function to demonstrate DLL
int main() {
    Node* head = NULL;
    Node* tail = NULL;

    print(head,tail);
    cout << "Length: " << getLength(head) << endl;

    InsertAtHead(head, tail, 11);
    print(head,tail);

    InsertAtHead(head, tail, 12);
    print(head,tail);

    InsertAtHead(head, tail, 13);
    print(head,tail);

    InsertAtTail(head, tail, 17);
    print(head,tail);

    InsertAtTail(head, tail, 18);
    print(head,tail);

    InsertAtTail(head, tail, 19);
    print(head,tail);

    InsertAtPosition(head, tail, 1, 120);
    print(head,tail);

    InsertAtPosition(head, tail, 4, 130);
    print(head,tail);

    // cout << "Head: " << head->data << " Tail: " << tail->data << endl << endl;

    InsertAtPosition(head, tail, 9, 140);
    print(head,tail);

    // cout << "Head: " << head->data << " Tail: " << tail->data << endl << endl;

    DeleteNode(6, head, tail);
    print(head,tail);

    // cout << "Head: " << (head ? head->data : -1) 
    //      << " Tail: " << (tail ? tail->data : -1) << endl << endl;

    return 0;
}
