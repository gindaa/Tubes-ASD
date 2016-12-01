#include "ASD.h"

void createaccount(account &a)
{
    a.first = NULL;
}
elmaccount *alokasiaccount(infotype x)
{
    elmaccount *p = new elmaccount;
    p->profil = x;
    p->next = NULL;
    return p;
}

void insertakun(account &a, elmaccount *p)
{
    elmaccount *cari = a.first;
    if (a.first == NULL)
    {
        a.first = p;
        cout << "Akun Berhasil dibuat" << endl;
    }
    else if(cari->next == NULL)
    {
        if ((p->profil.id).compare(cari->profil.id) != 0)
        {
            p->next = a.first;
            a.first = p;
            ;cout << "Akun Berhasil dibuat" << endl;
        }
        else
        {
            ;cout << "Id Sudah Ada" << endl;
        }
    }
    else
    {
        elmaccount *r = a.first;
        while((r->next != NULL) and ((p->profil.id).compare(r->profil.id) != 0))
        {
            r = r->next;
        }
        if ((p->profil.id).compare(r->profil.id) == 0)
        {
            cout << "Id Sudah Ada"<< endl;
        }
        else
        {
            p->next = a.first;
            a.first = p;
            cout << "Akun Berhasil dibuat" << endl;
        }
    }
}

void printinfo(account &a)
{
    if (a.first == NULL)
    {
        cout << "tidak ada akun"<< endl;
    }
    else
    {
        elmaccount *p = a.first;
        while (p != NULL)
        {
            cout << "Id: "<< p->profil.id<<endl;
            cout << "Nama: "<< p->profil.pass<<endl;
            cout << "Nick: "<< p->profil.nama<<endl;
            cout << "Telp: "<< p->profil.umur<<endl;
            cout << endl;
            p = p->next;
        }
        cout << endl;
    }
}
