#include <iostream>
using namespace std;

/*  The task is to find whether the given number is prime or not. */

int main(){
    long number, i = 2;
    cout << "Write the number: \n";
    cin >> number;

    while(i < number){
        if(number % i == 0){
            cout << "Not prime.\n";
            exit(-1);
        }
        i++;
    }
    if(number == 0 || number == 1){
        cout << "Not prime.\n";
        exit(-1);
    }
    cout << "Prime.\n";
}