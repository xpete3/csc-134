#include <iostream>
#include <fstream>

int main() {
    int N;
    std::cout << "Enter a number N: ";
    std::cin >> N;

    std::ofstream outFile("numbers.txt");
    if (!outFile.is_open()) {
        std::cerr << "Error opening file for writing." << std::endl;
        return 1;
    }

    for (int k = 0; k <= N; k++) {
        int number = 2 * k + 1;
        outFile << number << std::endl;
    }

    outFile.close();

    std::ifstream inFile("numbers.txt");
    if (!inFile.is_open()) {
        std::cerr << "Error opening file for reading." << std::endl;
        return 1;
    }

    int total = 0;
    int numberFromFile;

    while (inFile >> numberFromFile) {
        total += numberFromFile;
    }

    inFile.close();

    std::cout << "Total of numbers read from the file: " << total << std::endl;

    return 0;
}
