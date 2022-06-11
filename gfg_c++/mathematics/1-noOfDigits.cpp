#include <bits/stdc++.h>
using namespace std;

// Iterative approach
// Time Complexity if O(n)---> n is the no of digits in the number
int countDigit(long n)
{
    int count = 0;
    while(n!=0)
    {
        n = n/10;
        count++;
    }
    return count;
}
int main(){
    long num;
    cout<<"Enter the digit who's count you would like to check: ";
    cin>>num;
    cout<<"No of digits in "<<num<<" is: "<<countDigit(num)<<endl;
    return 0;
}