#include <bits/stdc++.h>
using namespace std;

int ropeCutting(int n, int a, int b, int c)
{
    if(n<0)
    {
        return -1;
    }
    if(n==0)
    {
        return 0;
    }
    int ans = max({ropeCutting(n-a,a,b,c), ropeCutting(n-b,a,b,c), ropeCutting(n-c,a,b,c)});
    if (ans ==-1)
    {
        return -1;
    }

    return ans + 1;


}
int main(){
    int n=9, a=2, b=2, c =2;
    // cout<<max({n,a,b,c})<<endl;
    cout<<ropeCutting(n,a,b,c)<<endl;
    return 0;
}