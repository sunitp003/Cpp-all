#include<iostream>
using namespace std;

class Stack{
  
    // properties 
    public:
        int *arr;
        int top;
        int size;
        


    //behaviour
    Stack(int size){
        this -> size = size;
        arr = new int[size];
        top =-1;

    }
    void push (int element){
        if (size - top >1){
            top++;
            arr[top] = element;
        }

    }
    void pop(){
        if(top>=0){
            top--;
        }
        else
        {
            cout<< "Stack Underflow"<<endl;
        }
        


    }

    int peek() {
    if (top >= 0)
        return arr[top];
    else {
        cout << "Stack is Empty" << endl;
        return -1; 
    }
}

    bool isEmpty() {
    if (top == -1)
        return true;
    else
        return false;
}

    


};
int main(){
    Stack st(5);

    st.push(22);
    st.push(23);
    st.push(24);
    
    if (st.isEmpty())
    {
        cout<<"\nStack is empty !!!!!!"<<endl;
    }else
    {
        cout<<"\nStack is not empty"<<endl;
    }
    cout<<"Peek is : "<<st.peek() ;
    st.pop();

    if (st.isEmpty())
    {
        cout<<"\nStack is empty !!!!!!"<<endl;
    }else
    {
        cout<<"\nStack is not empty"<<endl;
    }

    cout<<"\n"<<st.peek() ;
    st.pop();
    st.pop();

    if (st.isEmpty())
    {
        cout<<"\nStack is empty !!!!!!"<<endl;
    }else
    {
        cout<<"\nStack is not empty"<<endl;
    }
    
    


    return 0;
}
