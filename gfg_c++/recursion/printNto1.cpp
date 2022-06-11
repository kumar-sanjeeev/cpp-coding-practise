#include <bits/stdc++.h>
using namespace std;

void print_1_to_N(int n)
{
    if(n==0){
        return;
    }
    print_1_to_N(n-1);
    cout<<n<<" ";
}

void print_n_to_1(int n)
{
    if(n==0)
    {
        return;
    }
    cout<<n<<" ";
    print_n_to_1(n-1);
}
int main(){
    int n = 5;
    print_n_to_1(n);
    cout<<endl;
    print_1_to_N(n);
    return 0;
}