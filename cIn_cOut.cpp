#include <iostream>

int main()
{
	char name[20];
	int age;
	std::cout << "What is your name?";
	std::cin >> name;
	std::cout << "Hello " << name << "\n";
	std::cout << name << " , How old are you?";
	std::cin >> age;
}
