#include <iostream>
#include <string>



void triangle() {
	unsigned int tHeight = 0;

	std::cout << "How many lines tall do you want your triangle: ";
	std::cin >> tHeight;
	std::cout << std::endl;

	for(int i = 0; i != tHeight; i++) {
		std::string star(i, '*');
		std::cout << star << std::endl;
	}
}

void square(){
	unsigned int size = 0;

	std::cout << "How big of a square do you want: ";
	std::cin >> size;

	for(unsigned int i = 0; i != size; i++) {
		std::string star(size, '*');
		std::cout << star << std::endl;
	}
}

void rectangle(){
	unsigned int length, width = 0;

	std::cout << "What is the length of the rectangle: ";
	std::cin >> length;
	std::cout << std::endl << "What is the width of the rectangle: ";
	std::cin >> width;
	std::cout << std::endl;

	for(unsigned int i = 0; i != length; i++){
		std::string star(width, '*');
		std::cout << star << std::endl;
	}

}

int main() {
	
	std::string name;

	std::cout << "Please enter your first name: ";
	std::getline(std::cin, name);

	const std::string greeting = "Hello, " + name + "!";
	const std::string spacing(greeting.size(), ' ');
	const std::string second = "* " + spacing + " *";

	const std::string first(second.size(), '*');

	const int pad = 1;

	const int rows = pad * 2 + 3;
	const std::string::size_type cols = greeting.size() + pad * 2 + 2;


	for(int r = 0; r != rows; r++){
		std::string::size_type c = 0;

		while(c != cols) {
			if(r == pad + 1 && c == pad +1){
				std::cout << greeting;
				c += greeting.size();
			}
			else {
				if(r == 0 || r == rows - 1 || c == 0 || c == cols -1) {
					std::cout << "*";
				}
				else {
					std::cout << " ";
				}
				c++;
			}
		}
		std::cout << std::endl;
	}


	std::cout << std::endl << std::endl << std::endl;

	triangle();
	std::cout << std::endl << std::endl << std::endl;
	square();
	std::cout << std::endl << std::endl << std::endl;
	rectangle();
	std::cout << std::endl << std::endl << std::endl;
	

	return 0;
}