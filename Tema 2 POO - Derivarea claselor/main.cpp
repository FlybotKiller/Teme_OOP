#include <iostream>
#include "alerta.h"
#include "mesaj.h"
using namespace std;

int main()
{
    Mesaj m1(1, "8-05-2023 08:23:56", "Retea wifi disponibila");
    Alerta a2(2, "9-05-2023 17:11:38", "Atentie!", "Spatiu de stocare pe harddisk insuficient");
    Mesaj m3(3, "10-05-2023 09:41:02", "Temperatura procesorului este de 53 de grade Celsius");
    cout << m1 << endl << a2 << endl << m3 << endl;
    return 0;
}
