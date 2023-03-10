#include <cstring>

#include "easy_print.h"
#include "ip_calc.h"

using namespace std;

int main(int argc, char* argv[]){ 
    EasyPrint easy_print;
    //easy_print.print(argc);
    if (argc == 1) {
        easy_print.print("Welcome to the iputils.");
    } else {
        if (std::strcmp(argv[1],"c") == 0) {
            IPCalc(argv[2]);
            /*
            vector<string> input_data = split(argv[2],'.');

            //easy_print.print(split(argv[2],'.'));
            //easy_print.print(input_data[3].find("/"));
            if (input_data.size() != 4 || input_data[3].find('/') == std::string::npos || split(input_data[3],'/').size() != 2) {
                easy_print.print("Sorry. Your input is invalid.");
                return 0;
            } else {
                easy_print.print("Okay. Your input is valid.");
                easy_print.print("Subnet mask is " + split(input_data[3],'/')[1]);

                std::vector<std::string> ip_list(input_data);
                ip_list[0] = input_data[0];
                ip_list[1] = input_data[1];
                ip_list[2] = input_data[2];
                ip_list[3] = split(input_data[3],'/')[0];

                //easy_print.print(ip_list);
                std::string bs1 = std::bitset<8>(stoi(ip_list[0])).to_string();
                std::string bs2 = std::bitset<8>(stoi(ip_list[1])).to_string();
                std::string bs3 = std::bitset<8>(stoi(ip_list[2])).to_string();
                std::string bs4 = std::bitset<8>(stoi(ip_list[3])).to_string();
                bitset<32> input_address_b = (bitset<32>)(bs1 + bs2 + bs3 + bs4);
                //easy_print.print(bs1);
                //easy_print.print(bs2);
                //easy_print.print(bs3);
                //easy_print.print(bs4);

                std::string mask_string;
                for(int i = 0;i < 32;i++) {
                    if (i < stoi(split(input_data[3],'/')[1])) {
                        mask_string += '1';
                    } else {
                        mask_string += '0';
                    }
                }
                std::bitset<32> mask_bit = (std::bitset<32>) mask_string;
                std::bitset<32> mask_bit_flip = ((std::bitset<32>) mask_string).flip();
                std::bitset<32> network_address_b = std::bitset<32>(input_address_b&mask_bit);
                std::string network_address_string_b = network_address_b.to_string();

                std::bitset<32> broadcast_address_b = std::bitset<32>(network_address_b|mask_bit_flip);
                std::string broadcast_address_string_b = broadcast_address_b.to_string();

                easy_print.print(input_address_b.to_string()+"<-Input Address");
                easy_print.print(mask_string+"<-Subnet Mask");
                easy_print.print(network_address_b.to_string()+"<-Network Address");
                easy_print.print(broadcast_address_b.to_string()+"<-Broadcast Address");
                //easy_print.print(mask_bit_flip);

                //easy_print.print(network_address_string_b.substr(0,8));
                //easy_print.print(network_address_string_b.substr(8,8));
                //easy_print.print(network_address_string_b.substr(16,8));
                //easy_print.print(network_address_string_b.substr(24,8));
                //easy_print.print(strbin2i(network_address_string_b.substr(0,8)));
                //easy_print.print(strbin2i(network_address_string_b.substr(8,8)));
                //easy_print.print(strbin2i(network_address_string_b.substr(16,8)));
                //easy_print.print(strbin2i(network_address_string_b.substr(24,8)));

                std::string network_address_string = strbin2i(network_address_string_b.substr(0,8)) + '.' + strbin2i(network_address_string_b.substr(8,8)) + '.' + strbin2i(network_address_string_b.substr(16,8)) + '.' + strbin2i(network_address_string_b.substr(24,8));
                std::string broadcast_address_string = strbin2i(broadcast_address_string_b.substr(0,8)) + '.' + strbin2i(broadcast_address_string_b.substr(8,8)) + '.' + strbin2i(broadcast_address_string_b.substr(16,8)) + '.' + strbin2i(broadcast_address_string_b.substr(24,8));
                easy_print.print(network_address_string+"<-Network Address");
                easy_print.print(broadcast_address_string+"<-Broadcast Address");
            }
             */
        }
    }
    return 0;
}