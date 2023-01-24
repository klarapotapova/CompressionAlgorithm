#include <iostream>
#include <string>
#include <unordered_map>

std::string compress(const std::string& s) {
    std::unordered_map<char, int> charCount;
    for (const auto& c : s) {
        charCount[c]++;
    }

    std::string compressed;
    for (const auto& [c, count] : charCount) {
        compressed += c + std::to_string(count);
    }

    return compressed;
}

int main() {
    std::string original;
    std::cout << "Enter a string to compress: ";
    std::getline(std::cin, original);

    std::string compressed = compress(original);
    std::cout << "Compressed string: " << compressed << std::endl;

    return 0;
}
