#include<iostream>
using namespace std;
bool search( int arr[],  int size,int key){
  for(int i=0; i<size; i++){
    if(arr[i]==key){
      return 1;
  }

}
return 0;
}
int main (){
  int arr[10]={5, -2, 10, 7, 8 -24, 22, 1, 6, 9};
  //wheater 1 is present in it or not?
  cout<<"Enter the key"<<endl;
  int key;
  cin>>key;
  bool found=search(arr,10,key);
  if(found){
    cout<<"key is present"<<endl;
  }
  else{
    cout<<"key is absent"<<endl;
  }
  return 0;
}