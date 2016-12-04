#ifndef ASD_H_INCLUDED
#define ASD_H_INCLUDED

#include <iostream>
#define Nil NULL
#define info(P) (P)->info
#define next(P) (P)->next
#define first(P) ((L).first)
using namespace std;

struct infotypegame
{
    string id;
    string title;
    double rating;
    string developer;
};

struct elmgame
{
    infotypegame profilgame;
    elmgame *next;
};

struct game
{
    elmgame *first;
    elmgame *last;
};
struct infotypekategori
{
    string id;
    string nama;
};

struct elmkategori
{
    infotypekategori infoGame;
    elmkategori *next;
    game g;
};

struct kategori
{
    elmkategori *first;
};

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

void deletegame (game &g, elmgame *p);
void deleteakun(account &a, elmaccount *p);
void deletekategori (kategori &k, elmkategori *p);
void printinfokat(kategori &a);
void printinfogame(game &a);
///
void createaccount(account &a);
elmaccount *alokasiaccount(infotype x);
void insertakun(account &a, elmaccount *p);

void printinfo(account &a);
void creategame (game &g);
elmgame *alokasigame(infotypegame x);
void insertgame (game &g, elmgame *p);
void createkategori (kategori &k);
elmkategori *alokasikategori (infotypekategori x);
void insertkategori (kategori &k, elmkategori *p);

#endif // ASD_H_INCLUDED
