#include <bits/stdc++.h>
using namespace std;


// recursive solution
// space complexity o(n) and TC: o(n)
long factorial(long n)
{
    if(n==0){return 1;}  // base case of the recursion

    return n*factorial(n-1);                              // n*fact(n-1)
}

// iterative solution--->better approach
// space complexity 1 and TC: o(n) 

long factorial_iter(long n)
{
    long ans = 1;
    for (size_t i = 2; i <=n; i++)
    {
        ans = ans*i;
    }
    return ans; 
}
int main(){
    long num;
    cout<<"Enter the no: ";
    cin>>num;
    cout<<factorial(num)<<endl;
    cout<<factorial_iter(num)<<endl;
    return 0;
}