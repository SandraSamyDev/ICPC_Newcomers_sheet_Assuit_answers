#include <iostream>
#include <cmath>

using namespace std;

int main(){

double n1, n2;


cin >> n1 >> n2;

double floor_result = floor(n1/n2);
double ceil_result = ceil(n1/n2);
double round_result = round(n1/n2);


cout<< "floor "<< n1<<" / "<< n2<< " = " << floor_result<< endl; 
cout<< "ceil "<< n1<<" / "<< n2<< " = " << ceil_result<< endl; 
cout<< "round "<< n1<<" / "<< n2<< " = " << round_result<< endl; 

}