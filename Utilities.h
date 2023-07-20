/********************************************************************************
Milestone 3
Name  :Arzu Gizem Kirici  
Student ID#:135304210
Email      :agkirici@myseneca.ca 
Section    :OOP345-ZRA

I have done all the coding by myself and only copied the code that my professor 
provided to complete my workshops and assignments.
********************************************************************************/

#ifndef SDDS_UTILITIES_H
#define SDDS_UTILITIES_H

#include <string>
#include <stdexcept>

using namespace std;

namespace sdds {
    class Utilities {
        size_t m_widthField = 1;
        static char m_delimiter;

    public:
        void setFieldWidth(size_t new_Width);
        size_t getFieldWidth() const;
        string extractToken(const string& str, size_t& next_pos, bool& more);
        static void setDelimiter(char new_Delimiter) {
            m_delimiter = new_Delimiter;
        }
        static char getDelimiter() {
            return m_delimiter;
        }
    };
};

#endif
