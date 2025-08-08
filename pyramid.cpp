#include<iostream>
using namespace std;
int main(){
int n,k=1;
cin>>n;
for(int i=0;i<n;i++){
    for(int j=0;j<n-i-1;j++){
        cout<<" ";
    }
    for(int m=0;m<k;m++){
        cout<<"*";
    }
    k=k+2;
    cout<<endl;
}
return 0;
}
