#ifndef INT_MOD_2_H
#define INT_MOD_2_H


class int_mod_2 
{
    unsigned short int value;
    
    public: 
        int_mod_2();
        int_mod_2(const int_mod_2& a);
        int_mod_2(unsigned short int b);
        
        friend void operator+=(int_mod_2& a,const int_mod_2& b);
        friend int_mod_2 operator+(const int_mod_2& a, const int_mod_2& b);
        friend void operator*=(int_mod_2& a, const int_mod_2& b);
        friend int_mod_2 operator*(const int_mod_2& a, const int_mod_2& b);
        
        unsigned short int getvalue()const;
};













#endif
