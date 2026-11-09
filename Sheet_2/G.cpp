
#include <iostream>
#include <climits>
using namespace std;

int main(){
	long long  t, n;
	cin >> t;
	while (t--)
	{
		long long f=1;
		cin >> n;
		for (long long i = n;i > 0;i--)
		{
			f *= i;
		}
		if (n == 0)
		{
			f = 1;
		}
		cout << f << endl;
	}
}