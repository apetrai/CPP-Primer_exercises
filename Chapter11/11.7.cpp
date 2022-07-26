#include <iostream>
#include <string>
#include <vector>
#include <map>



int main(void) {
    std::map<std::string, std::vector<std::string>> FL_children;
    std::string L_Families, N_Children;
    while(std::cin >> L_Families >> N_Children) {
            FL_children[L_Families].push_back(N_Children);
    }
 return 0;
}