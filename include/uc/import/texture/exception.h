#pragma once

#include <exception>
#include <string>

namespace uc
{
    namespace import
    {
        namespace texture
        {
            class exception : public std::exception 
            {
                public:
                exception(const char* s) :m_message(s) {}
                exception(const std::string& s) : m_message(s)
                {

                }

                const char* what() const override
                {
                    return m_message.c_str();
                }

                private:
                std::string m_message;

            };
        }
    }
}

