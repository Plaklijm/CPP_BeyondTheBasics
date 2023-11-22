#include <algorithm>
#include <array>
#include <iostream>

#include "FIFO.h"

// template sort function. Ensure only an array can be put into this function, gets the size automatically when called
// https://stackoverflow.com/questions/6538547/array-by-reference-length-in-c
template<typename T, int N>
auto sortArray(T (&arr)[N])
{
    std::cout << "Array lenght: " << N << std::endl;
    // just using the standard std::sort, https://en.cppreference.com/w/cpp/algorithm/sort
    std::sort(arr, arr + N);
    for (int i = 0; i < N; ++i)
    {
        std::cout << arr[i] << "|";
    }
    std::cout << "\n";
}

int main(int argc, char* argv[])
{
    float floatArray[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
    std::string stringArray[] = {"Halla", "Hola", "Bonjour", "Hallo", "Guten Tag", "Hej", "Oi mate"};
    std::string alphabetArray[] = { "a", "h", "c", "e", "p", "o", "b", "d", "f", "i", "g", "k", "j", "l", "n", "m"};
    
    sortArray(floatArray);
    sortArray(stringArray);
    sortArray(alphabetArray);

    FIFO<int> queue;

    for (int i = 0; i < 10; ++i)
    {
        queue.add_back(i + rand() % 10);
    }

    std::cout << queue.get_first() << std::endl;
    std::cout << queue.get_size() << std::endl;

    queue.clear_queue();
    
    return 0;
}
