#include<iostream>
#include<conio.h>

using namespace std;

int main ()
{
    struct data
    {
        char nama[20];
        int nim;
        int tugas;
        int kuis;
        int mid;
        int uas;
        float nilai_akhir;
    };struct data mahasiswa[20];

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

int x,y;
cout<<"Masukan Data Mahasiswa : ";
cin>>y;
for(x=0;x<y;x++)
{
    cout<<"Masukan Nama Mahasiswa : ";
    cin>>mahasiswa[x].nama;
    cout<<"Masukan NIM Mahasiswa  : ";
    cin>>mahasiswa[x].nim;
    cout<<"Masukan Nilai Tugas    : ";
    cin>>mahasiswa[x].tugas;
    cout<<"Masukan Nilai Kuis     : ";
    cin>>mahasiswa[x].kuis;
    cout<<"Masukan Nilai UTS      : ";
    cin>>mahasiswa[x].mid;
    cout<<"Masukan Nilai UAS      : ";
    cin>>mahasiswa[x].uas;
    cout<<endl;
}
cout<<endl;
cout<<"------------------------------------------------------------\n";
cout<<"Nama"<<"\t"<<"NIM"<<"\t"<<"Tugas"<<"\t"<<"Kuis"<<"\t"<<"UTS"<<"\t"<<"UAS"<<"\t"<<"Nilai Akhir"<<"\t"<<endl;
cout<<"------------------------------------------------------------\n";
for(x=0;x<y;x++)
{
    mahasiswa[x].nilai_akhir=(mahasiswa[x].tugas*10/100)+(mahasiswa[x].kuis*20/100)+(mahasiswa[x].mid*30/100)+(mahasiswa[x].uas*40/100);
cout<<mahasiswa[x].nama<<"\t"<<mahasiswa[x].nim<<"\t"<<mahasiswa[x].tugas<<"\t"<<mahasiswa[x].kuis<<"\t"<<mahasiswa[x].mid<<"\t"<<mahasiswa[x].uas<<"\t"<<mahasiswa[x].nilai_akhir;
 mahasiswa[x].nilai_akhir=(mahasiswa[x].tugas*10/100)+(mahasiswa[x].kuis*20/100)+(mahasiswa[x].mid*30/100)+(mahasiswa[x].uas*40/100);
if (mahasiswa[x].nilai_akhir>=85)
    cout<<" (A)";
else if (mahasiswa[x].nilai_akhir>=70)
    cout<<" (B)";
else if (mahasiswa[x].nilai_akhir>=55)
    cout<<" (C)";
else if (mahasiswa[x].nilai_akhir>=40)
    cout<<" (D)";
else if (mahasiswa[x].nilai_akhir<=40)
    cout<<" (E)";
cout<<endl;
}
cout<<endl;
}
