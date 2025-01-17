#ifndef Sorting_hpp
#define Sorting_hpp

#include <stdio.h>
#include <vector>
#include <algorithm>
#include <random>

template <typename T>
class Sorting{
private:
    std::vector <T> data;
public:
    Sorting(){}
    Sorting(size_t size) : data(size) {}
    Sorting(std::vector <T> source) : Sorting(source.size) {
        std::copy(source.begin(), source.end(), data.begin());
    }
    typename std::vector <T>::iterator begin(){
        return data.begin();
    }
    
    typename std::vector <T>::iterator end(){
        return data.end();
    }
    
    const size_t size(){
        return data.size();
    }
    
    void shuffle_data(Sorting& source){
        std::random_device rd;
        std::mt19937 mt(rd());
        std::shuffle(source.begin(), source.end(), mt);
    }
    
    T generate_random(){
        std::random_device rd;
        std::mt19937 mt(rd());
        std::uniform_int_distribution<T> dis(1, 100000);
        T number = dis(mt);
        return number;
    }
    
    T& operator[](size_t index){
        return data[index];
    }
};
#endif /* Sorting_hpp */
