#include <iostream>
using namespace std;
main()
{
int n1,n2,n3,n4,n5,n6,n7,n8,n9,n0;

cout<<"Enter the number: ";
cin>>n1;
n2=n1%10;
n3=n1/10;
n4=n3%10;
n5=n3/10;
n6=n3%10;
n7=n5/10;
n8=n5/10;
n9=n7/10;
n0=n2+n4+n6+n7;


cout<<"The output is: " <<n0;

}