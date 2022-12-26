#include<iostream>
using namespace std;
main()
{
float vpkg,fpkg,tkgv,tkgf,epf,epv,coins;



cout<<"Enter Vegetable price per kilogram: ";
cin>>vpkg;

cout<<"Enter Fruit price per kilogram: ";
cin>>fpkg;

cout<<"Total kilograms of vegetables: ";
cin>>tkgv;

cout<<"Total Kilograms of Fruit: ";
cin>>tkgf;

epv=vpkg*tkgv;
epf=fpkg*tkgf;
coins=(epv+epf)/1.94;
cout<<"Total earning in rupees is: " <<coins;




}
