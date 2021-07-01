#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  int size,temp;
    cin >> size;
    cout << endl;
    int A[size];
    int start = 0;
    int end =size-1;
for (int i=0;i<size;i++)
       {
        cin>> A[i];
        }

   while(start<end){
       temp=A[end];
       A[end]=A[start];
       A[start]=A[end];
       start++;
       end--;
   }



    for (int i=0;i<size;i++){
        cout << A[i] << " ";
    }

    return 0;
}
4
