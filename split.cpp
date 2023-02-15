#include "split.h"

std::vector<std::string> split(std::string str,char del) {
    int first = 0;
    int last = str.find_first_of(del);
    std::vector<std::string> result;

    while (first < str.size()) {
        result.push_back(str.substr(first, last - first));
        first = last + 1;
        last = str.find_first_of(del, first);
        if (last == std::string::npos) last = str.size();
    }
    return result;
}
