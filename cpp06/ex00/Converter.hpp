#ifndef CONVERTER_HPP
# define CONVERTER_HPP

# include <iostream>
# include <cmath>
using std::cout;
using std::endl;
using std::string;

class Converter
{
private:
    char    _valueChar;
    int     _valueInt;
    float   _valueFloat;
    double  _valueDouble;
public:
    bool    _error;
    Converter();
    Converter(const char* str);
    Converter(const Converter& src);
    Converter& operator=(const Converter& src);
    ~Converter();

    char    getChar() const;
    int     getInt() const;
    float   getFloat() const;
    double  getDouble() const;
};

std::ostream& operator<<(std::ostream& outputStream, const Converter &src);

#endif