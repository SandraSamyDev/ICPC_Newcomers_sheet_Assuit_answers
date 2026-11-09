

#include <iostream>
#include <climits>
using namespace std;

int main(){
	long long primenumber;
	bool prime = 1;
	cin >> primenumber;
	if (primenumber <= 1)
	{
		prime = 0;
	}
	else 
		for (long long i = 2;i <= (primenumber / 2);i++)
		{
			if (primenumber % i == 0)
			{
	
				prime=0;
				break;
			}
			else
			{
				prime = 1;
			}
		}
	if (prime)
		cout << "YES";
	else
		cout << "NO";
}