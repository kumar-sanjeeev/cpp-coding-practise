/**
 * @file mergeOverlapping.cpp
 * @author Sanjeev Kumar
 * @brief Merge the overlapping intervals given in an array
 * @version 0.1
 * @date 2022-07-01
 * @copyright Copyright (c) 2022
 */

#include <bits/stdc++.h>
using namespace std;

void printArray(pair<int,int> a[], int size)
{   
    cout<<"[";
    for(int i=0; i<size; i++){
        if (i!=size-1){cout<<"{"<<a[i].first<<","<<a[i].second<<"},";}
        else {cout<<"{"<<a[i].first<<","<<a[i].second<<"}";}
    }
    cout<<"]";
    cout<<endl;
}

bool myComparator(pair<int,int> x, pair<int,int> y)
{
    return(x.first<y.first);
}

void mergeIntervals(pair<int,int> a[], int size){
    sort(a,a+size,myComparator);
    int result_index = 0;

    for(int i=1; i<size; i++){
        // means interval can be merged
        if(a[result_index].second >= a[i].first){
            a[result_index].first = min(a[result_index].first, a[i].first);
            a[result_index].second = max(a[result_index].second, a[i].second);
        }
        else{
            result_index ++;
            a[result_index] = a[i];
        }
    }
    printArray(a,result_index+1);

}

int main(){
    int t;
    cout<<"Enter the no of test cases: ";
    cin>>t;
    while(t--)
    {
        int size;
        cout<<"Enter the value of the array size: ";
        cin>>size;
        pair<int,int> a[size];

        cout<<"Enter the elements of array in tuple form (a,b): ";
        for(int i=0; i<size; i++)
        {
            cin>>a[i].first;
            cin>>a[i].second;
        }
        printArray(a,size);
        mergeIntervals(a,size);
    }
    return 0;
}