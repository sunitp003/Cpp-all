#include <iostream>
using namespace std;

class Node {
public:
    int data;       // data of the node
    Node* prev;     // pointer to the previous node
    Node* next;     // pointer to the next node

    // constructor
    Node(int d) {
        this->data = d;   // initialize data
        this->prev = NULL; // initialize previous pointer
        this->next = NULL; // initialize next pointer
    }

    // destructor
    ~Node() {
        int value = this->data;  // store the data value for reference
        if (this->next != NULL) {
            delete next;   // delete remaining list nodes
            this->next = NULL; // set next to NULL to avoid dangling pointer
        }
        cout << "Memory freed for node with data: " << value << endl;
    }
};

// print the doubly linked list
// print the doubly linked list
void print(Node* head, Node* tail) {
    Node* temp = head;      // start from the head
    cout << "List: ";     
    while (temp != NULL) {       // traverse the list
        cout << temp->data << " ";  // print the data
        temp = temp->next;   // move to the next node
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
    int len = 0;           // initialize length
    Node* temp = head;      // start from the head
    while (temp != NULL) {
        len++;
        temp = temp->next;   // move to the next node
    }
    return len;            // return the length
}

// insert a new node at the head
void InsertAtHead(Node*& head, Node*& tail, int d) {
    if (head == NULL) {
        Node* temp = new Node(d); // create a new node
        head = temp;              // update head
        tail = temp;                // update tail
    } else {
        Node* temp = new Node(d); // create a new node
        temp->next = head;          // link new node to the former head
        head->prev = temp;      // link former head back to new node
        head = temp;        // update head to new node
    }
}

// insert a new node at the tail
void InsertAtTail(Node*& head, Node*& tail, int d) {
    if (tail == NULL) {
        Node* temp = new Node(d);// create a new node
        head = temp;          // update head    
        tail = temp;        // update tail
    } else {
        Node* temp = new Node(d); // create a new node
        tail->next = temp;  // link former tail to new node
        temp->prev = tail;  // link new node back to former tail
        tail = temp;        // update tail to new node
    }
}

// insert a new node at a specific position
void InsertAtPosition(Node*& head, Node*& tail, int position, int d) {
    if (position == 1) {
        InsertAtHead(head, tail, d); 
        return;
    }

    Node* temp = head; // start from the head
    int cnt = 1;      // initialize counter

    while (cnt < position - 1 && temp != NULL) {
        temp = temp->next;  // move to the next node
        cnt++;
    }

    // inserting at last
    if (temp->next == NULL) {
        InsertAtTail(head, tail, d);
        return;
    }

    Node* nodeToInsert = new Node(d);// create a new node
    nodeToInsert->next = temp->next; // link new node to the next node
    temp->next->prev = nodeToInsert; // link next node back to new node
    temp->next = nodeToInsert; // link current node to new node
    nodeToInsert->prev = temp;  // link new node back to current node
}

// delete a node at a specific position
void DeleteNode(int position, Node*& head, Node*& tail) {
    if (head == NULL) return;

    // deleting first node
    if (position == 1) {
        Node* temp = head;  // store the current head
        head = head->next; // update head to the next node
        if (head != NULL) {
            head->prev = NULL; // set previous of new head to NULL
        } else {
            // if list becomes empty
            tail = NULL; 
        }
        temp->next = NULL ; // isolate the node to be deleted
        delete temp;
    } 
    // deleting any other node
    else {
        Node* curr = head; // start from the head
        int cnt = 1;     // initialize counter
        while (cnt < position && curr != NULL) {
            curr = curr->next; // move to the next node
            cnt++;   // increment counter
        }

        if (curr == NULL) return; // invalid position

        if (curr->next == NULL) {
            // deleting last node
            tail = curr->prev; // update tail to previous node
            tail->next = NULL; // set next of new tail to NULL
        } else {
            curr->next->prev = curr->prev; // link next node back to previous node
            curr->prev->next = curr->next; // link previous node to next node
        }

        curr->next = NULL; // isolate the node to be deleted
        curr->prev = NULL; // isolate the node to be deleted
        delete curr; // free memory
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
