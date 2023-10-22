#include <iostream>
#include "pereche.h"
#include "rational.h"
using namespace std;

int main()
{
    Rational p(-2,3), r(2,6), s(1,5), t(-1,4);
    r.simplificare();
    cout << r << endl;
    r = r + s;
    p = p - r;
    t = t * p;
    s = p / r;
    cout << p << endl << r << endl << s << endl << t << endl;
    return 0;
}
