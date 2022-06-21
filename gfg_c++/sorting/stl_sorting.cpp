/**
 * @file stl_sorting.cpp
 * Sanjeev Kumar
 * C++ STL sorting 
 * @version 0.1
 * @date 2022-06-20
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <bits/stdc++.h>
using namespace std;

int main(){
    int size = 6;
    int a[size]{4,252,78,2,10,34};
    sort(a,a+size);
    for(auto x:a){
        cout<<x<<" ";
    }

    cout<<"\nDecreasing Order: "<<endl;
    sort(a, a+size, greater<int>());
    for(auto x:a){
        cout<<x<<" ";
    }

    cout<<endl;
    //for vectors
    vector<int> v {24,6,7,123,67,9,10};
    sort(v.begin(), v.end());
    for( auto x:v){
        cout<<x<<" ";
    }
    return 0;
}