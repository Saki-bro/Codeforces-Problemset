#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> processNumber(long long int number) {
    std::vector<std::string> steps;

    while (number != 1) {
        if (number % 6 == 0) {
            steps.push_back("divide by 6 and get " + std::to_string(number));
            number /= 6;
        } else if (number % 2 == 0) {
            steps.push_back("multiply by 2 and get " + std::to_string(number));
            number *= 2;
        } else {
            throw std::invalid_argument("Cannot proceed with " + std::to_string(number));
        }
    }

    return steps;
}

int main() {
    try {
        long long int randomNumber = 15116544;
        std::vector<std::string> resultSteps = processNumber(randomNumber);

        // Print the steps
        for (const auto& step : resultSteps) {
            std::cout << step << std::endl;
        }
    } catch (const std::invalid_argument& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
