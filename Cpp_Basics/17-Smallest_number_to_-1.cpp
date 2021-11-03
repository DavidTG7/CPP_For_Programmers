#include <iostream>
using namespace std;

/* Your task is to write a function minimum. In the function parameter, 
   you will pass two values of type int by reference, and function will 
   set the smallest number of the two to -1. */

void minimum(int &number1, int &number2){
    int aux = -1;
    if (number1 > number2)
        number2 = aux;
    else if (number1 == number2){
        number1 = aux;
        number2 = aux;
    }
    else 
        number1 = aux;
    
}

int main(){
    int number1, number2;
    
    cout << "Write the first number: \n";
    cin >> number1;
    cout << "Write the second number: \n";
    cin >> number2;

    minimum(number1, number2);

    cout << "number1 = " << number1 << endl;
    cout << "number2 = " << number2 << endl;
}