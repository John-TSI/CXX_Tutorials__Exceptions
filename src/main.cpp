#include<iostream>
//#include<typeinfo>
#include"../inc/exception.hpp"


int main()
{
	try
	{
		// some code
		throw exception::CustomException();
	}
	catch(const std::exception& ex)
	{
		std::cout << ex.what() << std::endl;
		//std::cout << typename(ex).name() << std::endl;
	}

	return 0;
}
