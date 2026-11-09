#include <iostream>
#include <climits>
using namespace std;

int main() {
	long long LIMIT;
	cin >> LIMIT;
	for (long long i =1 ;i <= (LIMIT);i++)
	{

			if (LIMIT%i == 0)
			{
				cout << i << endl;
			}
		}
	
}