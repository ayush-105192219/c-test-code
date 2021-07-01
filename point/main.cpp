#include <iostream>

using namespace std;
void add (int a , int b){
cout << a +b ;
}
int main()
{
    int *p = new int [5];
    for (int i=0;i<5;i++){
       p[i] = i ;
    }
    cout << p[4] ;
    int *q = p;
    cout << q[4] ;
    void(*fp)(int , int );//declaration
    fp =add;//initialisation
    (*fp)(10,20);//calling

    int x= 10;
    int &y=x;
    cout << y ;

    return 0;

}
