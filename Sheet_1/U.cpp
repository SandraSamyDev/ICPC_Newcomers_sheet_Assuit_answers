#include <iostream>
using namespace std;

int main() {
	float n;
	cin >> n;
	int div = n;
	if (n == div)
	{
		cout << "int " << div;
	}
	else
	{
		float remain = n - div;
		cout << "float " << div << " " << remain;
	}
}
