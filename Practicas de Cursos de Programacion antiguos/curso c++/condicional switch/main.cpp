#include <iostream>

using namespace std;

int main()
{
    double num1 = 7;
    double num2 = 3;
    char operacion = '+';

    switch(operacion){
    case '+':
        cout << num1 << " + " << num2 << " = " << num1+num2 << endl;
        break;
    case '-':
        cout << num1 << " - " << num2 << " = " << num1-num2 << endl;
        break;
    case '*':
        cout << num1 << " * " << num2 << " = " << num1*num2 << endl;
        break;
    case '/':
        cout << num1 << " / " << num2 << " = " << num1/num2 << endl;
        break;
    default:
        cout << "Operacion invalida" << endl;
        break;
    }
    return 0;
}
