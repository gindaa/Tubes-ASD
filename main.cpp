#include <iostream>
#include "ASD.h"
#include <cstdlib>
using namespace std;
int pilmenu;
account akun;
infotype profile;
infotype tamp;
int pilih;
int plh;
int pilihc;
char done;
char bebas;
elmaccount *cari;
elmaccount *cari2;
elmaccount *temp;
elmaccount *q;
elmaccount *p;
int main()
{
    menu:
    system("CLS");
    cout<< "===|LOGIN MENU|==="<<endl;
    cout<< "   1.Log in"<<endl;
    cout<< "   2.Sign up"<<endl;
    cout<< "   3.Exit"<<endl<<endl;
    cout<< "|| Pilih menu : ";
    cin>>pilmenu;
    switch (pilmenu){
    case 1:
                    system("cls");
                    cout << "Masukkan Id: "; cin >> profile.id;
                    cout << "Masukkan Password: "; cin >> profile.pass;
                    if (akun.first == NULL)
                    {
                        cout << "Id dan Password Salah" << endl;
                        cout << "Sudah? (y/n)"; cin >> done;
                        if (done == 'y' or done == 'Y')
                        {
                            goto menu;
                        }
                        else
                        {
                            goto menu1;
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
            menu1:
                    system("CLS");
                    cout<< "===|Welcome "<<profile.nama<<" |=="<<endl;
                    cout<< "   1.Lihat Profil"<<endl;
                    cout<< "   2.Edit Profil"<<endl;
                    cout<< "   3.Lihat Koleksi"<<endl;
                    cout<< "   4.Edit Koleksi"<<endl;
                    cout<< "   5.Log out"<<endl;
                    cin>>pilmenu;

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
}}}
