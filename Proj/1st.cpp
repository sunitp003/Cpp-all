#include<iostream>
using namespace std;
class AO
{
    public:

    float x,y,z;
    
    void add()
    {
        cout<<"/n Enter Two Integers\t";
        cin>>x>>y; z=x+y ;
        cout<<"\n Addition = "<<z<<endl<<endl;
    }

    void sub()
    {
        cout<<"\n Enter Two Integers\t";
        cin>>x>>y; z=x-y;
        cout<<"\n Subtraction ="<<z<<endl<<endl;
    }

    void mul()
    {
        cout<<"\n Enter Two Integers\t";
        cin>>x>>y; z=x*y;
        cout<<"\n Multiplication ="<<z<<endl<<endl;

    }

    void div()
    {
        cout<<"\n Enter Two Integers\t";
        cin>>x>>y; z=(x)/y;
        cout<<"\n Division ="<<z<<endl<<endl;
        
    }


    void Mod()
    {
        cout<<"\n Enter Two Integers\t";
        cin>>x>>y; z=int(x)%int(y);
        cout<<"\n Remainder ="<<z<<endl<<endl;
        
    }
};


int main()
{
    AO z;
    int s;
    

    do
    {
        cout<<"Input\t Menu "<<endl;
        cout<<"1\t Addition "<<endl;
        cout<<"2\t Subtraction "<<endl;
        cout<<"3\t Multiplication "<<endl;
        cout<<"4\t Division "<<endl;
        cout<<"5\t Remainder "<<endl;
        cout<<"6\t Exit "<<endl;


        cout<<"Enter your choice :";
        cin>>s;

        switch(s)
        {
            case 1: z.add();break;
            case 2: z.sub();break;
            case 3: z.mul();break;
            case 4: z.div();break;
            case 5: z.Mod();break;
        }

    }while(s<=5);
    
}