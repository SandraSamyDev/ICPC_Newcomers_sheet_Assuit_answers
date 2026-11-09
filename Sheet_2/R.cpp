#include <iostream>
#include <climits>
using namespace std;

int main() {
	bool n = 1;
	while (n)
	{

		long long a, b;
		long long sum = 0;
		cin >> a >> b;
		if (a <= 0 || b <= 0)

		{
			n = 0;
			break;
		}
		else	if (a > b)
		{
			swap(a, b);
		}
 {
			for (int j = a;j <= b;j++)
			{

				{
					cout << j << " ";
					sum += j;
				}
			}
			cout << "sum =" << sum;
			cout << endl;
		}
	}

}