#include <bits/stdc++.h>
using namespace std;

// TC: o(n)
void print(int a[], int size)
{
    for(int i=0; i<size; ++i){
        cout<<a[i]<<" ";
    }
}


int largest_index(int a[], int size){
    int temp = a[0];
    int idx = 0;

    for(int i=1; i<size; ++i){
        if(temp<a[i]){
            temp = a[i];
            idx = i;
        }
    }
    return idx;
}

int main(){
    int a[5] {400,8,50,100};
    cout<<largest_index(a,5)<<endl;
    return 0;
}