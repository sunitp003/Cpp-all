#include<iostream>
using namespace std ;
class Bank 
{
      public:
      int bal , accno , wamt , damt ;
      Bank(int a, int b)
      {
          accno = a;
          bal = b;

      }
      void wid();           //
      void dip();           //declaration of function
      void display();       //


};

void Bank::wid() //  definition of function
{ 
        cout<<"\n\n Enter Account No. ;\t";              //  Defination of function
        cin>>accno;                                      //  defination outside the class
        cout<<"\n Enter Amount To Withdraw :\t";         //  using scope resolution operation
        cin>>wamt;
        while (wamt > bal )
        {
               cout<<"\n Amount Exceeding Balance\n\n\t Enter Valid Amount \t";
               cin>>wamt;

        }
        bal-=wamt;
        cout<<"\n\n Remaining Balance :\t"<<bal;
        cout<<"\n\n**************#########*****************" ;

};

void Bank::dip()

{
        cout<<"\n\n Enter Account No.  : \t";
        cin>>accno;
        cout<<"\n Enter Amount To Deposit :\t" ;
        cin>>damt;

        bal+=damt;

        cout<<"\n\n Remaining Balance :\t"<<bal;
        cout<<"\n\n**************#########*****************" ;

};
void Bank::display()
{
        cout<<"\n Balance  :\t"<<bal; 
        cout<<"\n\n**************#########*****************" ;

};


int main()

{
        Bank p(1, 5000);
        int choice ;
    do
    {
        cout<<endl<<endl;
        cout<<"************** B A N K *****************";
        cout<<"\n\n Enter Your Choice From Following  : ";
        cout<<"\n\n  1. \t Withdraw Ammount ";
        cout<<"\n\n  2. \t Deposit Amount ";
        cout<<"\n\n  3. \t Display Amount ";
        cout<<"\n\n  4. \t Exit Program \n\n Choice \t ";
        cin>>choice ;
        cout<<"\n\n**************#########*****************" ;
    switch( choice )
        {
            case 1 : p.wid();break;
            case 2 : p.dip();break;
            case 3 : p.display();break;
            case 4 : break;
        }

        

    }while( choice <= 3 );
    
}




