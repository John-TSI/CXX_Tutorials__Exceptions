#include"../inc/exception.hpp"

//const char* exception::CustomException::what() const throw()
const char* exception::CustomException::what() const noexcept
{
    return "Custom exception thrown.";
}