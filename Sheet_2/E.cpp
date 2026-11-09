

#include <iostream>
#include <climits>
using namespace std;

int main(){
	int t;
	cin >> t;
	long long a;
	long long max = INT_MIN;
	while (t--)
	{
		cin >> a;
		if (a > max)
		{
			max = a;
		}
	}
	cout << max;
}
