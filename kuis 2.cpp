#include <iostream>
#include <conio.h>
#include <stdio.h>




using namespace std ;

main()
{
struct pegawai{
char nama[50];
int jam,lembur,gp,gaji;}x;

    cout<<endl;
    cout<<"-------------------------------------------------\n";
    cout<<"Program Struct Menghitung Nilai Akhir Mahasiswa\n";
    cout<<"-------------------------------------------------\n";
    cout<<endl;
    cout<<"\t\t     MIA NURVIA RAYA\n";
    cout<<"\t\tD3 Manajemen Informatika\n";
    cout<<"\t\t       18050623015\n";
    cout<<endl;
    cout<<"-------------------------------------------------\n";
    cout<<endl<<endl;
    cout<<"Masukkan Nama : ";
    gets(x.nama);
    cout<<"Masukkan Jam Kerja : ";cin>>x.jam;

int();

cout<<"\nNama : "<<x.nama;
cout<<endl;
if(x.jam>7)
                {
   x.gp=7*500;
   x.lembur=(x.jam-7)*(15*500);
                x.gaji=x.gp+x.lembur;
   cout<<"Gaji pokok : "<<x.gp;
   }
else
                {
   x.lembur=0;
   x.gaji= x.jam*500;
   }
cout<<"\nJam Kerja : "<<x.jam;
cout<<"\nLembur : "<<x.lembur;
cout<<"\nGaji : "<<x.gaji;

getch();}
