#include <iostream>

using namespace std;

void timeMeasure (int n) {
int hour, minute, second;
hour = minute = 0;
if (n > 3600){
hour =n/3600;
int s = n - (hour*3600);
minute = s/60;
second = s - (minute*60);
}
else if(n > 60 && n < 3600){
 minute = n/60;
 second = n - (minute * 60);
}
else{
  second = n;
}
 cout << " Hour= " << hour;
 cout<<", Minute = "<< minute;
 cout<<", Second ="  << second;
}

int main()
{
    int sec;
    cin >> sec ;
    timeMeasure(sec);
    return 0;
}
