#include "easy_print.h"

void EasyPrint::print(std::vector<std::string> a) {
    std::cout << "[";
    for (std::string str:a) {
        std::cout << str;
        std::cout << ",";
    }
    std::cout << "]" << std::endl;
}
