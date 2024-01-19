#include <iostream>
#include <vector>
#include <stdexcept>

// Функция для вычисления факториала числа
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

// Функция для генерации первых n факториалов
std::vector<int> generateFactorials(int n) {
    if (n < 0) {
        throw std::invalid_argument("Input should be a non-negative integer.");
    }

    std::vector<int> result;
    for (int i = 0; i < n; ++i) {
        result.push_back(factorial(i));
    }

    return result;
}

int main() {
    try {
        int n;
        std::cout << "Enter a non-negative integer n: ";
        std::cin >> n;

        std::vector<int> factorials = generateFactorials(n);

        std::cout << "Factorials:";
        for (int factorial : factorials) {
            std::cout << " " << factorial;
        }
        std::cout << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}
