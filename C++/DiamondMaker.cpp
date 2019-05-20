#include <iostream>

// Simple script to draw a diamond made of asterisks given the dimensions of the grid to draw on

int main();
void diamond(int size);

void diamond(int size){
	int centre{(size+1)/2};
	for (int k{1}; k <= size; k++){
		if ((k == 1) || (k == size)){
			for (int a{1}; a < centre; a++){
				std::cout << "   ";
			}
			std::cout << " \* " << std::endl;
		} else if (k == centre){
			std::cout << " \* ";
			for (int t{1}; t <= (size-2); t++){
				std::cout << "   ";
			}
			std::cout << " \* " << std::endl;
		} else if ((k > 1) && (k < centre)){
			int count{centre-k};
			int middle_space{size - (2*count + 2)};
			for (int x{1}; x <= count; x++){
				std::cout << "   ";
			}
			std::cout << " \* ";
			for (int y{1}; y <= middle_space; y++){
				std::cout << "   ";
			}
			std::cout << " \* " << std::endl;
		} else if ((k > centre) && (k < size)){
			int count{k - centre};
			int middle_space{size - (2*count + 2)};
			for (int x{1}; x <= count; x++){
				std::cout << "   ";
			}
			std::cout << " \* ";
			for (int y{1}; y <= middle_space; y++){
				std::cout << "   ";
			}
			std::cout << " \* " << std::endl;
		}
	}
}

int main(){
	int input{0};
	std::cout << "Please enter an odd number to define the dimensions of the 2D grid: ";
	std::cin >> input;
	diamond(input);
	return 0;
}
