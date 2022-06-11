#include <bits/stdc++.h>
using namespace std;

// Naive solution
int lcm(int a, int b){
    int result = max(a,b);
    while(true)
    {
        if(result%a == 0 && result%b == 0)
        {
            return result;
        }
        result++;       //bcz lcm is the highest no that divides both the number
    }
    return result;
}

// Efficient solution
int gcd(int a, int b){
    if (b==0)
    {
        return a;
    }
    return gcd(b, a%b);
}

int eff_lcm(int a, int b){
    // a*b = gcd(a,b)* lcm(a,b)
    return (a*b)/ gcd(a,b);
}

int main(){
    int num1, num2;
    cout<<"Enter the two nums: ";
    cin>> num1 >> num2;
    cout<<lcm(num1, num2)<<endl;
    cout<<eff_lcm(num1, num2)<<endl;
    return 0;
}