#include <bits/stdc++.h>
using namespace std;

//Naive solution
void allDivisor(long n)
{
    cout<<"Entered in for loop: "<<endl;
    for(size_t i=1; i<=n; i++){
        if(n%i==0)
        {
            cout<<i<<" ";
        }
    }
}

//Efficient way
void effi_allDivisor(long n){

    for(size_t i=1; i*i<n; i++)
    {
        if(n%i==0)
        {
            // for printing the pair its nice but not good if 
            // only divisors needs to print
            //cout<<"("<<i<<","<<n/i<<")"<<" ";
            cout<<i<<" ";
            if(i != n/i)
            {
                cout<<n/i<<" ";
            }
        }
    }
}

void effi_sorted_divisor(long n){
    for(size_t i=1; i*i<n; i++)
    {
        if(n%i==0)
        {
            cout<<i<<" ";
        }
    }

    for(size_t i=sqrt(n); i>=1; i--)
    {
        if(n%i==0)
        {
            cout<<n/i<<" ";
        }
    }
}
int main(){
    long n;
    cout<<"Enter the no: ";
    cin>>n;
    allDivisor(n);
    cout<<endl;
    effi_allDivisor(n);
    cout<<endl;
    effi_sorted_divisor(n);
    return 0;
}