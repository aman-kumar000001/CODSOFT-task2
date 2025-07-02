#include<iostream>
using namespace std;
float add(float a,float b){
   cout<<"sum of a and b = "<<a+b<<endl;
}

float sub(float a,float  b){
    cout<<"Subtration of x and y = "<<a-b<<endl;
}

float  mult(float  a,float  b){
    cout<<"Multiplaction of x and y = "<<a*b<<endl;
}

float divi(float a,float b){
    if(b==0){
        cout<<"Error! division by 0"<<endl;
       return 0;
    }
    cout<<"Division of x and y (x/y) = "<<a/b <<endl;
}
int main()
{
    float  x,y;
    int choice;
    do
  {
    cout<<"!! Using simple calculator !!   \n"<<endl;

    cout<<"Selact an opration->\n"<<endl;
    cout<<"Enter 1 for Addition (+).\n";
    cout<<"Enter 2 for Subtraction (-).\n";
    cout<<"Enter 3 for Multipliation (*).\n";
    cout<<"Enter 4 for Division (/).\n";
    cout<<"Enter 5 for Exit\n"<<endl;
    cout<<"Enter your option:\n";
    cin>>choice;

    switch(choice)
    {
        case 1:
               cout<<"Enter the number x and y:\n";
               cin>>x>>y;
               add(x,y);
               break ;
        case 2:
               cout<<"Enter the number x and y:\n";
               cin>>x>>y;
               sub(x,y);
               break;
        case 3: 
               cout<<"Enter the number x and y:\n";
               cin>>x>>y;
               mult(x,y);
               break;
        case 4:
               cout<<"Enter the number x and y:\n";
               cin>>x>>y;
               divi(x,y);
               break;
        case 5:
               cout<<"Exit succesfully.\n"<<endl;
               break;
        default: 
         cout<<"\nError! Invalid option.\n";
         cout<<"Please try again.\n"<<endl;     
    }
    cout<<endl;

    }while(choice!=5);

     return 0;

}