#ifndef SOMETHING_H
#define SOMETHING_H

#include <string>

struct TestClass
{
    const std::string& getStr() const;

    const std::string str {"Hello World"};
};

#endif
