#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main() {
	std::vector<int> numbers {};
	int answer {0};
	char choice {};
	std::cout << "Enter the numbers you want with: \n\n";
	while (answer != -1){
		std::cin >> answer;
		std::cout << "Added number: " << answer << "\n";
		numbers.push_back(answer);
		std::cout << "If you want to add one more type it out and press enter, but if you want to quit type -1!\n";
	};
	numbers.pop_back();
	std::sort(numbers.begin(), numbers.end());

	do{
		std::cout << "What do you want to do with the numbers: \n";
		std::cout << "A: add\n";
		std::cout << "M: medium\n";
		std::cout << "S: smallest\n";
		std::cout << "L:largest\n";
		std::cout << "Q: quit\n";

		std::cin >> choice;
				
		if (choice == 'A' || choice == 'a') {
			int sum {0};
			for(int num: numbers) {
				sum+=num;
			}
			std::cout << "The SUM is: " << sum << "\n";;

		};
		if (choice == 'M' || choice == 'm') {
			double median {};			
			int index {};
			if (numbers.size() % 2 != 0) {
				index = (numbers.size()/2)+0.5;
				std::cout << "The MEDIAN is: " << numbers[index] << "\n";
			}else{
				index = numbers.size()/2;
				std::cout << "The MEDIAN is: " << numbers[index] << "\n";
			};
		

		};
		if (choice == 'S' || choice == 's') {
			int smallest = numbers[0];
			std::cout << "The SMALLEST is: " << smallest << "\n";	
		};

		if (choice == 'L' || choice == 'l') {
			std::cout << "The LARGEST is: " << numbers[numbers.size()-1] << "\n";
		

		};
	}while(choice != 'Q' && choice != 'q');



}
