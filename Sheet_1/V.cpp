#include <iostream>
using namespace std;

int main() {
	char ch;
	long long a, b;
	cin >> a >> ch >> b;
	if (ch == '>')
	{
		if (a > b)

			cout << "Right";
		else
			cout << "Wrong";
	}
	if (ch == '=')
	{
		if (a == b)

			cout << "Right";
		else
			cout << "Wrong";
	}
	if (ch == '<')
	{
		if (a < b)

			cout << "Right";
		else
			cout << "Wrong";
	}



}
