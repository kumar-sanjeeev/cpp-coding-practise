#include <bits/stdc++.h>
using namespace std;

// Naive approach
bool checkPrime(int num){
    if(num==1)
    {
        return false;
    }

    for(size_t i=2; i<num; i++){
        if(num % i == 0)
        {
            return false;
        }
    }
    return true;
}

// Efficient Approach
//TC: O(sqrt(n))
/*
Divisor always appear in pairs
one divisor in the pair is always smaller than sqrt(n)
*/
bool effi_prime(int num){
    if(num == 1)
    {
        return false;
    }

    for(size_t i = 2; i*i<=num; i++){
        if(num%i == 0){
            return false;
        }
    
    }
    return true;
}

// more efficient solution
bool effi2_prime(int num){
    if(num == 1){ return false;}
    if(num==2 or num==3){return true;}
    if(num%2==0 or num%3==0){return false;}

    for(size_t i = 5; i*i<=num; i=i+6)
    {
        if(num%i==0 or num%(i+2)==0)
        {
            return false;
        }
    }
    return true;
}
int main(){
    cout<<"Enter the no: ";
    int num;
    cin>>num;

    cout<<checkPrime(num)<<endl;
    cout<<effi2_prime(num)<<endl;
    return 0;
}