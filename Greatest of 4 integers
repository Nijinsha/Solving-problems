/*
You have to write a function int max_of_four(int a, int b, int c, int d) which reads four arguments and returns the greatest of them.

Input Format

Input will contain four integers -  , one in each line.

Output Format

Print the greatest of the four integers. 
PS: I/O will be automatically handled.

Sample Input

3
4
6
5
Sample Output

6 
*/

#include <iostream>
#include <cstdio>
using namespace std;


int max_of_four(int a, int b, int c, int d)
    {
   int greatest = a;
    if(greatest<b)
        {
        greatest= b;
    }
    if(greatest<c){
        greatest= c;
    }
    if(greatest<d){
        greatest=d;
    }
    return greatest;
}


int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
