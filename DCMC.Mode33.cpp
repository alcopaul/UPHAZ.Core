/*
Digital Chaos Magic Channeler v1.0 (Mode33)
by alcopaul
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string lib33 = "0123456789ABCDEFGHIJKLMNlOPRSTUWY";
	string msg;
	string key;
	int x = 0;
	int y = 0;
	string result = "";
	cout << "Enter string : ";
	cin >> msg;
	key = msg;
	for (x = 0; x < (int)key.length(); x++)
	{
		y += (int)key[x];
	}
	srand(y);
	// anticollision
	for (int j = 0; j < (int)key.length(); j++)
	{
		rand();
	}
	//
	for (int e = 0; e < (int)msg.length(); e++)
	{
		int k = lib33.find(msg.substr(e, 1)) - rand() % 33;
		if (k < 0)
		{
			k = k + 33;
		}
		result += lib33.substr(k, 1);
	}
	cout << result;
	cout << endl;
	cout << "Press any key and <enter> to exit\n";
	string g;
	cin >> g;
	return 0;
}
