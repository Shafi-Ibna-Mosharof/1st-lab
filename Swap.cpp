#include<iostream>
using namespace std;
int main(){
int a,b;
cout<<"Enter A:"<<endl;
cin>>a;
cout<<"Enter B:"<<endl;
cin>>b;
a=a+b;
b=a-b;
a=a-b;
cout<<"After Swap:"<<"A:"<<a<<" "<<"B:"<<b;
return 0;
}
