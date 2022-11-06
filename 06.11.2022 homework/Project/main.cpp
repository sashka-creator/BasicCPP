#include <iostream>
#include <math.h>
#include <ctime>
using namespace std;

int main()
{
	int clients, price;

	cout << "Clients";
	cin >> clients;

	int arr[10000], seek;
	int task;

	for (size_t i = 0; i < clients; i++)
	{
		cout << "How much client " << i << " have to pay? ";
		cin >> arr[i]; cout << endl;
	}
	do
	{
		cout << "1 packed price" << endl;
		cout << "2 their pay" << endl;
		cout << "3 profit" << endl;
		cin >> task;
		switch (task)
		{
		case 1:
		{
			cout << "Price " << endl;
			cin >> seek;
			for (size_t i = 0; i < clients; i++)
			{
				if (arr[i] == seek)
				{
					cout << "Client " << i << " have paid" << arr[i] << endl;
				}
			}
		}break;
		case 2:
		{
			for (size_t i = 0; i < clients; i++)
			{
				cout << "Client " << i << " have to pay " << arr[i] << endl;
			}
		}break;
		case 3:
		{
			int sum = 0;
			for (size_t i = 0; i < clients; i++)
			{
				sum += arr[i];
			}
			cout << "All the clients made " << sum << endl;

		}break;
		};
	} while (task != 0);
}