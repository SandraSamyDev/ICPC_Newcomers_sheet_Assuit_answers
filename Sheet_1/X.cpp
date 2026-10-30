

#include <iostream>
using namespace std;

int main()
{
	long long l1, l2, r1, r2;
	cin >> l1 >> r1 >> l2 >> r2;
 if (l1 > r2 || l2 > r1)
	{
		cout << -1;
	}
	else if (l2 >= l1 && l2 <= r1)
	{
		cout << l2 << " ";
	}
	else if (l1 >= l2 && l1 <= r2)
	{
		cout << l1 << " ";
	}
	if (r1 >= l2 && r1 <= r2)
	{
		cout << r1;
	}
	else if (r2 >= l1 && r2 <= r1)

	{
		cout << r2;
	}

}