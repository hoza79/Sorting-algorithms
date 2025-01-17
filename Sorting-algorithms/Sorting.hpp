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
    Sorting(std::vector <T> source) : data(source){}
    
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
        std::uniform_int_distribution<T> dis(1, 10);
        T number = dis(mt);
        return number;
    }
    
    T& operator[](size_t index){
        return data[index];
    }
    
    void insertion_sort(){
        for(int i = 1; i < data.size(); i++){
            int j = i - 1;
            int temp = data[i];
            while(j >= 0 && data[j] > temp){
                data[j + 1] = data[j];
                j--;
            }
            data[j + 1] = temp;
        }
    }
};
#endif /* Sorting_hpp */
