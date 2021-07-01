#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void query (vector < vector<int> > &v , int n , int m ){
    cout << v[n][m] << endl;
}
int main()
{
  int n , q ;
  cin >> n >> q  ;

  vector < vector<int> > vec(n);

      for(int i =0 ; i< n; i++) {
            int k;
            cin >> k ;
        vec[i] = vector <int> (k);
        for(int j=0; j< k; j++){


           cin  >> vec[i][j];
        }

      }
    for(int i=1; i <=q; i++){
        int c,d;
        cin >> c >> d ;
       query(vec, c , d);
    }

    return 0;
}
