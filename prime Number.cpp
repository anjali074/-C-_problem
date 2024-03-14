#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter the value  of n"<<endl;
cin>>n;
bool isprime=1;
int i=2;
for(i=2; i<n; i++){
  if(n%i==0){
    cout<<"Not a prime number "<<endl;
    break;
  }
  if(isprime==0){
    cout<<"Not a prime"<<endl;
  }
  else{
    cout<<"is a prime number"<<endl;
  }
  }
};