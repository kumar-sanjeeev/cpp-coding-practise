/*
 Buy and Sell stock in such a way that you will get the maximum profit
*/

#include <bits/stdc++.h>
using namespace std;

int buy_sell(int a[], int start, int end){
    if(end<=start){
        return 0;
    }
    int profit = 0;
    for(int i=start; i<end; i++){
        for(int j=i+1; j<=end; j++)
        {
            if(a[j]>a[i])
            {
                int current_profit = a[j]-a[i] + buy_sell(a,start,i-1) + buy_sell(a,j+1,end);
                profit = max(profit, current_profit);
            }
        }
    }

    return profit;
}
void printArray(int a[], int size){
    for(int i=0; i<size; ++i){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main(){
    cout<<"Enter the no of test cases: ";
    int t;
    cin>>t;

    while(t--){

        cout<<"\nEnter the size of array: ";
        int size;
        cin>>size;
        int a[size];
        cout<<"\nEnter the elements of the array: ";

        for(int i=0; i<size; ++i){
            cin>>a[i];
        }
        printArray(a,size);
        cout<<buy_sell(a,0,size)<<endl;
    }
    
    return 0;
}