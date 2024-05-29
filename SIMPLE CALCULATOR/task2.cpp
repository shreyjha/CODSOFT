#include <iostream>
using namespace std;

int main() {

    float num1, num2;
    char op;

    cout<<"WELCOME TO SIMPLE CALCULATOR!"<<endl;

    cout<<"Enter the first number : ";
    cin>>num1;

    cout<<"Enter the second number : ";
    cin>>num2;

    cout<<"Enter the operation to be performed among (+ or - or * or /) : ";
    cin>>op;

    switch(op) {

        case '+' :
        cout<<num1<<" + "<<num2<<" = "<<num1+num2;
        break; 

        case '-' :
        cout<<num1<<" - "<<num2<<" = "<<num1-num2;
        break; 

        case '*' :
        cout<<num1<<" * "<<num2<<" = "<<num1*num2;
        break; 

        case '/' :
        cout<<num1<<" / "<<num2<<" = "<<num1/num2;
        break; 

        default :
        cout<<"ERROR! Please choose a correct operation.";
        break;
    }

    return 0;
}