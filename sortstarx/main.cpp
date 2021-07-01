#include <iostream>
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int testcase;
    cin>>testcase;
    vector<string>v;
    while(testcase--){
          string s;
          cin>> s;
          v.push_back(s);
    }
    sort(v.begin(), v.end());
    cout<<"Sorted Output" << endl ;
    for(int i=0; i<v.size(); i++){
        cout<< v[i]<<endl;
    }
    return 0;
}

