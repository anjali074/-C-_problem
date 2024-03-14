#include<iostream>
using namespace std;
int main(){
  int n=10;
int a=10;// lets print it say i want to print fiet 10 number
int b=1;
cout<<a<<" "<<b<<" "<<endl; 
for(int i=1; i<n; i++){
  int nextnumber=a+b;
  cout<<"nextnumber"<<endl;
  a=b;
  b=nextnumber;
}
};
