#include<iostream>
#include <cmath>
using namespace std;
int main()
{
	long long a, b, c, d;
	double x, y;
	cin >> a >> b >> c >> d;
	x = b*log(a);
	y = d*log(c);
	if (x > y)
		cout <<"YES";
	else
		cout <<"NO";
 
}