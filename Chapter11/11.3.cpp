#include <iostream>
#include <map>
#include <string>
#include <sstream>
#include <algorithm>
#include <iterator>
#include <vector>

int main() {
    std::map<std::string, size_t> words;
    std::string buffer;
    while (std::cin >> buffer) {
        ++words[buffer];
    }
    for (const auto& i : words) {
        std::cout << i.first << " " << i.second << std::endl;
    }
    
    return 0;
}