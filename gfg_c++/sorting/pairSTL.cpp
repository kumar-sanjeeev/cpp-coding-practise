/**
 * @file pairSTL.cpp
 * @author Sanjeev kumar
 * @brief Pairs in STL
 * @version 0.1
 * @date 2022-07-01
 * 
 * @copyright Copyright (c) 2022
 */

#include <bits/stdc++.h>
using namespace std;

int main(){

    // Method 1 to create pair
    pair<int,int> a;
    a.first = 10;
    a.second = 20;
    cout<<a.first<<endl;
    cout<<a.second<<endl;

    // Method 2 to create pair

    pair<string,int> sanjeev = make_pair("Sanjeev", 25);

    cout<<sanjeev.first<<" ";
    cout<<sanjeev.second<<endl;

    return 0;
}