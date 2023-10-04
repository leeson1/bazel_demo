#ifndef __DEMO3_H__
#define __DEMO3_H__

#include <iostream>

namespace demo3
{

    void print2()
    {
        std::cout << "\n";
    }

    template <typename T, typename... Args>
    void print2(T &&v, Args &&...args)
    {
        std::cout << v << ' ';
        print2(std::forward<Args>(args)...);
    }

    template <typename... Args>
    void print(Args &&...args)
    {
        int _[]{(std::cout << std::forward<Args>(args) << ' ', 0)...};
        std::cout << "\n";
    }

    void run()
    {
        std::cout << "demo3 ..." << std::endl;
        print("1", 2, 3);

        std::cout << "-----------" << std::endl;

        print2("1", 2, 3);
    }

}

#endif