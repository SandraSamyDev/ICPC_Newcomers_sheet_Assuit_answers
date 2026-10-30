#include <iostream>
using namespace std;
int main() {
char s;
int type ,year ,month , days;
cin >>type;
year=type/365;
month=(type%365)/30;
days=(type%365)%30;
cout <<year<<" years"<<endl;
cout <<month<<" months"<<endl;
cout <<days<<" days";
}