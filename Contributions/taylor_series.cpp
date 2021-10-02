#include<iostream>
using namespace std;

double taylor(int n,int m){
    static double p=1,q=1,sum =0;
    if(m==0) return 1;
    sum = taylor(n,m-1);
    p = p*n;
    q = q*m;
    return sum + p/q;
    
}
double taylor_loop(int x,int n){
    static double num =1,den = 1,tay=1;
    for(int i =1;i<=n;i++){
        num = num*x;
        den =den*i;
        tay =tay+num/den;

    }
    return tay;
}
int main(){
    cout<<"Enter the top limit (intiger greater than 1):";
    int n;
    cin>>n;
    if(n>1){
        cout<<taylor(1,n)<<endl;
        cout<<taylor_loop(1,n)<<endl;
    }
    else cout<<"Error condition not satisfied !!!!"<<endl;

}