// library.cpp
#include "library.h"

int mystrlen(const char* str) {
    int length = 0;
    while (*str != '\0') {
        length++;
        str++;
    }
    return length;
}

char* mystrcpy(char* str1, const char* str2) {
    char* originalStr1 = str1;
    while (*str2 != '\0') {
        *str1 = *str2;
        str1++;
        str2++;
    }
    *str1 = '\0'; // Null-terminate the destination string
    return originalStr1;
}

char* mystrcat(char* str1, const char* str2) {
    char* originalStr1 = str1;

    // Move to the end of str1
    while (*str1 != '\0') {
        str1++;
    }

    // Copy str2 to the end of str1
    while (*str2 != '\0') {
        *str1 = *str2;
        str1++;
        str2++;
    }

    *str1 = '\0'; // Null-terminate the concatenated string
    return originalStr1;
}

char* mystrchr(char* str, char s) {
    while (*str != '\0') {
        if (*str == s) {
            return str; // Found the character
        }
        str++;
    }
    return nullptr; // Character not found
}

char* mystrstr(char* str1, char* str2) {
    while (*str1 != '\0') {
        char* currentStr1 = str1;
        char* currentStr2 = str2;

        while (*currentStr1 == *currentStr2 && *currentStr2 != '\0') {
            currentStr1++;
            currentStr2++;
        }

        if (*currentStr2 == '\0') {
            return str1; // Found the substring
        }

        str1++;
    }

    return nullptr; // Substring not found
}
