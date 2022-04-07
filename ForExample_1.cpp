#include <iostream>
using namespace std;
int main()
{
	
	for (int i=0; i < 10; i++)
	{
		cout <<i+1<< ". Hello World!\n";
	}
	cout << "\n";

	for (int i = 0; i < 10; i=i+2)
	{
		cout << i + 1 << ". Hello World!\n";
	}
    
	cout << "\n";

	for (int i = 10; i > 0; i--)
	{
		cout << i  << ". Hello World!\n";
	}
	cout << "\n";
}
