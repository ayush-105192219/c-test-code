#include <iostream>

using namespace std;

class node {
public :
    int data;
    node *next;
}*first =NULL;

void create(int A[],int n){
int i;
node *t, *last;
first = new node();
first->data=A[0];
first->next=NULL;
last=first;

for(i=1;i<n;i++){
    t=new node();
    t->data=A[i];
    t->next=NULL;
    last->next=t;
    last=t;
}
}
void display(node *p){

while(p!=NULL){
    cout << p->data;
    p=p->next;
} cout<< endl;
}
void rdisplay(node *p){

if(p!=NULL){
    rdisplay(p->next);
    cout<< p->data;
}
}
int main(){
//node *temp;
int A[]={3,5,7,10,25,26,32};
create(A,7);
cout<<"display linked list" << endl;
display(first);
cout<< "reverse display" <<endl;
rdisplay(first);
return 0;
}
