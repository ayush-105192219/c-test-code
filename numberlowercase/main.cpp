#include <bits/stdc++.h>
#include<iostream>
using namespace std;



int main()
{
    int n;
    cin >> n;
    if(n>=1 && n<=9)
    {
        switch(n){
            case 1: std::cout<<"one";
                    break;
            case 2: cout<<"two";
                    break;
            case 3: cout<<"three";
                    break;
            case 4: cout<<"four";
                    break;
            case 5: cout<<"five";
                    break;
            case 6: cout<<"six";
                    break;
            case 7: cout<<"seven";
                    break;
            case 8: cout<<"eight";
                    break;
            case 9: cout<<"nine";
                    break;
            default: cout<<"number is greater than 9";
                    break;
        }
    }
    //cin.ignore(numeric_limits<streamsize>::max(), '\n');

    // Write Your Code Here

    return 0;
}
