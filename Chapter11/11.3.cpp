#include <iostream>
#include <map>
#include <string>
#include <sstream>
#include <algorithm>
#include <iterator>
#include <vector>


void test(std::vector<int> &s) {
    std::replace(s.begin(), s.end(), 0, 99);
}



int main() {
    std::map<std::string, size_t> words;
    std::string buffer;
    while (std::cin >> buffer) {
        if(buffer=="eof")
            break;

        ++words[buffer];
    }
    for (const auto& i : words) {
        std::cout << i.first << " " << i.second << std::endl;
    }
    
    return 0;
}