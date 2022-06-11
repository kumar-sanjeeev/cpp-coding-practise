#include <bits/stdc++.h>
using namespace std;

long powerNum(int x, int n)
{
    if(n==0){
        return 1;
    }

    return x*powerNum(x,n-1);
}
/*
-----------------------------------
if n is even:
 power(x, n/2)* power(x,n/2)
-----------------------------------
if n is even
 power(x,n-1)*x;
-----------------------------------
TC: o(log(n))
*/
long effi_powerNum(int x, int n)
{
    if(n==0){
        return 1;
    }

    int temp = effi_powerNum(x, n/2);
    temp = temp*temp;

    if(n%2==0)
    {
        return temp;
    }
    else
    {
        return temp*x;
    }
}
int main(){
    int x,n;
    cout<<"Enter the no: ";
    cin>>x>>n;
    cout<<powerNum(x,n)<<endl;
    return 0;
}