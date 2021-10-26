#include <iostream>
using namespace std;

/* You are given a base and an exponent. 
   Your task is to calculate the power of the number. */

int main(){
    int base = 5, exponent = 4;
    int result = base;

    for(int i = 1; i < exponent; i++){
        result *= base;
    }
    cout << base << " ^ " << exponent << " = " << result << endl;
}