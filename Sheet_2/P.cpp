#include <iostream>
#include <climits>
using namespace std;

int main() {
	int n;
	char S='*';
	cin >>n;
	for (int i = n;i >=0;i--)
	{
		for (int j = i;j >0;j--)
		{
			cout << S;
		}

		cout << endl;
	}
}