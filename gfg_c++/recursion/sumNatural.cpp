#include <bits/stdc++.h>
using namespace std;

long sumNatural(int n)
{
    if(n==0)
    {
        return 0;
    }

    return n + sumNatural(n-1);
}
int main(){
    int n = 5;
    cout<<sumNatural(n)<<endl;
    return 0;
}