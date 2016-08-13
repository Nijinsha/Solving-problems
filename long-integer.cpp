/*
You are given an array of integers of size . You need to print the sum of the elements in the array, keeping in mind that some of those integers may be quite large.

Input Format

The first line of the input consists of an integer . The next line contains  space-separated integers contained in the array.

Output Format

Print a single value equal to the sum of the elements in the array.


 

Sample Input

5
1000000001 1000000002 1000000003 1000000004 1000000005
Output

5000000015
*/



#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   int i,n,arr[200];
    cin>>n;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    long long sum =0;
    for(i=0;i<n;i++){
        sum+=arr[i];
    }
    cout<<sum;
    
    return 0;
}
