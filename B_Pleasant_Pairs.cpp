#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
for(int k=1;k<=t;k++){
int n,s=0;
cin>>n;
long long a[n];
for(int i=1;i<=n;i++){
cin>>a[i];
}
for(int i=1;i<=n;i++){
for(int j=a[i]-(i%a[i]);j<=n;j=j+a[i]){
if(i>j&&a[i]*a[j]==i+j)
s++;
}
}
cout<<s<<endl;
}
}