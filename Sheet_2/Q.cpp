#include <iostream>
#include <climits>
using namespace std;

int main() {
	long long t, x, remain ;
	cin >> t;
	while (t--)
	{
		cin >> x;
		do
		{

			remain = x % 10;
			cout << remain << " ";
			x = x / 10;
		} while (x);
		cout << endl;
	}

}