#include <iostream>
using namespace std;

int main() {
	char S,Q;
	long long a, b,c;
	cin >> a >> S >> b >> Q >>c;
	if (S == '*')
	{
		if (a* b ==c)

			cout << "Yes";
		else
			cout << a*b;
	}
	if (S == '+')
	{
		if (a + b == c)

			cout << "Yes";
		else
			cout << a+b;
	}
	if (S == '-')
	{
		if (a - b==c)

			cout << "Yes";
		else
			cout << a-b;
	}



}
