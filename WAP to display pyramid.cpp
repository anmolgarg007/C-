/*Use for loops to construct a program that displays a pyramid of Xs on the screen. Thepyramid should look like thisXXXXXXXXXXXXXXXXXXXXXXXXXexcept that it should be 20 lines high, instead of the 5 lines shown here. One way to dothis is to nest two inner loops, one to print spaces and one to print Xs, inside an outerloop that steps down the screen from line to line.*/

#include<iostream>
#include <math.h>
using namespace std;
int main (){
//using for loop 
//using 2 loops for rows and coloumns
        for (int i =1; i <=20; i++) {
            for (int j = 1; j <=(2*i)-1; j++) {
                cout<<"X";
            }
//leaving a line using newe line character
           cout<<"\n";
        }
    return 0;}