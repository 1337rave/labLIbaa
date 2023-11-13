#include "library.h"
#include <iostream>

int main() {
    const char* str1 = "Hello, ";
    const char* str2 = "world!";
    char buffer[50];

    std::cout << "Length of str1: " << mystrlen(str1) << std::endl;

    mystrcpy(buffer, str1);
    std::cout << "Copied string: " << buffer << std::endl;

    mystrcat(buffer, str2);
    std::cout << "Concatenated string: " << buffer << std::endl;

    char searchChar = 'o';
    char* charPtr = mystrchr(buffer, searchChar);
    if (charPtr != nullptr) {
        std::cout << "Found character '" << searchChar << "' at position: " << (charPtr - buffer) << std::endl;
    }
    else {
        std::cout << "Character '" << searchChar << "' not found." << std::endl;
    }

    char* substrPtr = mystrstr(buffer, (char*)"world");
    if (substrPtr != nullptr) {
        std::cout << "Found substring at position: " << (substrPtr - buffer) << std::endl;
    }
    else {
        std::cout << "Substring not found." << std::endl;
    }

    return 0;
}
//