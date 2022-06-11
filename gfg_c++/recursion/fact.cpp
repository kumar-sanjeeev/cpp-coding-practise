#include <bits/stdc++.h>
using namespace std;

long fact(int n)
{
    if(n==0 || n==1){
        return 1;
    }

    long mid_val = fact(n-1);
    return n*mid_val;
}
int main(){
    int n = 5;
    cout<<fact(n)<<endl;
    return 0;
}