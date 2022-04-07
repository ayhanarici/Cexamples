// Create Multiplication Table
#include <iostream>
using namespace std;
int main()
{
	int i, j;
	char c;
	cout << "\t" << "\t" << "\t" << "\t" <<"The Multiplication Table\n\n";
	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j <= 10; j++)
		{
			cout << "\t" << (i*j);
		}
		cout << endl << endl;
	}
	cin >> c; //wait until press any key
}
