#include <iostream>
using namespace std;

int main() {
	int a, b, remain, temp;
	bool e=1;
	cin >> a >> b;
	for (int i = a;i <= b;i++)
	{
		bool f = 1;
	    temp = i;
		while (temp)
		{
			remain = temp % 10;
			if (remain != 7 && remain != 4)
			{
				f = 0;
				break;
			}
			temp =temp/ 10;
		}
		if (f)
		{
			cout << i << " ";
			e = 0;
		}

	}
	if (e)
	{
		cout << -1;
	}
	}