#ifndef CUSTOM_EXCEPTION_HPP
#define CUSTOM_EXCEPTION_HPP

#include<exception>

namespace exception
{
    class CustomException : public std::exception
    {  
        public:
            //virtual const char* what() const throw();
            virtual const char* what() const noexcept; // since C++11
    };
}

#endif