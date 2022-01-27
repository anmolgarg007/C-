/* Suppose you give a dinner party for six guests, but your table seats only four. In howmany ways can four of the six guests arrange themselves at the table? Any of the sixguests can sit  in the  first  chair.  Any  of  the  remaining  five  can  sit  in  the  second  chair.  Anyof  the remaining four can sit in the third chair, and any of the remaining three can sit inthe fourth chair.  (The  last  two  will  have  to  stand.)  So  the  number  of  possible  arrangementsof  six guests in four chairs is 6*5*4*3, which is 360. Write a program that calculatesthe number of  possible  arrangements  for  any  number  of  guests  and  any  number  ofchairs.  (Assume there will never be fewer guests than chairs.) Don’t let this get too complicated. Asimple for loop should do it.*/




#include<iostream>
#include <math.h>
using namespace std;
int main (){
    int i,guest,chairs,total=1;
    //taking input
    cout<<"Enter the no. of guest";
    cin>>guest;
    //taking input
    cout<<"Enter the no. of chairs";
    cin>>chairs;
    //conditional statement
    if(guest>chairs){
        for (int i = 0; i < chairs; i++) {
            total=total*guest;
            guest--; //decerement operator
        }
    }
    //final result
    cout<<"No. of possible arrangements are:"<<total;
    return 0;}