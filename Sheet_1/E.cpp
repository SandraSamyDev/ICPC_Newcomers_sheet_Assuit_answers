#include <iostream>
#include <iomanip>

using namespace std;

int main(){

double R;
double P = 3.141592653;


cin >> R;


double Area = P * (R*R);
cout << fixed << setprecision(9) << Area;


}