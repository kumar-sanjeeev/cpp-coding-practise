#include <bits/stdc++.h>
using namespace std;

// Time complexity if o(n) --> n is no of digits in the number
bool palidrome(long n)
{
    int l_digit;
    long long rev = 0;
    int temp = n;
    /*
    computing the rev of the number
    Need the original no in last for comparison
    */
    while(temp!=0)
    {
        l_digit = abs(temp%10);
        rev = rev*10 + l_digit;
        temp = temp/10;
    }
    // final check if the no is palidrome, rev == num
    return (n==rev);
}

int main(){
    
    long long n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"Is it num is palidrome: "<<palidrome(n)<<endl;
    return 0;
}