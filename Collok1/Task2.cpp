#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

// Функция для удаления дубликатов из контейнера
template <typename T>
std::vector<T> removeDuplicates(const std::vector<T>& input) {
    std::vector<T> result;
    std::set<T> uniqueElements;

    for (const T& element : input) {
        if (uniqueElements.insert(element).second) {
            result.push_back(element);
        }
    }

    return result;
}

int main() {
    std::vector<int> input = {1, 2, 3, 2, 4, 5, 6, 1};

    std::vector<int> result = removeDuplicates(input);

    std::cout << "Original: ";
    for (int element : input) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    std::cout << "Without duplicates: ";
    for (int element : result) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    return 0;
}
