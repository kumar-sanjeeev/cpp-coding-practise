#include <bits/stdc++.h>
using namespace std;


// Brute force approach/ Naive solution
int gcd(int a, int b)
{
    int result = min(a,b);
    while(result>0)
    {
        if(a % result ==0 && b % result ==0)
        {
            break;
        }
        result --;
    }
    return result;
}

// Euclidean Algorithm
int euclidean_gcd_basic(int a, int b){
    while(a!=b){
        if(a>b){
            a = a-b;
        }
        else{
            b = b-a;
        }
    }
    return a;
}

// Euclidean Optimized
int opt_eculidean_gcd(int a, int b){
    if (b==0)
    {
        return a;
    }
    return gcd(b, a%b);
}
int main(){
    int num1, num2;
    cout<<"Enter the two numbers: ";
    cin>>num1>>num2;

    cout<<"GCD of two numbers is: "<<opt_eculidean_gcd(num1,num2)<<endl;
    return 0;
}