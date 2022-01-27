/*Write a program to process a collection of daily high temperatures. Yourprogram should count and print the number of hot days (high temperature85 or higher), the number of pleasant days (high temperature 60–84),and thenumber of cold days (high temperatures less than 60). It shouldalso display the category of each temperature. Test your program on thefollowing data:55 62 68 74 59 45 41 58 60 67 65 78 82 88 9192 90 93 87 80 78 79 72 68 61 59.*/






#include <iostream>
#include<conio.h>
using namespace std;
    int main(){
        int count_hot=0,count_pleaseant=0,count_cold=0,sum=0;
        double average;
        // sorted array
        int array[30]={41,45,55,58,59,59,60,61,62,65,67,68,68,72,74,78,78,79,80,82,87,88,90,93,91,92};
        //loop for high temperatures
        
        cout<<"\nThe higher temperatures are=:";
        for (int i = 0; i <26; i++) {
            if(array[i]>=85){
                int count=0;
                cout<<","<<array[i];
                count_hot++;
            }}
        cout<<"\nThe total hot days are="<<count_hot;    
            
        // loop pleasant temperatures
        
        cout<<"\nThe Pleaseant temperatures are =";
        for (int i = 0; i <26; i++) {
            if(60<=array[i]<=84){
                cout<<","<<array[i];
                count_pleaseant++;
            }}
        cout<<"\nThe total pleaseant days are=" <<count_pleaseant;  
        
       //loop cold temperatures
        cout<<"\nThe Cold temperatures are =";
        for (int i = 0; i <26; i++) {
            if(array[i]<=60){
                cout<<","<<array[i];
                count_cold++;
            }}   
        cout<<"\nThe total cold days are="<<count_cold;    
        // Taking sum
        for (int i = 0; i < 26; i++) {
            sum=sum+array[i];}
        average=sum/25; 
        cout<<"\nThe average temperature is="<<average;
return 0;}