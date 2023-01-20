#include "Converter.hpp"
Converter::Converter()
{

}

Converter::Converter(const char* str)
{
    if (!str[1] && !std::isdigit(str[0]))
        this->_valueDouble = str[0];
    else
    {
        char *control;
       this->_valueDouble = std::strtod(str, &control);
        if (*control && !(!strcmp(control, "f") || !strcmp(control, "F"))  )
            _error = 1;
    }
    this->_valueChar = static_cast<char>(this->_valueDouble);
    this->_valueInt = static_cast<int>(this->_valueDouble);
    this->_valueFloat = static_cast<float>(this->_valueDouble);
}

Converter::Converter(const Converter& src)
{
   this->_valueDouble = src._valueDouble;
   this->_valueChar = src._valueChar;
   this->_valueInt = src._valueInt;
   this->_valueFloat = src._valueFloat;
}

Converter& Converter::operator=(const Converter& src)
{
    this->_valueChar = src._valueChar;
    this->_valueInt = src._valueInt;
    this->_valueFloat = src._valueFloat;
    this->_valueDouble = src._valueDouble;
    return (*this);
}

Converter::~Converter()
{
}

char    Converter::getChar(void) const
{
    return (this->_valueChar);
}

int     Converter::getInt(void) const
{
    return (this->_valueInt);
}

float   Converter::getFloat(void) const
{
    return (this->_valueFloat);
}

double  Converter::getDouble(void) const
{
    return (this->_valueDouble);
}

std::ostream& operator<<(std::ostream& outputStream, const Converter& obj)
{
    if (!obj._error)
    {
        /*------------------CHAR----------------------------*/
        if (isnan(obj.getDouble()) || isinf(obj.getDouble())
            || obj.getDouble() > 127 || obj.getDouble() < 0)
            cout << "char: impossible" << endl;
        else if ((0 <= obj.getDouble() && obj.getDouble() < 32) || obj.getDouble() == 127)
            cout << "char: Non displayable" << endl;
        else
            cout << "char: '" << obj.getChar() << "'" << endl;

        /*------------------INTEGER----------------------------*/
        if (isnan(obj.getDouble()) || isinf(obj.getDouble()))
            cout << "int: impossible" << endl;
        else
            cout << "int: " << obj.getInt() << endl;

        /*------------------FLOAT----------------------------*/
        cout << "float: " << obj.getFloat();
        if (static_cast<float>(obj.getInt()) == obj.getFloat())
            cout << ".0";
        cout << "f" << endl;

        /*------------------DOUBLE----------------------------*/
        cout << "double: " << obj.getDouble();
        if (static_cast<double>(obj.getInt()) == obj.getDouble())
            cout << ".0";
        cout << endl;
    }
    else
        cout << "Object has a problem." << endl;
    return (outputStream);
}