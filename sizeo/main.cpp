#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    int A[5] = {1 , 2} ;
    char abc[] = "Ayush" ;
    cout << A << endl ;// pointer to first element of array
    cout << &A << endl ; // pointer to whole array
    cout <<"sizeof (A) / sizeof (int) " << sizeof (A) / sizeof (int)  << endl ; // finding size of array // 5
    cout <<"sizeof (A) / sizeof (A[0]) " << sizeof (A) / sizeof (A[0])  << endl ; //5
    cout <<"sizeof(A)" << sizeof(A)  << endl ;
    cout <<"sizeof(A[0])" << sizeof(A[0])  << endl ;
    cout << "sizeof(abc)" << sizeof(abc) << endl ;
    cout << "sizeof(abc[0])" << sizeof(abc[0]) << endl ;
    cout << "sizeof(abc) /sizeof(char)" << sizeof(abc) /sizeof(char)<<endl;
    cout << "sizeof(char)" << sizeof(char) << endl ; //1byte
    cout << "sizeof(int)" << sizeof(int) <<endl; // 4 byte

    return 0;
}
