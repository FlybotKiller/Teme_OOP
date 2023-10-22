#ifndef RATIONAL_H
#define RATIONAL_H
#include "pereche.h"
#include <cmath>
using namespace std;
class Rational
{
public:
    Rational(int a, int b) : n(Pereche(a,b)) {}
    Pereche getn()
    {
        return n;
    }
    void setn(Pereche n)
    {
        this->n = n;
    }
    Rational operator+(Rational& p);
    Rational operator-(Rational& p);
    Rational operator*(Rational& p);
    Rational operator/(Rational& p);
    friend ostream& operator<<(ostream& o, Rational& p)
    {
        o << p.getn().geta() << "/" << p.getn().getb();
        return o;
    }

    int divi(int a, int b)
    {
        while (b != 0)
        {
            int t = b;
            b = a % b;
            a = t;
        }
        return abs(a);
    }
    Rational simplificare()
    {
        int divizor = divi(n.geta(), n.getb());
        if(divizor != 0)
        {
            n.seta(n.geta() / divizor);
            n.setb(n.getb() / divizor);
        }

        return Rational(n.geta(),n.getb());
    }
private:
    Pereche n;
};
#endif
