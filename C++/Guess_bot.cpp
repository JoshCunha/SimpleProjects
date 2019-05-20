#include <iostream>

// Simple program for finding a specific number using the binary search method

int main();

int main(){
	char input{};
	std::cout 	<< "Welcome to the Guess-o-tron 2000!" << std::endl
				<< "Think of a secret number between 1 and 255." << std::endl
				<< "Are you ready to begin? ([Y]es/[N]o)" << std::endl;
	std::cin >> input;
	if (input == 'Y'){
		char inputter{' '};
		int a{1};
		int b{255};
		int final{};
		int count{};
		while ((inputter != 'Y') && ((inputter == 'L') || (inputter == 'H') || (inputter == ' '))){
			int midpoint{(a + b)/2};
			std::cout << "Is your number " << midpoint << "? ([Y]es, [H]igher, [L]ower)" << std::endl;
			std::cin >> inputter;
			if(inputter == 'H'){
				a = midpoint + 1;
			}else if (inputter == 'L'){
				b = midpoint - 1;
			}else{
				final = midpoint;
			}
			count++;
		}
		if (inputter == 'Y'){
			std::cout 	<< "Hooray, I correctly guessed your secret number (" << final
						<< ") in " << count << " guesses!";
		}else{
			std::cout << "You entered an invalid input. Please try again.";
		}
	}
	return 0;
}
