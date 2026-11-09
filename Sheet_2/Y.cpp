#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int t;
	cin >> t;
	int previous = 0;
	int fiobac = 0;
	int num = 1;
	if (t == 1)
	{
		cout << 0;
}
	else if (t == 2)
	{
		cout << 0 << " " << 1;
	}
	else
	{
		cout << 0 << " " << 1 << " ";
	}
	for (int i = 0;i < t-2;i++)
	{
		 fiobac = num + previous;
		 cout  << fiobac<<" ";
		 previous = num;
		 num = fiobac;

	
	}
}