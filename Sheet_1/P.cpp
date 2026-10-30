#include<iostream>
#include <cctype>
using namespace std;
int main()
{
	int i,r;
	cin >> i;
	r = i / 1000;
	if (r %2 == 0)
		cout << "EVEN";
	else
		cout << "ODD";
 
}