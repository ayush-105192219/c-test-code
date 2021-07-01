#include <iostream>

using namespace std;

int oddEven (int l,int r)  {
int cal = l;
    for(int i=l ; i<r; i++)
    {cal = cal ^ (i + 1);
    }
    if(cal%2 == 0){
        return 0;
    }
    else if(cal == 0 || cal%2 != 0 ) {
       return 1;
    }
}


int main()
{
   int testcase ,L,R,result;
   cin >> testcase;
   cout<< endl ;
   while(testcase--){
    cin>>L ;
    cin >> R;
    result = oddEven(L,R);
  if(result == 0){
    cout<<"Even";
  }else{
  cout<<"Odd";
  }
  cout<<endl;
   }
    return 0;
}


