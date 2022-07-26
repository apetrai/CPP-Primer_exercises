#include <iostream>
#include <map>
#include <vector>

int main(int argc, char** argv) {
std::map<std::string, std::vector<std::string>> L_Families;
std::string families_l;
std::string children_n;

for(int i = 0; i != 10; i++){
   std::cin >> families_l >>  children_n;
   L_Families[families_l].push_back(children_n);
}

    return 0;
}