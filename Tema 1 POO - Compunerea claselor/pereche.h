#ifndef PERECHE_H
#define PERECHE_H
using namespace std;
class Pereche
{
public:
    Pereche(int a = 0, int b = 1)
    {
        seta(a);
        setb(b);
    }
    void seta(int a)
    {
        this->a = a;
    }
    void setb(int b)
    {
        this->b = b;
    }
    int geta()
    {
        return a;
    }
    int getb()
    {
        return b;
    }
    friend ostream& operator<<(ostream& o, Pereche& p)
    {
        o << "[" << p.geta() << "," << p.getb() << "]";
        return o;
    }
private:
    int a;
    int b;
};
#endif
