#pragma once
#include "Exception.h"

class DivideByZero : public Exception
{
public:
	DivideByZero(const char* mes);
	virtual const char* GetMessage() const;
};