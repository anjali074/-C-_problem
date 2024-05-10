#include<iostream>
using namespace std;
//created function
//void printArray(){
int main(){
  int number[15];
  //accessing Array
  cout<< "value at 14 index"<<number[14]<<endl;
 // cout<< "value at 20 index"<<number[20]<<endl;
 int second[3]={5,7,11};
 //acessing an elemet
 cout<< "value at 2 index"<<second[2]<<endl;
 int third[15]={2,7};
 cout<< "value at 14 index"<<number[14]<<endl;
 int a =15;
cout <<"printing the array";
for(int i=0; i<a; i++){
cout<<third[i]<<"  ";}//printing the array2  7  0  0  0  0  0  0  0  0  0  0  0  0  0  

int fourth[12]={0};
int n=12;
cout <<"printing the array";
for(int i=0; i<n; i++){
cout<<fourth[i]<<"  ";}//printing the array0  0  0  0  0  0  0  0  0  0  0  0  
int fifth[10]={1};
int c=10;
cout <<"printing the array";
for(int i=0; i<c; i++){
cout<<fifth[i]<<"  ";}//1  0  0  0  0  0  0  0  0  0
  cout<<endl<<"Every thing is fine"<<endl<<endl;
}