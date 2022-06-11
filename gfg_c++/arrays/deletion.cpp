#include <bits/stdc++.h>
using namespace std;
void print(int a[], int size)
{
    for(int i=0; i<size; ++i){
        cout<<a[i]<<" ";
    }
}
int main(){
    int a[5] = {3,8,12,5,6};
    int b[5];
    int element = 12;
    print(a,5);
    cout<<endl;
    int i=0 ;
    for(int i=0; i<5; i++){
        if(a[i]==element){
            break;
        }
    }
    if(i==5){
        return 5;
    }

    for(int j=i; j<5; j++){
        a[j] = a[j+1];
    }

    print(a,4);
}