#ifndef ALERTA_H
#define ALERTA_H
#include "mesaj.h"
using namespace std;
class Alerta : public Mesaj
{
public:
    Alerta (int = 0, string = "-", string = "-", string = "-");
    void setAlerta(string);
    string getAlerta()
    {
        return atentionare;
    }
    friend ostream& operator<<(ostream& o, Alerta a)
    {
        o << a.getid() << ": " << a.getAlerta() << " " << a.gettimeStamp() << " - " << a.gettext() ;
        return o;
    }

private:
    string atentionare;
};
#endif
