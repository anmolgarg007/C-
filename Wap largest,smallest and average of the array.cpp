/*Write a program that will find the smallest, largest, and average values in acollection of N numbers. Get the valueof N before scanning each value inthe collection of N numbers.*/

#include<iostream>
using namespace std;
int main ()
{	
    int arr[10], n, i, max, min,sum=0,avg;
//decalring size of array
    cout << "Enter the size of the array : ";
    cin >> n;
// taking elemnt as input
    cout << "Enter the elements of the array : ";
    for (i = 0; i < n; i++)
        cin >> arr[i];
    max = arr[0];
    for (i = 0; i < n; i++)
// for maximum
    {
        if (max < arr[i])
            max = arr[i];
    }
    min = arr[0];
// for minimum
    for (i = 0; i < n; i++)
    {
        if (min > arr[i])
            min = arr[i];
    }
    for (int i = 0; i < n; i++) {
        sum=sum+arr[i];
    }
    avg=sum/n;
    cout << "\nLargest element : " << max;
    cout << "\nSmallest element : " << min;
    cout <<"\nAverage of the elements are :"<<avg;
    return 0;
}