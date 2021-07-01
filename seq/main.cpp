#include <iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> seq(vector<int> x){
     vector<int> a ;
     int temp = x[0];
     a.push_back(temp);
  for(int i=1;i<x.size();i++){
     if(x[i] == ++temp){
       a.pop_back();
       a.push_back(x[ i - 1]) ;
       a.push_back(x[i]);
      }
    temp = x[i];
}
return a;
}
void display(vector<int> a){
     for(int i=0; i< a.size() ; i++)
   {
    cout<< a[i];
   }
}
int main()
{
   // int size ;
    //cout << "enter size of array" << endl ;
   // cin >>  size ;
   // cout << "Enter elements" << endl;
    vector <int> A(9);
  for (int i = 0 ; i < 9; i++)
  {    cin >> A[i];
  }
    vector <int> f = seq(A);
    display(f);
    return 0;
    // 5 2 7 2 3 4 8 0 9
}
