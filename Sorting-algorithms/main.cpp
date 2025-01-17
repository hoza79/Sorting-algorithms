#include <iostream>
#include "Sorting.hpp"
#include <vector>

int main(int argc, const char * argv[]) {
    std::vector <int> numbers = {1,2,3,4,5,6,7,8,9,10};
    Sorting <int> s(10);
    for(int i = 0; i < s.size(); i++){
        s[i] = s.generate_random(); 
    }
    std::cout << "before shuffling" << "\n";
    for(int i = 0; i < s.size(); i++){
        std::cout << s[i] << " ";
    }
    std::cout << "\n";

    s.shuffle_data(s);
    std::cout << "after shuffling" << "\n";
    for(int i = 0; i < s.size(); i++){
        std::cout << s[i] << " ";
    }
    std::cout << "\n";
    
    return 0;
}
