#pragma once

class Exception
{
protected:
    char m_message[100];
public:
    Exception(const char* message);

    virtual const char* GetMessage() const;
};