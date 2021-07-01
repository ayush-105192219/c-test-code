#include <iostream>

using namespace std;

struct array{
 int *A;
 int size;
 int len ;
};
void Display(struct array a){
for(int i = 0; i <a.len;i++){
    cout<< a.A[i] << endl ;
}
    }
void append(struct array *a , int x ){
    if(a->len <  a->size)
 a->A[a->len++]=x;
}
int main()
{
    struct array arr ;
    cout<< "enter size" << endl;
    cin>> arr.size;
    arr.A= new int[arr.size];
    cout << "Enter number of elements" << endl;
    cin>> arr.len ;
    cout << "enter the elements" << endl ;
    for(int i=0 ; i<arr.len ; i++){
        cin>> arr.A[i] ;
    }
    cout<< "display array as ADT" << endl ;
    Display(arr);
    append(&arr ,  50);
    cout << endl;
    cout << "appended array" << endl ;
    Display(arr);
    return 0;
}
