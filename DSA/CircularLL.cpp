#include <iostream> 
using namespace std;

class Node{
    public :
    int data;
    Node* next;

    //CONSTRUCTOR
    Node(int d){
       this -> data = d; // this.data = d
       this -> next = NULL;// this.next = NULL     
    }

    //DESTRUCTOR
    ~Node(){
        int value = this -> data; //memory free karanaya sathi
        if(this -> next != NULL){ //agar next NULL nahi hai to hi delete karna hai
            delete next; //recursive call hoga destructor ka
            next = NULL; //to avoid dangling pointer
        }
        cout << "Memory is free for node with data " << value << endl;
    }


};
    //insertion
void InsertNode(Node* & tail , int element, int d){
    
    if (tail == NULL) //empty list
    {
        Node* newNode = new Node(d); //new node create karanaya sathi
        tail = newNode;             //tail point karanaya sathi new node la
        newNode -> next = newNode;  //circular link karanaya sathi
 
    }
    else
    {   //non empty list
        //assuming that the element is present in the list 
        Node* curr = tail; //tail is representing last node
        //element search karanaya sathi
        while(curr -> data != element){  //jab tak element nahi milta
            curr = curr -> next;  //next node pe jao
        }

        // element found -> curr is representing element wala node
        Node * temp = new Node(d);  //new node create karanaya sathi
        temp ->  next = curr ->  next ; //new node cha next point karanaya sathi curr cha next la
        curr -> next = temp;  //curr cha next point karanaya sathi new node la

    }
    
}
//printing 
void Print(Node* tail){ //tail is representing last node
    Node* temp = tail;  //tail cha copy temp madhe
//empty list
    if (tail == NULL){
        cout << "List is empty"<<endl;
        return;
    }

    //non empty list
    do
    {
        cout << tail -> data <<" "; //tail cha data print karanaya sathi
        tail = tail -> next;  //tail cha next karanaya sathi
    } while (tail != temp);     //jab tak tail temp ke barabar nahi ho jata
    cout <<endl;    //new line

}
//deletion
void DeleteNode(Node* &tail, int value){ // value is the node which we want to delete
    //empty list
    if (tail == NULL){
        cout<< "List is empty please check again"<<endl;
    }
    else //non empty list
    {
        Node* prev = tail ;  //prev is representing last node
        Node* curr = prev -> next; //curr is representing first node
        //node to be deleted is present
        while (curr-> data != value ) //jab tak value nahi milta
        {
            prev = curr; //prev cha next karanaya sathi
            curr = curr->next; //curr cha next karanaya sathi

        }
        //node is found and curr is representing the node to be deleted
        prev -> next = curr -> next ; //node delete karanaya sathi
        //1 node linked list
        if(curr == prev){//means only 1 node is present
            tail = NULL;  //tail NULL karanaya sathi
        }
        //>=2 node linked list
        else if(tail == curr){  //if tail is to be deleted
            tail = prev;  //tail move karanaya sathi
        }
        curr -> next = NULL;  //curr cha next NULL karanaya sathi
        delete curr;      //memory free karanaya sathi

    }
}    


int main(){

    Node* tail = NULL;

    //emply list  me insert kela
    InsertNode(tail,5,3);
    Print(tail);
    InsertNode(tail,3,5);
    Print(tail);
    InsertNode(tail,5,7);
    Print(tail);
    InsertNode(tail,7,9);
    Print(tail);

    InsertNode(tail,5,6);
    Print(tail);
    InsertNode(tail,9,10);
    Print(tail);

    InsertNode(tail,3,4);
    Print(tail);

    DeleteNode(tail,3);
    Print(tail);
    // DeleteNode(tail,6);
    // Print(tail);







    return 0;
}