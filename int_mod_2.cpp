#include"int_mod_2.h"

int_mod_2::int_mod_2()
{
    value=0;
}
int_mod_2::int_mod_2(const int_mod_2& a)
{
    value=a.value;
}
int_mod_2::int_mod_2(unsigned short int b)
{
    value=b%2;
}
void operator+=(int_mod_2& a,const int_mod_2& b)
{
    a.value=(a.value+b.value)%2;
}
int_mod_2 operator+(const int_mod_2& a, const int_mod_2& b)
{
    int_mod_2 c;
    c+=a;
    c+=b;
    return c;
}
void operator*=(int_mod_2& a, const int_mod_2& b)
{
    a.value*=b.value;
}
int_mod_2 operator*(const int_mod_2& a, const int_mod_2& b)
{
    int_mod_2 c(1);
    c*=a;
    c*=b;
    return c;
}
unsigned short int int_mod_2::getvalue()const
{
    return value;
}



