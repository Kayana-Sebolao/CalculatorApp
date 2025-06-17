#include "Calculator.h"

int main(){
    int option;
    char descion;
    cout<<"Welcome to the calculator App!"<<endl;
    do{
    cout<<"Would you like to perform an operation? Yes(Y) or No(N)"<<endl;
    cin>>descion;

    
    if (descion == 'Y' || descion == 'y') {
        cout<<"Choose one of the following operations:\n 1.Addition\n 2.Subtraction\n 3.Multipliation\n 4.Divition\n";
    cin>>option;

     switch(option){
        case 1:
        add();
        break;
        case 2:
        subtract();
        break;
        case 3:
        multiply();
        break;
        case 4:
        divide();
        break;
        default:
        cout<<"invalid OPtion!"<<endl; 
     }
    
    }
    } while(descion == 'Y' || descion == 'y');


     return 0;

}