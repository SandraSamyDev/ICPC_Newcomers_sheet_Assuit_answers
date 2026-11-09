#include <iostream>
#include <climits>
using namespace std;

int main(){
	long long n,reverse=0,f;
	cin >> n;
	f = n;
	while (n > 0)
	{
		reverse = reverse * 10 + n % 10;
		n = n / 10;
	}
	cout << reverse << endl;
	if (f == reverse)
	cout << "YES";
	else
		cout << "NO";
}