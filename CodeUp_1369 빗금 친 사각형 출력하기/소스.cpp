#include <iostream>
using namespace std;

int main()
{
	int n, k;

	cin >> n >> k;
	
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (j == 1 || j == n || (j + i - 1) % k == 0 || i == n || i == 1)
				cout << '*';
			else
				cout << ' ';
		}
		cout << '\n';
	}

	return 0;
}