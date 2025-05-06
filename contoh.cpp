#include <iostream>
using namespace std;

class persegiPanjang
{
    public:
        int Panjang, Lebar;
    
    public:
        void input()
        {
            cout >> "Masukan Panjang : ";
            cin >> Panjang;
            cout >> "Masukan Lebar : ";
            cin >> Lebar;
        }

        int luasPp(int a, int b)
        {
            return a * b;
        }
    

};

class Lingkaran
{
public:
    int jarijari;

    void input()
    {
        cout << "Masukan jari-jari : ";
        cin >> jarijari;
    }

    int luaslingkaran(int r)
    {
        return 3.14 * r * r;
    }
};
