/*
Keith’s  Sheet  Music  needs  a  program  to  implement  its music  teacher’s  discountpolicy.The program prompts the user to enter the purchase total andindicatewhether the purchaser is a teacher.Music teachers receive a 10% discount on theirsheet music purchases unless the purchase total is $100  or  higher.  In  thatcase,  the  discount  is  12%.  The  discount  calculation  occurs  before the addition  ofthe  5%  sales  tax.  Here  are  two  sample  outputs—one  for  a  teacher  and  onefor  a nonteacher.Use necessary manipulators to format your output.(For Teacher)Total purchases $122.00Teacher's discount (12%)14.64Discounted total 107.36Sales tax (5%) 5.37Total $112.73(For Non-teacher)Total purchases $ 24.90Sales tax (5%) 1.25Total $ 26.15*/

#include <iostream>

using namespace std;

int main()
{
    cout<<"\nEnter the total purchases";
    double amount,discount,discount2;
    cin>>amount;
    if(amount>100){
        cout<<"\nA teacher";
        discount=amount-(amount*0.01);
        cout<<"\nTeacher's Discount="<<amount*0.01;
        cout<<"\nTotal Discount="<<discount;
        cout<<"\nThe sales tax="<<amount*0.05;
        cout<<"\nTotal="<<discount+(amount*0.01);
    }
    else if(amount<100){
        cout<<"\nNon teacher";
        discount2=amount-(amount*0.12);
        cout<<"\nNon teacher's discount="<<amount*0.12;
        cout<<"\nTotal discount="<<amount-discount2;
        cout<<"\nThe sales tax="<<amount*0.05;
        cout<<"\nTotal="<<discount2+(amount*0.12);
        
    }

    return 0;
}