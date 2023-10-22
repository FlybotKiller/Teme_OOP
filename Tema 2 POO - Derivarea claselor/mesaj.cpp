#include <iostream>
#include "mesaj.h"
using namespace std;

Mesaj::Mesaj(int i, string time, string txt)
{
    setMesaj(i, time, txt);
}

void Mesaj::setMesaj(int i, string time, string txt)
{
    id = i;
    timeStamp = time;
    text = txt;
}

/*ostream& operator<<(ostream& o, Mesaj m)
{
    o << m.getid() << ": " << m.gettimeStamp() << " - " << m.gettext();
    return o;
} */
