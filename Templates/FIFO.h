#pragma once
#include <vector>

// Template Queue with brief to explain the property of the function
template <typename T>
class FIFO
{
public:
    /**
     * \brief Adds T element at the back of the queue
     */
    void add_back(T elementToAdd)
    {
        elements.push_back(elementToAdd);
        std::cout << "pushed " << elementToAdd << " at the back" << std::endl;
    }
    
    /**
    * \brief Gets the first T element of the queue 
    */
    T get_first() const
    {
        for (auto element : elements)
        {
            std::cout << element << ",";
        }
        std::cout << "\n" << "first element: " << elements.front() << std::endl;
        return elements.front();
    }

    /**
    * \brief Gets the size of the queue
    */
    auto get_size() const
    {
        std::cout << "size: " << elements.size() << std::endl;
        return elements.size();
    }

    /**
    * \brief Clear the queue
    */
    void clear_queue()
    {
        elements.clear();
        std::cout << "queue cleared | current size: " << elements.size() << std::endl;
    }

private:
    std::vector<T> elements;
};

