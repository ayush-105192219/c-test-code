#include <iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> seq(int x[], int size){
     vector<int> a ;
     int temp = x[0];
     a.push_back(temp);
  for(int i=1;i<size;i++){
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
    int size ;
    cout << "enter size of array" << endl ;
    cin >>  size ;
    cout << "Enter elements" << endl;
    int A[size] ;
  for (int i = 0 ; i < size; i++)
  {
    cin >> A[i];
    cout << endl;
  }
    vector <int> f = seq(A, size);
    display(f);
    return 0;
}
