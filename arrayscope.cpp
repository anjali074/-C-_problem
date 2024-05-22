#include<iostream>
using namespace std;
void update(int arr[], int n){//make function
cout<<"inside the function"<<endl;

//print this array
  for(int i=0;i<3; i++){
    cout<<arr[i]<<" ";
} cout<<endl;

cout<<"going back to main function"<<endl;
}
int main(){
  int arr[3]={1,2,3};//array
  update(arr,3);
  //print this array
  for(int i=0;i<3; i++){
    cout<<arr[i]<<" ";
  }cout<<endl;
}