#ifndef __DEMO2_H__
#define __DEMO2_H__

#include <iostream>
#include <format>

namespace demo2
{
    void run()
    {
        std::cout << "demo2 ..." << std::endl;
        std::cout << std::format("this {} a {} example\n", "is", "simple");
        std::cout << std::format("this {0} a {1} example\n", "is", "simple");
        std::cout << std::format("this {1} a {0} example\n", "simple", "is");
    }

}

#endif