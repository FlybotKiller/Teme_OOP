#include <iostream>
#include "rational.h"
using namespace std;

Rational Rational::operator+(Rational& c)
{
    int l = n.geta() * c.getn().getb() + c.getn().geta() * n.getb();
    int d = n.getb() * c.getn().getb();
    Rational p(l,d);
    p.simplificare();
    return p;
}

Rational Rational::operator-(Rational& c)
{
    int l = n.geta() * c.getn().getb() - c.getn().geta() * n.getb();
    int d = n.getb() * c.getn().getb();
    Rational p(l,d);
    p.simplificare();
    return p;
}

Rational Rational::operator*(Rational& c)
{
    int l = n.geta() * c.getn().geta();
    int d = n.getb() * c.getn().getb();
    Rational p(l,d);
    p.simplificare();
    return p;
}

Rational Rational::operator/(Rational& c)
{
    int l = n.geta() * c.getn().getb();
    int d = n.getb() * c.getn().geta();
    Rational p(l,d);
    p.simplificare();
    return p;
}
