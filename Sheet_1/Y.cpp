#include <iostream>
using namespace std;

int main() {
	long long a, b,c,d;
	cin >> a >> b >> c >> d;
	a %= 100;
	b %= 100;
	c %= 100;
	d %= 100;
	long long result = a * b * c * d;
	int remain = result % 100;
	if (remain < 10)
	{
		cout << '0'<<remain;
	}
	else {
		cout << remain;
	}

}