#include <iostream>

using namespace std;

int main(){

long long num;
cin >>num;
bool flag = false;
for (int i =2 ; i <= num ; i++){

if (i%2==0){
    cout << i<< endl;
    flag= true;
}


}
if (flag) {return 0;}
else {
    cout << -1;
}

}