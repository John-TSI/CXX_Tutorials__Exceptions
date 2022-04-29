#include"../inc/exception.hpp"

const char* exception::CustomException::what() const throw()
{
    return "Custom exception thrown.";
}