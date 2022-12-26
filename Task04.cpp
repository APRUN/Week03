#include <iostream>
using namespace std;
main()
{

int sub1,sub2,sub3,sub4,sub5,Sum;
float prcntge;
string name;

cout<<"Enter your Name: ";
cin>>name;
cout<<"Enter Subject 01 marks: ";
cin>>sub1;
cout<<"Enter Subject 02 marks: ";
cin>>sub2;
cout<<"Enter Subject 03 marks: ";
cin>>sub3;
cout<<"Enter Subject 04 marks: ";
cin>>sub4;
cout<<"Enter Subject 05 marks: ";
cin>>sub5;
Sum=sub1+sub2+sub3+sub4+sub5;
cout<<"The total sum is: " <<Sum;
prcntge=(Sum/500)*100;
cout<<"The Total percentage is: " <<prcntge <<"%";



}