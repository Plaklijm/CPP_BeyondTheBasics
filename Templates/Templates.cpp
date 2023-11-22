
#include <algorithm>
#include <array>
#include <iostream>
#include <list>
#include <queue>
#include <vector>

#include "FIFO.h"

// template sort function. type[] to ensure only an array can be put into this function
/*template<typename T>
auto sortArray(T type, int size)
{
    std::vector<T> vectorToBeSorted;
    for (int i = 0; i < size; ++i)
    {
        vectorToBeSorted.push_back(type[i]);
    }
    std::sort(vectorToBeSorted.begin(), vectorToBeSorted.end());
    std::array<T, size> sortedArray;
    std::copy(vectorToBeSorted.begin(), vectorToBeSorted.end(), sortedArray);
    return sortedArray;
}*/

int main(int argc, char* argv[])
{
    /*Maak één template-functie die array's kan sorteren:
    Een array van std::strings
    Een array van floats

    /*std::array<float, 4> floatArray = {1.f, 2.f, 1.1f};
    std::array<std::string, 4> sArray = {"helloo", "heank", "henk", "piet"};
    auto a = sortArray(floatArray, std::size(floatArray));
    for (auto element : a)
    {
        std::cout << element << std::endl;
    }*/

    FIFO<int> queue;
    queue.add_back(4);
    queue.add_back(1);

    

    return 0;
}
