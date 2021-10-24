#include <iostream>
using namespace std;
 /* Given the total number of seconds, 
 the task is to display the number of hours, minutes, and seconds in it. */

 int main(){
     int hours, min, sec;

     int total_seconds = 3870;

     hours = (total_seconds / 60) / 60;
     min = (total_seconds/60) % 60;
     sec = total_seconds % 60;

     cout << "Total seconds = " << total_seconds << endl;
     cout << "Hours = " << hours << endl;
     cout << "Minutes = " << min << endl;
     cout << "Seconds = " << sec << endl;
 }