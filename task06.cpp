#include <iostream>
using namespace std;
main()
{
float bagsize,costofbag,areacov,costppound,costpsq;


cout<<"Enter Bag size in Pounds: ";
cin>>bagsize;
cout<<"Enter cost of bag: ";
cin>>costofbag;
cout<<"Enter area covered by each bag in square feet: ";
cin>>areacov;
costppound=costofbag/bagsize;
cout<<"Cost of fertilizer per pound: "<<costppound<<endl;
costpsq=bagsize*areacov;
cout<<"Cost of fertilizing the area per square feet: " <<costofbag/areacov;

}