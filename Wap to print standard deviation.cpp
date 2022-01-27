/*Modify your program to compute and display both the range of values in thedata collection and the standard deviation of the data collection. To computethe standard deviation, accumulate the sum of the squares of the data values( sum_squares ) in the main loop. After loop exit, use the formula*/

#include<iostream>
#include <math.h>
using namespace std;
int main ()
{
	
    int arr[10], n, i,square_sum=0,avg1,sum=0,avg2;
    double standard_devi;
//declaring the size of array
    cout << "Enter the size of the array : ";
    cin >> n;
//taking user input
    cout << "Enter the elements of the array : ";
    for (i = 0; i < n; i++)
        cin >> arr[i];
    for (i = 0; i < n; i++){
        square_sum=(arr[i]*arr[i])+square_sum;
        
    }
// calculating the sum
    for (int i = 0; i < n; i++) {
       sum=sum+arr[i];
    }
    avg1=sum/n;
    avg2=avg1*avg1;
//calculating standard deviation
    standard_devi=sqrt((square_sum/n)-avg2);
    cout <<"\nStandard deviation= :"<<standard_devi;
    return 0;
}