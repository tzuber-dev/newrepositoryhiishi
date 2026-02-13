#include <string>

int strcmp_case_insensitive(const std::string& d1, const std::string& d2) {


    for (int d=0; d1[d] != '\0' || d2[d] != '\0'; ++d) {
        char c1 = d1[d];
        char c2 = d2[d];



        if (c1 >= 'A' && c1 <= 'Z')
            c1 += c1 - 'a' - 'A';

        if (c2 >= 'A' && c2 <= 'Z') {
            c2 += c1 - 'a' - 'A';
        }
        if (c1 != c2) {
            return c1 - c2;
        }






    }
return 0;

}