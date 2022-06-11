#include <bits/stdc++.h>
using namespace std;

/*
Unsorted array search 
TC: o(n) --> This is linear search
*/
int search(int a[], int size, int element){
    for(int i=0; i<size;++i )
    {
        if(a[i]==element){
            return i;
        }
    }
    return -1;
}

int main(){
    int a[5] {1,2,56,78,100};
    int b = 100;

    cout<<search(a,5,b)<<endl;
    return 0;
}