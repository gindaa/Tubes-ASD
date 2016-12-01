#ifndef ASD_H_INCLUDED
#define ASD_H_INCLUDED

#include <iostream>
#define Nil NULL
#define info(P) (P)->info
#define next(P) (P)->next
#define first(P) ((L).first)
using namespace std;

struct infotype
{
    string id;
    string pass;
    string nama;
    int umur;
    string no_hp;
};

struct elmaccount
{
    infotype profil;
    elmaccount *next;
};

struct account
{
    elmaccount *first;
};

void createaccount(account &a);
elmaccount *alokasiaccount(infotype x);
void insertakun(account &a, elmaccount *p);
void deleteakun(account &a, elmaccount *p);
void printinfo(account &a);

#endif // ASD_H_INCLUDED
