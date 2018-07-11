#include <iostream>
#include <string>

int main() {
	std::string name;
	std::string age;
	std::string favoriteFood;
	std::string pets;

	std::cout << "Hello, whats your name?\n";
	getline(std::cin, name);
	std::cout << "Nice to meet you, " << name << "!\n";
	std::cout << "How old are you?\n";
	getline(std::cin, age);
	std::cout << "Cool...\n";
	std::cout << "What's your favorite food?\n";
	getline(std::cin, favoriteFood);
	std::cout << "Yummy!\n";
	std::cout << "Do you have any pets?\n";
	getline(std::cin, pets);
	if (pets == "yes" || pets == "Yes") {
		std::cout << "Nice! I love pets!\n";
	}
	else {
		std::cout << "Oh ok...\n";
	}
	std::cout << "Well, here's what I know about you...\n\n";
	std::cout << "Your name is " << name << " and you are " << age << " years old.\n";
	std::cout << "Your favorite food is " << favoriteFood;
	if (pets == "yes" || pets == "Yes") {
		std::cout << " and you love pets like I do :)\n";
	}
	else
	{
		std::cout << " and you hate animals and all living things...\n";
	}
	std::cin.ignore();
	return 0;
}