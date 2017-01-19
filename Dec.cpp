/* 
   Project FQ (DECRYPT)
   Programming the UPHAZ Core v1.0
   by alcopaul
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string lib64 = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	string msg = "NSY7PS7SNGUZP39GGP6B1NE60073";
	string key = "1234W23EDFFDEEER";
	int x = 0;
	int y = 0;
	string result = "";
	for (x = 0; x < (int) key.length(); x++)
	{
		y += (int)key[x];
	}
	srand(y);
	// anticollision
  for (int j = 0; j < (int) key.length(); j++)
	{
		rand();
	}
	//
	for (int e = 0; e < (int) msg.length(); e++)
	{
		int k = lib64.find(msg.substr(e, 1)) - rand() % 36;
		if (k < 0)
		{
			k = k + 36;
		}
		result += lib64.substr(k, 1);
	}
	cout << result;
	cout << endl;
	cout << "Press any key to exit";
	char c = getchar();
	return 0;
}
