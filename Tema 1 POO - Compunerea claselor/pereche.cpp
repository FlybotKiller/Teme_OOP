#include <iostream>
#include "pereche.h"
using namespace std;

ostream& operator<<(ostream& os, Pereche& c)
{
    os << "[" << c.getA() << ";" << c.getB() << "]" ;
    return os;
}
