#include <iostream>

class Integer {
    int value;
public:
    Integer();
    Integer (int value);
    Integer(const Integer& other);
    Integer operator=(const Integer& other);
    Integer operator^(int p);
    Integer operator+(int value);
    operator  int();
    Integer operator+=(int value);
    Integer operator-(int value);
    Integer operator-=(int value);
    Integer operator/(int div);
    Integer operator*(int value);
    Integer operator*=(int value);
    friend bool operator<(const Integer& A, const Integer& B );
    friend bool operator>(const Integer& A, const Integer& B );
    friend bool operator<=(const Integer& A, const Integer& B );
    friend bool operator>=(const Integer& A, const Integer& B );
    friend bool operator!=(const Integer& A, const Integer& B );
    friend bool operator==(const Integer& A, const Integer& B );
    friend std::ostream& operator <<(std::ostream& os, const Integer&);
    friend std::istream& operator >>(std::istream& os, Integer&);
};