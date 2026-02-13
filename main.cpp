#include <iostream>

#include "src/hello.hpp"

int main() {
    const char* string1 = "Bicycle";

    const char* string2 = "dog";

    int aftermath = strcmp_case_insensitive(string1, string2);

    if (aftermath ==0) {
        std::cout<<"The strings are equalized."<<std::endl;
    } else if (aftermath <0) {
        std::cout<<"First string is less than the second string.";
        }else {
            std::cout<<"First string is greater than the second string.";


    }
    return 0;
}