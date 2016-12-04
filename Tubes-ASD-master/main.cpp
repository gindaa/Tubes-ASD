#include <iostream>
#include "ASD.h"
#include <cstdlib>
#include <string>

using namespace std;

account akun;
kategori kat;
game lgame;
infotype profile;
infotype tamp;
infotypekategori hmm;
infotypegame gameinfo;
string pilkategori;
string inedit;
int ketemukat;
int ketemugame;
int pilmenu;
int pilih;
int plh;
int pilihc;
int pilmenu2;
int ketemu;
char done;
char bebas;
elmgame *gamep;
elmkategori *katp;
elmaccount *cari;
elmaccount *cari2;
elmaccount *temp;
elmaccount *q;
elmaccount *p;
int main()
{
    createaccount(akun);
    createkategori(kat);
    creategame(lgame);
    menu:
    system("CLS");
    cout<< "===|APLIKASI PENGOLAHAN DATA GAME|==="<<endl;
    cout<< "   1.Log in"<<endl;
    cout<< "   2.Sign up"<<endl;
    cout<< "   3.Exit"<<endl<<endl;
    cout<< "|| Pilih menu : "; cin>>pilmenu;
    switch (pilmenu){
    case 1:
                    login:
                    system("cls");
                    cout << "===|LOGIN PAGE|==="<<endl;
                    cout << "Masukkan Id: "; cin >> profile.id;
                    cout << "Masukkan Password: "; cin >> profile.pass;
                    if (akun.first == NULL)
                    {
                        cout << "Id dan Password Salah" << endl;
                        cout << "Apakah ada ingin Login Ulang (y/n)"; cin >> done;
                        if (done == 'y' or done == 'Y')
                        {
                            goto login;
                        }
                        else
                        {
                            goto menu;
                        }
                    }
                    else
                    {
                        temp = akun.first;
                        while((temp->next != NULL) and (profile.id != temp->profil.id) and (profile.pass != temp->profil.pass))
                        {
                            temp = temp->next;
                        }
                        if ((profile.id == temp->profil.id) and (profile.pass == temp->profil.pass))
                            {
                                cout << "Id dan Password Benar" << endl;
                                cout << "Masukkan Satu Huruf Untuk Melanjutkan "; cin >> done;
                                goto menu1;
                            }
                        else{
                        cout << "Id dan Password Salah" << endl;
                        cout << "Apakah ada ingin Login Ulang (y/n)"; cin >> done;
                        if (done == 'y' or done == 'Y')
                        {
                            goto login;
                        }
                        else
                        {
                            goto menu;
                        }
                        }
            menu1:
                    system("CLS");
                    cout<< "===|Welcome "<<profile.nama<<" |==="<<endl;
                    cout<< "   1.Lihat Profil"<<endl;
                    cout<< "   2.Edit Profil"<<endl;
                    cout<< "   3.Input Koleksi"<<endl;
                    cout<< "   4.Edit Koleksi"<<endl;
                    cout<< "   5.View Koleksi"<<endl;
                    cout<< "   6.Search Koleksi"<< endl;
                    cout<< "   7.Delete Koleksi"<<endl;
                    cout<< "   8.Log out"<<endl;
                    cout<< "Masukkan pilihan: ";
                    cin>>pilmenu;
                    switch(pilmenu){
                    case 1:
                           detil:
                           system("CLS");
                           cout<<"===|PROFILE DETAIL|==="<<endl;
                           cout<<"ID        : "<<profile.id<<endl;
                           cout<<"Password  : "<<profile.pass<<endl;
                           cout<<"Nama      : "<<profile.nama<<endl;
                           cout<<"Umur      : "<<profile.umur<<endl;
                           cout<<"No HP     : "<<profile.no_hp<<endl;
                           cout<< "Apakah ada ingin tetap dihalaman ini? (y/n)"; cin >> done;
                            if (done == 'y' or done == 'Y')
                            {
                                goto detil;
                            }
                            else
                            {
                                goto menu1;
                            }

                    case 2:
                           edit1:
                           system("CLS");
                           cout<<"===|PROFILE EDIT PAGE|=== "<<profile.nama<<" |=="<<endl;
                           cout<<"Masukkan id yang ingin diedit: "<<endl; cin>>inedit;
                           cari = akun.first;
                           ketemu = 0;
                           if (cari->next == NULL){
                                if (cari->profil.id == inedit){
                                    ketemu = 1;
                                }
                                else{
                                    ketemu = 0;
                                }
                           }
                           while (cari->next != NULL && ketemu == 0)
                           {
                                if (cari->profil.id == inedit)
                                {
                                    ketemu = 1;
                                }
                                else
                                {
                                    ketemu = 0;
                                    cari = cari->next;
                                }
                           }
                           if (ketemu == 1)
                           {
                               editProfil:
                                system("CLS");
                                pilmenu == 0;
                                cout << "===|EDIT MENU|==" << endl;
                                cout << endl;
                                cout << "Masukkan ID: "; cin >> cari->profil.id;
                                cout << "Masukkan Pass: "; cin >> cari->profil.pass;
                                cout << "Masukkan Nama: "; cin >> cari->profil.nama;
                                cout << "Masukkan Umur: "; cin >> cari->profil.umur;
                                cout << "Masukkan No telp: "; cin >> cari->profil.no_hp;
                                profile.id = cari->profil.id;
                                profile.nama = cari->profil.nama;
                                profile.no_hp = cari->profil.no_hp;
                                profile.pass = cari->profil.pass;
                                profile.umur = cari->profil.umur;
                                cout << "Apakah data diatas sudah benar? (y/n)"; cin >> done;
                                if (done == 'y' or done == 'Y')
                                {
                                    goto menu1;
                                }
                                else
                                {
                                    goto editProfil;
                                }
                           }
                           cout<< "Apakah ada ingin tetap dihalaman ini? (y/n)"; cin >> done;
                            if (done == 'y' or done == 'Y')
                            {
                                goto edit1;
                            }
                            else
                            {
                                goto menu1;
                            }

                    case 3:
                            input:
                            system("CLS");
                            cout<<"===|Input Koleksi|==="<<endl;
                            cout<<"1.Input Kategori"<<endl;
                            cout<<"2.Input Game"<<endl;
                            cout<<"3.Back"<<endl;
                            cout<<"Masukkan pilihan : "; cin>>pilmenu2;
                            switch(pilmenu2)
                            {
                            case 1:
                                inKategori:
                                system ("CLS");
                                cout<<"Masukkan id kategori : "; cin>>hmm.id;
                                cout<<endl;
                                cout<<"Masukkan nama kategori : "; cin>>hmm.nama;
                                cout<<endl;
                                katp = alokasikategori(hmm);
                                insertkategori(kat,katp);
                                cout<< "Apakah ada ingin tetap dihalaman ini? (y/n)"; cin >> done;
                                if (done == 'y' or done == 'Y')
                                {
                                    goto inKategori;
                                }
                                else
                                {
                                    goto input;
                                }
                            case 2:
                                inGame:
                                system("CLS");
                                printinfokat(kat);
                                if (kat.first!=NULL){
                                    cout<<"Masukan pilihan (Id Kategori) (masukkan 99 untuk kembali): "; cin>>pilkategori;
                                    katp = kat.first;
                                    ketemu = 0;
                                    if (pilkategori == "99"){
                                        goto input;
                                    }
                                    if (katp->next == NULL){
                                        if (katp->infoGame.id == pilkategori){
                                            ketemu = 1;
                                        }
                                    }
                                    while (katp != NULL && ketemu == 0)
                                    {
                                        if (pilkategori == katp->infoGame.id)
                                        {
                                            ketemu = 1;
                                        }
                                        else
                                        {
                                            ketemu = 0;
                                            katp = katp->next;
                                        }
                                    }
                                    if (ketemu == 1)
                                    {
                                        inGame2:
                                        system("CLS");
                                        cout << "Masukkan id game: "; cin >> gameinfo.id;
                                        cout << "Masukkan Judul Game: "; cin >> gameinfo.title;
                                        cout << "Masukkan Rating Game (0 - 10): "; cin >> gameinfo.rating;
                                        cout << "Masukkan Developer Game: "; cin >> gameinfo.developer;
                                        gamep = alokasigame(gameinfo);
                                        insertgame(katp->g,gamep);
                                    }
                                    cout<< "Apakah ada ingin tetap dihalaman ini? (y/n)"; cin >> done;
                                    if (done == 'y' or done == 'Y')
                                    {
                                        goto inGame2;
                                    }
                                    else
                                    {
                                        goto inGame;
                                    }
                                }
                                cout<< "Apakah ada ingin tetap dihalaman ini? (y/n)"; cin >> done;
                                if (done == 'y' or done == 'Y')
                                {
                                    goto inGame;
                                }
                                else
                                {
                                    goto input;
                                }
                            case 3:
                                goto menu1;
                            }

                            cout<< "Apakah ada ingin tetap dihalaman ini? (y/n)"; cin >> done;
                            if (done == 'y' or done == 'Y')
                            {
                                goto input;
                            }
                            else
                            {
                                goto menu1;
                            }
                    case 4:
                            edit2:
                            system("CLS");
                            cout<<"===|Edit Koleksi|==="<<endl;
                            cout<< "Apakah ada ingin tetap dihalaman ini? (y/n)"; cin >> done;
                            if (done == 'y' or done == 'Y')
                            {
                                goto edit2;
                            }
                            else
                            {
                                goto menu1;
                            }
                    case 5:
                            view:
                                system("CLS");
                                printinfokat(kat);
                                if (kat.first!=NULL){
                                    cout<<"Masukan pilihan (Id Kategori): "; cin>>pilkategori;
                                    katp = kat.first;
                                    ketemu = 0;
                                    if (katp->next == NULL){
                                        if (katp->infoGame.id == pilkategori){
                                            ketemu = 1;
                                        }
                                    }
                                    while (katp != NULL & ketemu == 0)
                                    {
                                        if (pilkategori == katp->infoGame.id)
                                        {
                                            ketemu = 1;
                                        }
                                        else
                                        {
                                            ketemu = 0;
                                            katp = katp->next;
                                        }
                                    }
                                    if (ketemu == 1)
                                    {
                                        system("CLS");
                                        printinfogame(katp->g);
                                    }
                                }

                            cout<< "Apakah ada ingin tetap dihalaman ini? (y/n)"; cin >> done;
                            if (done == 'y' or done == 'Y')
                            {
                                goto view;
                            }
                            else
                            {
                                goto menu1;
                            }
                    case 6:
                            cari:
                            system("CLS");
                            cout<<"===|Search Koleksi|==="<< endl;
                            cout<<"Masukkan id Kategori yang ingin dicari: "; cin>>hmm.id;
                            katp = kat.first;
                            ketemukat = 0;

                            if (katp == NULL){
                                cout<<"Maaf kategori belum diinputkan"<<endl;
                            }
                            else{
                                while(katp != NULL && ketemukat == 0){
                                    if (katp->infoGame.id == hmm.id){
                                        ketemukat = 1;
                                    }
                                    else{
                                        ketemukat = 0;
                                        katp= katp->next;
                                    }
                                }
                                if (ketemukat == 1){
                                    ketemugame = 0;
                                    gamep = katp->g.first;
                                    if (gamep==NULL){
                                        cout<<"Maaf game belum diinputkan"<<endl;
                                    }else{
                                        cout<<"Masukkan id Game yang dicari: "; cin>>gameinfo.id;
                                        while(gamep != NULL && ketemugame == 0){
                                            if (gameinfo.id == gamep->profilgame.id){
                                                ketemugame = 1;
                                            }
                                            else{
                                                ketemugame = 0;
                                                gamep = gamep->next;
                                            }
                                        }
                                        if (ketemugame == 1){
                                            viewgame:
                                                system("CLS");
                                            //cout<<"kategori : "<<katp->infoGame.nama<<endl;
                                            cout<<"id game: "<<gamep->profilgame.id<<endl;
                                            cout<<"judul game: "<<gamep->profilgame.title<<endl;
                                            cout<<"rating: "<<gamep->profilgame.rating<<endl;
                                            cout<<"developer: "<<gamep->profilgame.developer<<endl;
                                            cout<< "Apakah ada ingin tetap dihalaman ini? (y/n)"; cin >> done;
                                            if (done == 'y' or done == 'Y')
                                            {
                                                goto viewgame;
                                            }
                                            else
                                            {
                                                goto menu1;
                                            }
                                        }
                                        else{
                                            cout<<"maaf tidak ketemu"<<endl;
                                            cout<< "Apakah ada ingin tetap dihalaman ini? (y/n)"; cin >> done;
                                            if (done == 'y' or done == 'Y')
                                            {
                                                goto viewgame;
                                            }
                                            else
                                            {
                                                goto menu1;
                                            }
                                        }
                                    }

                            }
                            else{
                                    cout<<"Maaf tidak ketemu"<<endl;
                                    cout<< "Apakah ada ingin tetap dihalaman ini? (y/n)"; cin >> done;
                                        if (done == 'y' or done == 'Y')
                                        {
                                            goto cari;
                                        }
                                        else
                                        {
                                            goto menu1;
                                        }
                                }
                            }
                    case 7:
                            hapus:
                            system("CLS");
                            cout<<"===|Delete Koleksi|==="<<endl;
                            cout<< "Apakah ada ingin tetap dihalaman ini? (y/n)"; cin >> done;
                            if (done == 'y' or done == 'Y')
                            {
                                goto hapus;
                            }
                            else
                            {
                                goto menu1;
                            }
                    case 8:
                            goto menu;
                            break;
                    }
    case 2:
            menu2:
                    system("CLS");
                    pilmenu == 0;
                    cout << "===|SIGN UP MENU|==" << endl;
                    cout << endl;
                    cout << "Masukkan ID: "; cin >> profile.id;
                    cout << "Masukkan Pass: "; cin >> profile.pass;
                    cout << "Masukkan Nama: "; cin >> profile.nama;
                    cout << "Masukkan Umur: "; cin >> profile.umur;
                    cout << "Masukkan No telp: "; cin >> profile.no_hp;
                    temp = alokasiaccount(profile);
                    insertakun(akun,temp);
                    cout << "Apakah data diatas sudah benar? (y/n)"; cin >> done;
                    if (done == 'y' or done == 'Y')
                    {
                        goto menu;
                    }
                    else
                    {
                        goto menu2;
                    }
    case 3:
            ends:
            system("CLS");
            cout<<endl<<endl<< "Terimakasih~"<<endl;

};
}
}
