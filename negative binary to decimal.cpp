#include<iostream>
#include<math.h>
using namespace std;

int main(){

   // Enter the negative number
    int n;
    cin>>n;

    if(n<0){
      n = -n;
     }

  // Find the negation of the number
  int m = ~n;

  int bit;

  long int ans=0;

  int i=0;

  while(m!=0){
    bit = m & 1;
    ans = (bit * pow(10,i)) + ans;

    m = m>>1;
    i++;
    }

   ans+=1;

  cout<<ans;


   }
