

#include <iostream>
using namespace std;

int main(){
	int t;
	int pos=0, neg=0, even=0,odd=0;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		if (n > 0)
		{
			++pos;
		}
		if (n < 0)
		{
			++neg;
		}
		if (n % 2 == 0)
		{
			++even;
		}
		else
		{
			++odd;
		}

	}
	cout << "Even: " << even << endl;
	cout << "Odd: " << odd << endl;
	cout << "Positive: " << pos << endl;
	cout << "Negative: " << neg;

}