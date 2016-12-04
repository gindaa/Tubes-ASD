#include "ASD.h"
#include <cstdlib>

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

void creategame (game &g)
{
    g.first = NULL;
}

elmgame *alokasigame(infotypegame x)
{
    elmgame *p = new elmgame;
    p->profilgame = x;
    p->next = NULL;
    return p;
}

void insertgame (game &g, elmgame *p)
{
    elmgame *cari = g.first;
    if (g.first == NULL)
    {
        g.first = p;
        cout << "Game Berhasil dibuat" << endl;
    }
    else if(cari->next == NULL)
    {
        if ((p->profilgame.id).compare(cari->profilgame.id) != 0)
        {
            p->next = g.first;
            g.first = p;
            ;cout << "Game Berhasil dibuat" << endl;
        }
        else
        {
            ;cout << "Id Sudah Ada" << endl;
        }
    }
    else
    {
        elmgame *r = g.first;
        while((r->next != NULL) and ((p->profilgame.id).compare(r->profilgame.id) != 0))
        {
            r = r->next;
        }
        if ((p->profilgame.id).compare(r->profilgame.id) == 0)
        {
            cout << "Id Sudah Ada"<< endl;
        }
        else
        {
            p->next = g.first;
            g.first = p;
            cout << "Game Berhasil dibuat" << endl;
        }
    }
}

void createkategori (kategori &k)
{
    k.first = NULL;
}

elmkategori *alokasikategori (infotypekategori x)
{
    elmkategori *p = new elmkategori;
    p->infoGame = x;
    p->next = NULL;
    creategame(p->g);
    return p;
}

void insertkategori (kategori &k, elmkategori *p)
{
    elmkategori *cari = k.first;
    if (k.first == NULL)
    {
        k.first = p;
        cout << "Kategori Berhasil ditambahkan (1)" << endl;
    }
    else if(cari->next == NULL)
    {
        if ((p->infoGame.id).compare(cari->infoGame.id) != 0)
        {
            p->next = k.first;
            k.first = p;
            ;cout << "Kategori Berhasil ditambahkan (2)" << endl;
        }
        else
        {
            ;cout << "Id Sudah Ada" << endl;
        }
    }
    else
    {
        elmkategori *r = k.first;
        while((r->next != NULL) and ((p->infoGame.id).compare(r->infoGame.id) != 0))
        {
            r = r->next;
        }
        if ((p->infoGame.id).compare(r->infoGame.id) == 0)
        {
            cout << "Id Sudah Ada"<< endl;
        }
        else
        {
            p->next = k.first;
            k.first = p;
            cout << "Kategori Berhasil ditambahkan (3)" << endl;
        }
    }
}

void printinfokat(kategori &a)
{
    if (a.first == NULL)
    {
        cout << "Kategori belum tersedia" << endl;
    }
    else
    {
        elmkategori *p = a.first;
        int num = 1;
        while(p != NULL)
        {
            cout<<num<<". "<<endl;
            cout<<"Id Kategori: "<< p->infoGame.id<<endl;
            cout<<"Nama Kategori: "<< p->infoGame.nama<<endl;
            cout << endl;
            p = p->next;
            num++;
        }
        cout<<endl;
    }
}
void printinfogame(game &a)
{
    if (a.first == NULL)
    {
        cout << "Game belum ditamahkan" << endl;
    }
    else
    {
        elmgame *p = a.first;
        int num = 1;
        while(p != NULL)
        {
            cout<<num<<". "<<endl;
            cout<<"Id Game: "<<p->profilgame.id<<endl;
            cout<<"Judul Game: "<<p->profilgame.title<<endl;
            cout<<"Rating: "<<p->profilgame.rating<<endl;
            cout<<"Developer: "<<p->profilgame.developer<<endl;
            cout << endl;
            p = p->next;
            num++;
        }
        cout<<endl;
    }
}
void deleteakun(account &a, elmaccount *p)
{

}
