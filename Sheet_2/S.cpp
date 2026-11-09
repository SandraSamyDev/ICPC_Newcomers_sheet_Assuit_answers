#include <iostream>
#include <climits>
using namespace std;

int main() {
	int t;

	cin >> t;
	do
	{

		long long a, b;
		long long sum=0;
		cin >> a >> b;
	if (a > b)
		{
			swap(a, b);
		}
		
			for (int j = a+1;j < b;j++)
			{
				if (j%2!=0)
				{
			
					sum += j;
				}

			}

			cout << sum << endl;
	} while (--t);


}