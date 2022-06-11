#include <bits/stdc++.h>
using namespace std;

int nthFibo(int n){
    if(n==0){
        return 0;
    }

    if(n==1){
        return 1;
    }

    return nthFibo(n-1) + nthFibo(n-2);
}
int main(){
    int n = 4;
    cout<<nthFibo(n)<<endl;
    return 0;
}