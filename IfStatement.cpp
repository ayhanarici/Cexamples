#include <iostream>
using namespace std;
int main()
{
	char name[20];
	int age;
	cout << "What is your name?";
	cin >> name;
	cout << "Hello " << name << "\n";
	cout << name << " , How old are you?";
	cin >> age;
	if (age < 50)
	{
		cout << "You are young";
	}
	else
	{
		cout << "You are old";
	}

	//short format of if statement 
	//if (age < 50) cout << "You are young"; else cout << "You are old";
}
