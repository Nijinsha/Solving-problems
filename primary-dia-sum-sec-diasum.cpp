/*
Given a square matrix of size , calculate the absolute difference between the sums of its diagonals.

Input Format

The first line contains a single integer, . The next  lines denote the matrix's rows, with each line containing space-separated integers describing the columns.

Output Format

Print the absolute difference between the two sums of the matrix's diagonals as a single integer.

Sample Input

3
11 2 4
4 5 6
10 8 -12
Sample Output

15
Explanation

The primary diagonal is: 
11
      5
            -12

Sum across the primary diagonal: 11 + 5 - 12 = 4

The secondary diagonal is:
            4
      5
10
Sum across the secondary diagonal: 4 + 5 + 10 = 19 
Difference: |4 - 19| = 15
*/




#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int sumone=0,sumtwo=0,i,j,n,arr[100][100];
    int diff;
    cin>>n;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    
    for(i=0;i<n;i++){
        sumtwo = sumtwo + arr[i][i];
    }
    
  
    
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==(n-1)-j){
            sumone += arr[i][j];
            }}
        
    }
     if(sumone>sumtwo){
         diff=sumone-sumtwo;
     }
    else{
        diff=sumtwo-sumone;
    }
    cout<<diff;
    
    return 0;
}
