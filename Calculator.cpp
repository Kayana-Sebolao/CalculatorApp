# include "Calculator.h"

void add(){
    int a, b;
 cout<<"Enter two numbers to Add: ";
 cin>>a >> b;
 int result = a + b;
 cout<<"  "<<a<<endl;
 cout<<"+  "<<b<<endl;
 cout<<"-----"<<endl;
 cout<<"=  "<<result<<endl;
    
}

void subtract(){
    int a, b;
    cout<<"Enter two numbers to Subtract: ";
    cin>>a >>b;
    int result = a - b;
    cout<<"  "<<a<<endl;
    cout<<"-  "<<b<<endl;
    cout<<"-----"<<endl;
    cout<<"=  "<<result<<endl; 
}

void divide(){
    int a, b;
    cout<<"Enter two numbers to Divide: ";
 cin>>a >> b;
 int result = a/b;
 cout<<"  "<<a<<endl;
 cout<<"/  "<<b<<endl;
 cout<<"-----"<<endl;
 cout<<"=  "<<result<<endl;
}

void multiply(){
    int a, b;
    cout<<"Enter two numbers to Multiply: ";
    cin>>a >>b;
    int result = a*b;
    cout<<"  "<<a<<endl;
    cout<<"x  "<<b<<endl;
    cout<<"-----"<<endl;
    cout<<"=  "<<result<<endl;
}