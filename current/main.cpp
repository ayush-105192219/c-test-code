#include <iostream>
#include <cstdio>
#include <bits/stdc++.h>

using namespace std;

void fun1(int n)
 {      switch(n){
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
        }
    }

int main()
{
    int n;
    cin >> n;

   if (n>=1 && n<=9)
   {
    fun1(n);
    }

    else if (n>9)
    {  int a = n%2;
        if(n%2 == 0)
        printf("even");
        else
        printf("odd");

    }
    return 0;
}
