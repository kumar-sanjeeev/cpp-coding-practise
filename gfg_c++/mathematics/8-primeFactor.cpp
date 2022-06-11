#include <bits/stdc++.h>
using namespace std;


bool checkPrime(long n){

    if(n==1){
        return false;
    }

    for(size_t i =2; i<n; i++)
    {
        if(n%i==0){
            return false;
        }
    }
    return true;
}
/****Naive Approach***
Run the loop from 2 to till num-1
Check if the i is prime:
  IF yes: 
    check no divisibility by i if yes : print it
  IF no:
    exit the loop
*/
void primeFactor(long n)
{
    for(size_t i=2; i<n; i++)
    {
        if(checkPrime(i))
        {
            int x = i;
            while(n%x ==0)
            {
                cout<<i<<" ";
                x = x*i;
            }
        }
    }
}
int main()
{
    cout<<"Enter the no: ";
    int num;
    cin>>num;
    primeFactor(num);
    return 0;
}