/*Write a program that calculates the user’s body mass index (BMI) and categorizesit as underweight, normal, overweight, or obese, based on the followingtable from the United States Centers for Disease Control:To calculate BMI based on weight in pounds ( wt_lb ) and height in inches( ht_in ), use this formula (rounded to tenths):703 * wt_lb/ht_in2Prompt the user to enter weight in pounds and height in inches*/




 
#include<iostream>
using namespace std;
 
int main()
{
 
float bmi,w,h; //w=weight , h=height
cout<<"Enter your weight in pound : ";
    cin>>w;
cout<<"Enter your Height in inches : ";
    cin>>h;
bmi=(w*703)/(h*h);
cout<<"Your BMI is : "<<bmi<<endl;
 
if(bmi<=25 && bmi>=30){
    cout<<"Overweight";}
else if(bmi<=24.9 && bmi>=18.5){
    cout<<"Normal";}
else if(bmi<18.5){
    cout<<"Under weight";
}else if(bmi>30){
    cout<<"Obese";}
return 0;
}