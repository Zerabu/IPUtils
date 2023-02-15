#pragma once

#ifndef __EASYPRINT_H_INCLUDED__
#define __EASYPRINT_H_INCLUDED__

#include <iostream>
#include <string>
#include <vector>
class EasyPrint {
    public:
        void print(std::vector<std::string> a);
        template<class Type> void print(Type a) {
            //std::cout << typeid(a).name() << std::endl;
            std::cout << a << std::endl;
        }
};

#endif




