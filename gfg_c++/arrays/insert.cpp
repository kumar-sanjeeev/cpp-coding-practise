#include <bits/stdc++.h>
using namespace std;

void print(int a[], int size)
{
    for(int i=0; i<size; ++i){
        cout<<a[i]<<" ";
    }
}
int main(){
    int a[5] {5,10,20};
    int x=7;
    int pos = 2;
    cout<<"Before insertion: ";
    print(a,5);
    int temp = 0;
    for(int i=4; i>=pos-1; --i)
    {
        a[i] = a[i-1];
    }
    a[pos-1] = x;
    cout<<"After insertion: ";
    print(a,5);
    return 0;
}