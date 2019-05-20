#include <iostream>

// Script to print a given amount of rows of Pascal's Triangle using both an
// iterative and recursive method

int main();

int pascal_triangle(int n);
int pascal_triangle_recursive(int n);
int pascal_row(int j, int i);


int pascal_triangle(int n) {
	int total_integer{0};
	for (int row{0}; row <= n; row++) {
		int number{1};
		for (int column{0}; column <= row; column++) {
			std::cout << number << " ";
			number = number * (row - column) / (column + 1);
			total_integer++;
		}
		std::cout << std::endl;
	}
	return total_integer;
}

int pascal_triangle_recursive(int n) {
	for (int row{0}; row <= n; row++) {
		for (int column{0}; column <= row; column++) {
			std::cout << pascal_row(row, column) << " ";
		}
		std::cout << std::endl;
	}
	return ((n + 1)*(n + 2)) / 2;
}

int pascal_row(int j, int i) {
	if ((i == 0) || (i == j)) {
		return 1;
	} else if ((i == 1) || (i == (j - 1))) {
		return  j;
	} else {
		return pascal_row(j - 1, i - 1) + pascal_row(j - 1, i);
	}
}

#ifndef MARMOSET_TESTING
int main() {
	int input{};
	std::cout << "Enter the number of rows for Pascal's Triangle: ";
	std::cin >> input;
	std::cout << "Pascal's Triangle Calculated Using Iteration:" << std::endl;
	std::cout << pascal_triangle(input) << std::endl << std::endl;
	std::cout << "Pascal's Triangle Calculated Using Recursion:" << std::endl;
	std::cout << pascal_triangle_recursive(input);
}
#endif
