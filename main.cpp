#include"int_mod_2.h"
#include<iostream>

int main()
{
    int a;
    int b;
    std::cout<<"inserire i valori INTERI che vi pare staccati da uno spazio",std::cin>>a>>b;
    int_mod_2 A(a);
    int_mod_2 B(b);
    std::cout<<"i suoi valori sono magicamente diventati "<<A.getvalue()<<"   "<<B.getvalue()<<"\n"<<"A+B="<<(A+B).getvalue()<<"\n"<<"A*B="<<(A*B).getvalue();
return 0;
}
