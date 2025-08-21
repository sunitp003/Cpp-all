#include<iostream>
using namespace std;

class Node {
public:

    int data;
    Node* next;
    // constructor
    // to initialize data and next pointer
    Node(int data) {
        // this pointer refers to the current object
        // so this->data refers to the data member of the current object
        this -> data = data;
        // this->next refers to the next pointer of the current object
        // and we initialize it to NULL
        this -> next = NULL;
    }
    // destructor
    ~Node() {
       int value = this->data; // to store the data of the node being deleted
       // free the memory allocated for the node
       if(this->next != NULL) {
           delete next; // delete the next node if it exists
           this->next = NULL; // set next pointer to NULL
       }
       cout<< "Memory is freed for node with data: " << value << endl;
    }
};
void InsertAtHead(Node* &head , int d){
    // create new node
    Node* temp = new Node(d);
    // point new node to head
    // and head to new node
    temp -> next =head;
    // now head will point to new node
    // and new node will point to old head
    head = temp;// now head will point to new node

}

void InsertAtTail(Node* &tail, int d){
    // create new node
    Node* temp = new Node(d);
    // point tail to new node
    // and new node to NULL
    tail -> next = temp;
    // now tail will point to new node
    // and new node will point to NULL
    tail = temp;// now tail will point to new node

}
void InsertAtPosition(Node* &tail,Node* &head, int position, int d){
    // if position is 1, insert at start
    if(position == 1) {
        InsertAtHead(head, d);
        return;
    }

    Node* temp = head;// start from head
    int cnt=1;// to keep track of the current position

    // traverse the linked list to find the position
    // where we want to insert the new node
    while (cnt<position-1) {
        
        temp = temp->next; // move to the next node
        cnt++;
    }

    // inserting at last position
    if(temp->next == NULL) {
        InsertAtTail(temp, d);
        return;
    }
    // create new node for d
    Node* nodeToInsert = new Node(d);
    // point new node to temp->next
    nodeToInsert->next = temp->next;
    // point temp->next to new node
    temp->next = nodeToInsert;// now temp will point to new node


}

void DeleteNode(int position , Node* &head){
    //deleting first node
    if(position ==1){
        Node *temp =head;// store the head node in temp
        head = head -> next; // move head to the next node
        temp -> next = NULL; // set next pointer of temp to NULL
        delete temp; // free memory of the deleted node
    }
    //deleting any other node
    else {
        Node* curr = head;// start from head
        Node* prev = NULL; // to keep track of the previous node
        int cnt = 1; // to keep track of the current position   
        // traverse the linked list to find the position
        while (cnt < position) {
            prev = curr; // store the previous node
            curr = curr->next; // move to the next node   
            cnt++;

    }
    prev->next = curr->next; // point previous node to the next node of current node
    curr->next = NULL; // set next pointer of current node to NULL
    delete curr; // free memory of the deleted node
    }
}

void print(Node* &head){
        
    Node* temp = head;
    // traverse the linked list
    while(temp != NULL) {
        // print the data of each node
        cout << temp->data << " -> ";
        // move to the next node
        temp = temp->next;
    }
    cout << endl;
}


int main() {
    Node* node1  = new Node(10);
    cout<<endl;
    // cout <<"Value of data :"<< node1->data << endl; 
    // cout <<"Value of Next :"<< node1->next << endl;

    // head pointing to node1
    Node* head = node1;// head is the starting point of the linked list
    Node* tail = node1;// tail is the last node of the linked list

    print(head);
    InsertAtHead(head, 8);
      print(head);
    InsertAtTail(tail, 13);
      print(head); 
    InsertAtPosition(tail,head,3, 12);
      print(head); 

    cout << "Head: " << head->data << endl;
    cout << "Tail: " << tail->data << endl; 

    DeleteNode(2, head);
      print(head);

    cout<<endl;
    return 0;
}