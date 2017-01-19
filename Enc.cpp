/* 
   Project FQ (ENCRYPT)
   Programming the UPHAZ Core v1.0
   by alcopaul
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string lib64 = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	string msg = "HELLOTHISISAMESSAGEFROMUPHAZ";
	string key = "1234W23EDFFDEEER";
	int x = 0;
	int y = 0;
	string result = "";
	for (x = 0; x < (int) key.length(); x++)
	{
		y += (int)key[x];
	} //y values ranges from -9999999999999999999 to 9999999999999999999 in visual c++ 2008
	srand(y);
	// anticollision
  for (int j = 0; j < (int) key.length(); j++)
	{
		rand();
	}
	//
	for (int e = 0; e < (int) msg.length(); e++)
	{
		int k = lib64.find(msg.substr(e, 1)) + rand() % 36;
		if (k >= 36)
		{
			k = k - 36;
		}
		result += lib64.substr(k, 1);
	}
	cout << result;
	cout << endl;
	cout << "Press any key to exit";
	char c = getchar();
	return 0;
}
