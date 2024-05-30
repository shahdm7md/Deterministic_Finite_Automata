#include<iostream>
#include<cmath>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
#include<cassert>

using namespace std;

int sum = 0;
bool M5(char s)
{
	if (s == 'R')
		sum = 0;

	else if (s == '0')
	{
		sum = sum;
	}
	else if (s == '1')
	{
		sum++;
	}
	else if (s == '2')
	{
		sum += 2;
	}

	if (sum % 3 == 0 || sum == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	string s;
	cout << "Enter input symbols (digits and 'R' for RESET): ";
	cin >> s;
	bool b;
	for (int i = 0; i < s.size(); i++)
	{
		char symbol = s[i];

		if (!(symbol == '0' || symbol == '1' || symbol == '2' || symbol == 'R')) {
			cout << "Invalid input characters " << endl;
			return 1; 
		}

		b = M5(symbol);

	}

	if (b == true)
		cout << "ACCEPT";
	else if (b == false)
		cout << "NOT ACCEPT";

	return 0;
}