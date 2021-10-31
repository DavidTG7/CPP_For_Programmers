#include <iostream>
using namespace std;

/* You are given a decimal number. Your task is to convert it into a binary number. */

int main(){

    long long number, binary = 0, aux, product = 1;
    
    cout << "Write the number to convert into binary: \n";
    cin >> number;

    while(number != 0){
        aux = number % 2;
        binary += aux * product;
        number = number / 2;
        product *= 10;
    }
    cout << binary << endl;
}