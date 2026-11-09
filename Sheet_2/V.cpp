#include <iostream>
#include <climits>
using namespace std;

int main() {
	int t;
	int c = 0;
	cin >> t;
	while (t--)
	{
		for (int i = 3;i > 0;i--)
		{
			cout << ++c<<" ";
		}
		cout << "PUM" << endl;
		++c;
	}
}