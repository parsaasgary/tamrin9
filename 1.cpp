#include <conio.h>
#include <iostream>

using namespace std;

class Kasr
{
public:
    int surat, makhraj;
    Kasr(int s, int m)
    {
        ;
        cout << "\nenter surat:";
        cin >> s;
        surat = s;
        cout << "enter makhraj:";
        cin >> m;
        makhraj = m;

    }
    void show(string name);
    void sum(Kasr kasr_digar);
    void zarb(Kasr kasr_digar);
    void taghsim(Kasr kasr_digar);
    void tafrigh(Kasr kasr_digar);

};
void Kasr::show(string name)
{
    if (makhraj == 1)
        cout << name << ":" << surat << "\n";
    else if (makhraj != 0)
        cout << name << ":" << surat << "/" << makhraj << "\n";
    else
        cout << "error/0";



}
void Kasr::sum(Kasr kasr_digar)
{
    int s = surat, m = makhraj, ks = kasr_digar.surat, km = kasr_digar.makhraj;
    if (makhraj == kasr_digar.makhraj)
    {
        surat = surat + kasr_digar.surat;
        cout << surat << "/" << makhraj;
    }
    else if (makhraj != kasr_digar.makhraj)
    {
        kasr_digar.surat = kasr_digar.surat * makhraj;
        makhraj = makhraj * kasr_digar.makhraj;
        surat = surat * kasr_digar.makhraj;
        kasr_digar.makhraj = makhraj * kasr_digar.makhraj;
        surat = surat + kasr_digar.surat;
        cout << surat << "/" << makhraj;
    }
    surat = s;
    makhraj = m;
    kasr_digar.surat = ks;
    kasr_digar.makhraj = km;

}
void Kasr::zarb(Kasr kasr_digar)
{
    int s = surat, m = makhraj, ks = kasr_digar.surat, km = kasr_digar.makhraj;
    makhraj *= kasr_digar.makhraj;
    surat *= kasr_digar.surat;
    cout << surat << "/" << makhraj;
    surat = s;
    makhraj = m;
    kasr_digar.surat = ks;
    kasr_digar.makhraj = km;
}
void Kasr::tafrigh(Kasr kasr_digar)
{
    int s = surat, m = makhraj, ks = kasr_digar.surat, km = kasr_digar.makhraj;
    if (makhraj == kasr_digar.makhraj)
    {
        surat = surat - kasr_digar.surat;
        cout << surat << "/" << makhraj;
    }
    else if (makhraj != kasr_digar.makhraj)
    {
        kasr_digar.surat = kasr_digar.surat * makhraj;
        makhraj = makhraj * kasr_digar.makhraj;
        surat = surat * kasr_digar.makhraj;
        kasr_digar.makhraj = makhraj * kasr_digar.makhraj;
        surat = surat - kasr_digar.surat;
        cout << surat << "/" << makhraj;
    }
    surat = s;
    makhraj = m;
    kasr_digar.surat = ks;
    kasr_digar.makhraj = km;
}
void Kasr::taghsim(Kasr kasr_digar)
{
    int s = surat, m = makhraj, ks = kasr_digar.surat, km = kasr_digar.makhraj;
    surat *= kasr_digar.makhraj;
    makhraj *= kasr_digar.surat;
    cout << surat << "/" << makhraj;
    surat = s;
    makhraj = m;
    kasr_digar.surat = ks;
    kasr_digar.makhraj = km;
}
int main()
{
    cout << "kasr 1:\n";
    Kasr kasr1(0,1);
    cout << "kasr 2:\n";
    Kasr kasr2(0,2);
    string name1 = "kasr1";
    kasr1.show(name1);
    string name2 = "kasr2";
    kasr2.show(name2);

   kasr1.sum(kasr2);
   cout << "\t";
   kasr1.zarb(kasr2);
   cout << "\t";
   kasr1.tafrigh(kasr2);
   cout << "\t";
   kasr1.taghsim(kasr2);
   cout << "\t";

}