#include <iostream> 
#include <algorithm>
#include <vector> 
using namespace std; 

int main () 
{ 
    int array[] = {5,6,7,7,6,5,5,6}; 

    vector<int> v(array,array+8); // 5 6 7 7 6 5 5 6 

    sort (v.begin(), v.end()); // 5 5 5 6 6 6 7 7 

    vector<int>::iterator lower,upper; 
    lower = lower_bound (v.begin(), v.end(), 6); 
    upper = upper_bound (v.begin(), v.end(), 6); 

    cout << "lower_bound for 6 at position " << (lower- v.begin()) << '\n'; 
    return 0; 
} 
