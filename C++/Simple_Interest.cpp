#include<iostream>
using namespace std;
int main()
{
float P,R,T;
cout<<"enter the principle"<<endl;
cin>>P;
cout<<"enter the time"<<endl;
cin >>T;
cout<<"enter the rate"<<endl;
cin>>R;
float Si = (P*T*R)/100;
cout<< "Simple Interest = " << Si;
return 0;
}