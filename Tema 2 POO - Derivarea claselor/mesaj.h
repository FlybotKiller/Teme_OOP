#ifndef MESAJ_H
#define MESAJ_H
using namespace std;
class Mesaj
{
public:
    Mesaj(int = 0, string = "-", string = "-");
    void setMesaj(int, string, string);
    int getid()
    {
        return id;
    }
    string gettimeStamp()
    {
        return timeStamp;
    }
    string gettext()
    {
        return text;
    }
    friend ostream& operator<<(ostream& o, Mesaj m)
    {
        o << m.getid() << ": " << m.gettimeStamp() << " - " << m.gettext();
        return o;
    }
protected:
    int id;
    string timeStamp;
    string text;
};
#endif
