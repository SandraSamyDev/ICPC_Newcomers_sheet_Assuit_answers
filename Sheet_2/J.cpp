#include <iostream>
#include <climits>
using namespace std;

int main() {
	long long LIMIT;
	bool prime = 1;
	cin >> LIMIT;
		for (long long i = 2;i <= (LIMIT);i++)
		{
			for (long long j=2;j <= (i / 2);j++)
			{
				if (i % j == 0)
				{
					prime = 0;
					break;
				}
				else
				{
					prime = 1;
				}
			}
			if (prime)
				cout << i << " ";
		}

}