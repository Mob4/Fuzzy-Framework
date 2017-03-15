#ifndef NULLEXPRESSIONEXCEPTION_H
#define NULLEXPRESSIONEXCEPTION_H
#include<iostream>

namespace core
{
	class NullExpressionException : public std::exception
	{
	public:
		NullExpressionException(std::string m) : m(m) {};
		virtual ~NullExpressionException() {};

	private:
		std::string m;
	};
}

#endif