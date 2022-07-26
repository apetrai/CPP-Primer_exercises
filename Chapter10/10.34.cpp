#include <iostream>
#include <vector>
#include <string>

int main() {
     std::vector<int> vec{1,2,3,4,5,6,81};
     for (auto i = vec.rbegin(); i != vec.rend(); ++i){
          std::cout << *i << std::endl;
     }
}