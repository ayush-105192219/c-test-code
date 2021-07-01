#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
 { int arr[10];
cout<<arr<<endl;
cout<<&arr<<endl;
cout<<sizeof(arr)<<endl;
cout<<sizeof(arr)/sizeof(int)<<endl;
cout<<sizeof(&arr);


int a = *(&arr + 1) - arr;
cout<<a;
    return 0;
}
