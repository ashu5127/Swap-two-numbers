#include<iostream>
using namespace std;
int main()
{
int a=25;
int b=39;
cout<<"Swap two numbers :"<<endl;
cout<<"-----------------------"<<endl;
cout<<"Input 1st number :"<<a<<endl; //25

cout<<"Input 2nd number :"<<b<<endl;// 39

cout<<"After swapping the 1st number is :";
a = a + b;
b = a - b;
a = a - b;
cout<<a<<endl; //39

cout<<"After swapping the 2nd number is :";
cout<<b<<endl;//25
return 0;

}
