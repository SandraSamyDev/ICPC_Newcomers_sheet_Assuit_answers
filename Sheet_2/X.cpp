#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int t;

	long long remainder;
	long long n;
	cin >> t;
	while (t--)
	{
		int allones = 0;
		long long sum = 0;
		cin >> n;
		while (n)
		{
			remainder = n % 2;
			if (remainder == 1)
			{
				allones++;
			}
			n/=2;
		}

		for (int i = allones;i > 0;i--)
		{
			sum += static_cast<long long>(pow(2,i-1));
            // or write it as : sum += 1LL << (i - 1);
            //hope this helps :)

}
		cout << sum << endl;

	}


} 