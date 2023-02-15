#include "string_binary_to_int.h"
std::string StringBinaryToInt(std::string s) {

    int out = 0;

    for (int i = 0, size = s.size() ; i < size ; ++i ) {
        out *= 2;
        out += ((int)s[i] == 49) ? 1 : 0;
    }

    return std::to_string(out);

}
