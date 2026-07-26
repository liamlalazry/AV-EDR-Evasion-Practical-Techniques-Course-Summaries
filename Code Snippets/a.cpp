#include <windows.h>
#include <iostream>
#include <string>
#include <vector>

std::string xor_decode(const std::vector<unsigned char>& data, char key) {
    std::string result;
    for (auto c : data)
        result += c ^ key;
    return result;
}

int main() {
    std::vector<unsigned char> obf_domain = {0x7F, 0x74, 0x70, 0x71, 0x74, 0x65}; // xor with 0x12
    std::string domain = xor_decode(obf_domain, 0x12);
    std::cout << "Decoded domain: " << domain << std::endl;

    return 0;
}
// vector - is a dynamic array which means it шыте stricted to a number of elements inside it gets bigger with the elements pushed  in and the <> is defining the type of the elements that were pushed 
// auto - a comfortable function in с++ that lets u give the compiler to choose the type of the data by itself auto с = "david" means the compiler would choose string.





//lternative: DNS over HTTPS (DoH) or domain generation algorithms (DGAs)
//DGAs can generate domains on the fly based on time/date.
//Avoids static detection by resolving domain only at runtime.
