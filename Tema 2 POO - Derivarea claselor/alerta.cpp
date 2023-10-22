#include <iostream>
#include "alerta.h"
using namespace std;

Alerta::Alerta(int n, string tt, string warn, string t) : Mesaj(n, tt, t)
{
    setAlerta(warn);
}

void Alerta::setAlerta(string warn)
{
    atentionare = warn;
}
