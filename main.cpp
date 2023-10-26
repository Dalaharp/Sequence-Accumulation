
/*Description: This source file contains the main driver program. It includes the accum.h header and defines the
main function. The program first prompts the user to enter four integers, then stores them in a vector and 
calls the accum function to calculate their sum. It displays the result to the user. Next, it prompts the 
user to enter four strings, stores them in another vector, and uses the overloaded accum function for 
std::string to concatenate the strings with commas. The concatenated string is then displayed as the result.*/

#include <iostream>
#include <vector>
#include "accum.h"

int main() {
    std::cout << "Enter four numbers: ";
    std::vector<int> numbers(4);
    for (int i = 0; i < 4; ++i) {
        std::cin >> numbers[i];
    }
    int sum = accum(numbers);
    std::cout << "The sum of the numbers is " << sum << std::endl;

    std::cout << "Enter four strings: ";
    std::vector<std::string> strings(4);
    for (int i = 0; i < 4; ++i) {
        std::cin >> strings[i];
    }
    std::string concatenated = accum(strings);
    std::cout << "The sum of the strings is " << concatenated << std::endl;

    return 0;
}
