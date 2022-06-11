#include <bits/stdc++.h>
using namespace std;

//my solution---> Need to check the solution over the leetcode test cases
void my_sieve(int n)
{
    if(n>=3)
    {
        cout<<2<<" "<<3<<" ";
    }
    for(size_t i=5; i<n; i=i+6)
    {
        cout<<i<<" "<<i+2<<" ";
    }
}


//Naive solution
/*
First check if no is prime:
 If yes:
   print the no

TC o(n*sqrt(n))
*/

bool checkPrime(int n){
    if(n==1)
    {
        return false;
    }

    for(size_t i=2; i*i<=n; i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}


void naive_sieve(int n){
    for(size_t i=2; i<n; i++)
    {
        if(checkPrime(i))
        {
            cout<<i<<" ";
        }
    }
}


//actual sieve algo 
void actual_sieve(int n){
    vector<bool> isprime(n+1,true);

    for(size_t i=2; i*i<=n; i++)
    {
        if(isprime.at(i))
        {
            for(size_t j=2*i; j<=n; j=j+i)
            {
                isprime[j] = false;
            }
        }
    }

    for(size_t i=2; i<=n; i++)
    {
        if(isprime[i])
        {
            cout<<i<<" ";
        }
    }
}


int main(){
    int n;
    cout<<"Enter the no: ";
    cin>>n;
    my_sieve(n);
    cout<<endl;
    naive_sieve(n);
    cout<<endl;
    actual_sieve(n);
    return 0;
}