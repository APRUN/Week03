#include <iostream>
using namespace std;
main()
{
string movnme;
int adultt,childt,adultts,childts,sumoftickets,prcntofdon,childticpricetotal,adultticpricetotal;
float amntafdon,famntafdon,donp;


cout<<"Enter movie name: ";
cin>>movnme;
cout<<"Enter adult ticket price: ";
cin>>adultt;
cout<<"Enter Child Ticket price: ";
cin>>childt;
cout<<"Enter number of adult Ticket sold: ";
cin>>adultts;
cout<<"Enter number of child tickets sold: ";
cin>>childts;
cout<<"Enter Percentage of Donation: ";
cin>>donp;
cout<<"_________________________________________________________"<<endl;

adultticpricetotal=adultt*adultts;
childticpricetotal=childt*childts;
sumoftickets=adultticpricetotal+childticpricetotal;
cout<<"The total ticket sold are: " <<sumoftickets <<endl;
amntafdon=(donp/100)*sumoftickets;

famntafdon=sumoftickets-amntafdon;
cout<<"Amount after donation: " <<famntafdon;


}