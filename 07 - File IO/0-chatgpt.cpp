#include <iostream>
#include <fstream> // For file handling

int main() {
    // Create an ofstream object to write to a file
    std::ofstream outFile("output.txt");

    // Check if the file is open
    if (outFile.is_open()) {
        // Write "Hello, World!" to the file
        outFile << "Hello, World!";
        // Close the file after writing
        outFile.close();
        std::cout << "Message written to file successfully." << std::endl;
    } else {
        std::cout << "Unable to open file." << std::endl;
    }

    return 0;
}
