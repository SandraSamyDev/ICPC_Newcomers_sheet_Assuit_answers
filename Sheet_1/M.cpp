#include <iostream>
using namespace std;
 
int main() {
	char ch;
	cin >> ch;
// Digits in ASCII '0' = 48,'1' = 49 ....etc
// Capital letters in ASCII 'A' = 65, 'B' = 66 ....etc
// Small letters in ASCII 'a' = 97,'b' = 98 ....etc 
	if (ch >= 48 && ch <= 57)
	{
		cout << "IS DIGIT";
	}
	else if (ch == tolower(ch))
	{
		cout << "ALPHA\nIS SMALL";
	}
	else
	{
		cout <<"ALPHA\nIS CAPITAL";
	}
}