#include <iostream>
using namespace std;
 /* You are given a number. Your task is to find 
    whether the given number is a palindrome or not. */

int main(){

    int number, palindrome = 0, aux;

    cout << "Write the number to see if it is palindrome or not:\n";
    cin >> number;

    int number1 = number;

    while (number != 0){
        aux = number % 10;
        palindrome = aux + (10 * palindrome);
        number /= 10;
    }
    if (number1 == palindrome){
        cout << "Is palindrome.\n";
    }
    else
        cout << "Is not palindrome.\n";
}