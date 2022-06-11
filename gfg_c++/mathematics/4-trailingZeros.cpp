#include <bits/stdc++.h>
using namespace std;
/*
0 is given by pair(2,5)
so cal the count of 5 in the factorial series, bcz 5 count is less than 2
*/
long trailingZeros(long n)
{
    int result = 0;
    for(size_t i = 5; i<=n; i=i*5 )
    {
        result = result + n/i;
    }

    return result;
}
int main(){
    int num;
    cout<<"Enter the no: ";
    cin>>num;

    cout<<"No of zeros: "<<trailingZeros(num)<<endl;
}