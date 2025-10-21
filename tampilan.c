////////////////////////////////////////////////////////////////////////////////
//                                                                            //
//                          FIRST PROJECK BAHASA C                            //
//                             ~ E - BANKING ~                                //
//                   ....................................                     //
//                                                                            //
//                         BY AJENG AZZAHRA MAHARANI                          //
//                              S1 AKUNTANSI                                  //
//                            PUB A'22 INCLUDE                                //
//                                                                            //
//				           DIMULAI : 2 JANUARI 2024                           //
//					       SELESAI : 11 JANUARI 2024                          //
//                                                                            //
//                            SCREEN BUFFER SIZE                              //
//                        WIDHT : 146     HEIGHT : 35                         //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include "color.c"

//================================== PROTOTYPE ========================================
void logo_zara(int x, int y);
void logo_registrasi(int x, int y);
void logo_login(int x, int y);
void logo_zb(int x, int y);
void welcome();

void bingkai(int x, int y, int panjang, int lebar, int text, int background);
void bingkai_pilih_utama(int text, int background);
void pindah_utama();
void halaman_utama();
void bingkai_pilih_beranda(int text, int background);
void bingkai_geser_beranda(int awal, int text, int background);
void pindah_beranda();
void bingkai_pilih_menu(int text, int background);
void bingkai_geser_menu(int awal, int text, int background);
void pindah_menu();
void bingkai_pilih_sett_akun(int text, int background);
void bingkai_geser_sett_akun(int awal, int text, int background);
void pindah_sett_akun();
void bingkai_pilih_ewallet(int text, int background);
void bingkai_geser_ewallet(int awal, int text, int background);
void pindah_ewallet();
void bingkai_pilih_transfer(int text, int background);
void bingkai_geser_transfer(int awal, int text, int background);
void pindah_transfer();

void login();
void masuk();
void pas_masuk();
void registrasi();
void about();

void beranda();
void menu();
void set_akun();

void transfer(); 
void saldo_transfer();
void tf_50();
void tf_100();
void tf_300();
void tf_nom_lain();
void isi_saldo();    
void cek_saldo();    
void topUp_ewallet(); 
void nom_dana();
void nom_shopee();
void bukti();

void edit_akun();
void inp_norek_baru();
void inp_pin_baru();
void hapus_akun();

void dana();
void shopeepay();

void valus();
void valpass();
void val_nama(int z, int k);
void cek_nama(int z, int k);
void rek_tf();
void telp_dana();
void telp_shopee();
void val_tlp();
void val_gender();
void val_umur();
void cek_umur();
void val_kota();
void cek_kota();
void inp_uang(int z, int k);
void val_uang(int z, int k);

//================================== DEKLARASI GLOBAL ========================================
int saldo_tf[3] = {50000, 100000, 300000};
char nami[100];
char pin[100];
char norek[100];
int uang;
int z;
int k;
int tampval = 0;
char user_inp[100];
char tamp_nama[100];
char tamp_tlp[100];
char input_gender;
char tamp_umur[10];
char tamp_usia[100];
char tamp_kota[100];
char tamp_valus[10];
char tamp_pass[100];
char nom_uang[100];

char up_inp[100];
int saldo;
int kirim;
int invoice;
char pilih;
int dexx = -1;

//================================= VALIDASI ======================================

void val_nama(int z, int k)
{
    if (tampval == 1)
    {
        int idx_nama = 0;
        char input_nama;
        while (input_nama != 13)
        {
            gotoxy(z + idx_nama, k);
            input_nama = getch();
            if (idx_nama > 0 && input_nama == 8)
            {
                printf("\b ");
                idx_nama--;
            }
            if (idx_nama < 22 && (input_nama >= 'a' && input_nama <= 'z' || input_nama >= 'A' && input_nama <= 'Z' || input_nama == 32))
            {
                tamp_nama[idx_nama] = input_nama;
                printf("%c", tamp_nama[idx_nama]);
                idx_nama++;
            }
            if (idx_nama == 0 && input_nama == 13)
            {
                gotoxy(z, k);
                printf("INVALID");
                Sleep(500);
                gotoxy(z, k);
                printf("       ");
                Sleep(250);
                val_nama(z, k);
            }
        }
        tamp_nama[idx_nama] = 0;
    }
    if (tampval == 2)
    {
        int idx_nama = 0;
        char input_nama;
        while (input_nama != 13)
        {
            gotoxy(z + idx_nama, k);
            input_nama = getch();
            if (idx_nama > 0 && input_nama == 8)
            {
                printf("\b ");
                idx_nama--;
            }
            if (idx_nama < 22 && (input_nama >= 'a' && input_nama <= 'z' || input_nama >= 'A' && input_nama <= 'Z' || input_nama == 32))
            {
                tamp_nama[idx_nama] = input_nama;
                printf("%c", tamp_nama[idx_nama]);
                idx_nama++;
            }
            if (idx_nama == 0 && input_nama == 13)
            {
                gotoxy(z, k);
                printf("INVALID");
                Sleep(500);
                gotoxy(z, k);
                printf("       ");
                Sleep(250);
                val_nama(z, k);
            }
        }
        tamp_nama[idx_nama] = 0;
    }
    if (tampval == 5 || tampval == 6)
    {
        int idx_nama = 0;
        char input_nama;
        while (input_nama != 13)
        {
            gotoxy(z + idx_nama, k);
            input_nama = getch();
            if (idx_nama > 0 && input_nama == 8)
            {
                printf("\b ");
                idx_nama--;
            }
            if (idx_nama < 22 && (input_nama >= 'a' && input_nama <= 'z' || input_nama >= 'A' && input_nama <= 'Z' || input_nama == 32))
            {
                tamp_nama[idx_nama] = input_nama;
                printf("%c", tamp_nama[idx_nama]);
                idx_nama++;
            }
            if (idx_nama == 0 && input_nama == 13)
            {
                gotoxy(z, k);
                printf("INVALID");
                Sleep(500);
                gotoxy(z, k);
                printf("       ");
                Sleep(250);
                val_nama(z, k);
            }
        }
        tamp_nama[idx_nama] = 0;
    }
    cek_nama(z, k);
}

void cek_nama(int z, int k)
{
    int khilaf;
    for (int a = 0; a < strlen(tamp_nama); a++)
    {
        if (strlen(tamp_nama) < 3)
        {
            for (int a = 1; a <= 6; a++)
            {
                if (a % 2 == 1)
                {
                    gotoxy(z, k);
                    printf("Nama minimal 3 karakter");
                    Sleep(500);
                }
                else
                {
                    gotoxy(z, k);
                    printf("                       ");
                    Sleep(250);
                }
            }
            khilaf++;
            break;
        }
        if (tamp_nama[0] == 32 || tamp_nama[strlen(tamp_nama) - 1] == ' ')
        {
            for (int a = 1; a <= 6; a++)
            {
                if (a % 2 == 1)
                {
                    gotoxy(z, k);
                    printf("Input awal dan akhir tidak boleh spasi");
                    Sleep(500);
                }
                else
                {
                    gotoxy(z, k);
                    printf("                                      ");
                    Sleep(250);
                }
            }
            khilaf++;
            break;
        }
        if (tamp_nama[0] >= 'a' && tamp_nama[0] <= 'z')
        {
            for (int a = 1; a <= 6; a++)
            {
                if (a % 2 == 1)
                {
                    gotoxy(z, k);
                    printf("Input awal harus kapital");
                    Sleep(500);
                }
                else
                {
                    gotoxy(z, k);
                    printf("                        ");
                    Sleep(250);
                }
            }
            khilaf++;
            break;
        }
        if (tamp_nama[strlen(tamp_nama) - 1] >= 'A' && tamp_nama[strlen(tamp_nama) - 1] <= 'Z')
        {
            for (int a = 1; a <= 6; a++)
            {
                if (a % 2 == 1)
                {
                    gotoxy(z, k);
                    printf("Input Akhir tidak Boleh Kapital");
                    Sleep(500);
                }
                else
                {
                    gotoxy(z, k);
                    printf("                               ");
                    Sleep(250);
                }
            }
            khilaf++;
            break;
        }
        if (tamp_nama[a] == ' ' && tamp_nama[a + 1] >= 'a' && tamp_nama[a + 1] <= 'z')
        {
            for (int a = 1; a <= 6; a++)
            {
                if (a % 2 == 1)
                {
                    gotoxy(z, k);
                    printf("Setelah Spasi Harus Kapital");
                    Sleep(250);
                }
                else
                {
                    gotoxy(z, k);
                    printf("                           ");
                    Sleep(250);
                }
            }
            khilaf++;
            break;
        }
        if (tamp_nama[a] >= 'A' && tamp_nama[a] <= 'Z' && tamp_nama[a + 1] >= 'A' && tamp_nama[a + 1] <= 'Z')
        {
            for (int a = 1; a <= 6; a++)
            {
                if (a % 2 == 1)
                {
                    gotoxy(z, k);
                    printf("Kapital Tidak Boleh Ganda");
                    Sleep(250);
                }
                else
                {
                    gotoxy(z, k);
                    printf("                         ");
                    Sleep(250);
                }
            }
            khilaf++;
            break;
        }
        if (tamp_nama[a] >= 'a' && tamp_nama[a] <= 'z' && tamp_nama[a + 1] >= 'A' && tamp_nama[a + 1] <= 'Z')
        {
            for (int a = 1; a <= 6; a++)
            {
                if (a % 2 == 1)
                {
                    gotoxy(z, k);
                    printf("Error                                         ");
                    Sleep(250);
                }
                else
                {
                    gotoxy(z, k);
                    printf("                                                ");
                    Sleep(250);
                }
            }
            khilaf++;
            break;
        }
        if (tamp_nama[a] == ' ' && tamp_nama[a + 1] == ' ')
        {
            for (int a = 1; a <= 6; a++)
            {
                if (a % 2 == 1)
                {
                    gotoxy(z, k);
                    printf("Spasi Tidak Boleh Ganda");
                    Sleep(250);
                }
                else
                {
                    gotoxy(z, k);
                    printf("                       ");
                    Sleep(250);
                }
            }
            khilaf++;
            break;
        }

        if (tamp_nama[a] >= 'a' && tamp_nama[a] <= 'z' && tamp_nama[a + 1] == tamp_nama[a] && tamp_nama[a + 2] == tamp_nama[a + 1])
        {
            for (int a = 1; a <= 6; a++)
            {
                if (a % 2 == 1)
                {
                    gotoxy(z, k);
                    printf("Huruf kecil sama tidak boleh lebih dari 3 karakter");
                    Sleep(250);
                }
                else
                {
                    gotoxy(z, k);
                    printf("                                                  ");
                    Sleep(250);
                }
            }
            khilaf++;
            break;
        }
    }
    if (khilaf > 0)
    {
        khilaf = 0;
        val_nama(z, k);
    }
    else
    {
        if (tampval == 1)
        {
            val_tlp();
        }
        if (tampval == 2)
        {
            rek_tf();
        }
        if (tampval == 5)
        {
            telp_dana();
        }
        if (tampval == 6)
        {
            telp_shopee();
        }
    }
}

void rek_tf()
{
    char u_awal;
    int kursor = 0;
    while (u_awal != 13)
    {
        gotoxy(62 + kursor, 17);
        u_awal = getch();
        if (kursor > 0 && u_awal == 8)
        {
            printf("\b \b");
            kursor--;
        }
        if (kursor < 12 && (u_awal >= '0' && u_awal <= '9'))
        {
            user_inp[kursor] = u_awal;
            printf("%c", user_inp[kursor]);
            kursor++;
        }
        if (kursor < 11 && u_awal == 13)
        {
            gotoxy(62, 17);
            printf("HARUS 12 DIGIT ANGKA");
            Sleep(500);
            gotoxy(62, 17);
            printf("                             ");
            rek_tf();
        }
    }
    if (strcmp(user_inp, norek) == 0)
    {
        gotoxy(62, 17);
        printf("Tidak dapat transfer pada rekening pribadi");
        Sleep(700);
        gotoxy(62, 17);
        printf("                                                     ");
        rek_tf();
    }
    user_inp[kursor] = 0;
    saldo_transfer();
}

void telp_dana()
{
    char input_tlp;
    int idx_tlp = 0;

    while (input_tlp != 13)
    {
        gotoxy(39 + idx_tlp, 17);
        input_tlp = getch();
        if (input_tlp >= '0' && input_tlp <= '9' && idx_tlp < 12)
        {
            if ((idx_tlp == 0 && input_tlp == '0') || (idx_tlp == 1 && input_tlp == '8') || (idx_tlp == 2 && input_tlp == '1') || (idx_tlp == 2 && input_tlp == '2') || (idx_tlp == 2 && input_tlp == '8') || (idx_tlp == 2 && input_tlp == '9') || (idx_tlp == 2 && input_tlp == '3') || (idx_tlp == 2 && input_tlp == '5') || (idx_tlp == 2 && input_tlp == '7') || (idx_tlp == 3 && input_tlp == '1') || (idx_tlp == 3 && input_tlp == '2') || (idx_tlp == 3 && input_tlp == '3') || (idx_tlp == 3 && input_tlp == '4') || (idx_tlp == 3 && input_tlp == '5') || (idx_tlp == 3 && input_tlp == '7') || (idx_tlp == 3 && input_tlp == '8') || (idx_tlp == 3 && input_tlp == '9'))
            {
                printf("%c", input_tlp);
                tamp_tlp[idx_tlp] = input_tlp;
                idx_tlp++;
            }
            else if (idx_tlp >= 4)
            {
                printf("%c ", input_tlp);
                tamp_tlp[idx_tlp] = input_tlp;
                idx_tlp++;
            }
        }
        else if (idx_tlp != 0 && input_tlp == 8)
        {
            printf("\b ");
            idx_tlp--;
            tamp_tlp[idx_tlp] = ' ';
        }
        else if (idx_tlp < 12 && input_tlp == 13)
        {
            gotoxy(39, 17);
            printf("INVALID                   ");
            Sleep(700);
            gotoxy(39, 17);
            printf("                            ");
            Sleep(250);
            telp_dana();
        }
    }
    tamp_tlp[idx_tlp] = 0;
    nom_dana();
}

void telp_shopee()
{
    char input_tlp;
    int idx_tlp = 0;

    while (input_tlp != 13)
    {
        gotoxy(39 + idx_tlp, 17);
        input_tlp = getch();
        if (input_tlp >= '0' && input_tlp <= '9' && idx_tlp < 12)
        {
            if ((idx_tlp == 0 && input_tlp == '0') || (idx_tlp == 1 && input_tlp == '8') || (idx_tlp == 2 && input_tlp == '1') || (idx_tlp == 2 && input_tlp == '2') || (idx_tlp == 2 && input_tlp == '8') || (idx_tlp == 2 && input_tlp == '9') || (idx_tlp == 2 && input_tlp == '3') || (idx_tlp == 2 && input_tlp == '5') || (idx_tlp == 2 && input_tlp == '7') || (idx_tlp == 3 && input_tlp == '1') || (idx_tlp == 3 && input_tlp == '2') || (idx_tlp == 3 && input_tlp == '3') || (idx_tlp == 3 && input_tlp == '4') || (idx_tlp == 3 && input_tlp == '5') || (idx_tlp == 3 && input_tlp == '7') || (idx_tlp == 3 && input_tlp == '8') || (idx_tlp == 3 && input_tlp == '9'))
            {
                printf("%c", input_tlp);
                tamp_tlp[idx_tlp] = input_tlp;
                idx_tlp++;
            }
            else if (idx_tlp >= 4)
            {
                printf("%c ", input_tlp);
                tamp_tlp[idx_tlp] = input_tlp;
                idx_tlp++;
            }
        }
        else if (idx_tlp != 0 && input_tlp == 8)
        {
            printf("\b ");
            idx_tlp--;
            tamp_tlp[idx_tlp] = ' ';
        }
        else if (idx_tlp < 12 && input_tlp == 13)
        {
            gotoxy(39, 17);
            printf("INVALID                   ");
            Sleep(700);
            gotoxy(39, 17);
            printf("                            ");
            Sleep(250);
            telp_shopee();
        }
    }
    tamp_tlp[idx_tlp] = 0;
    nom_shopee();
}

void val_tlp()
{
    char input_tlp;
    int idx_tlp = 0;
    while (input_tlp != 13)
    {
        gotoxy(69 + idx_tlp, 14);
        input_tlp = getch();
        if (input_tlp >= '0' && input_tlp <= '9' && idx_tlp < 12)
        {
            if ((idx_tlp == 0 && input_tlp == '0') || (idx_tlp == 1 && input_tlp == '8') || (idx_tlp == 2 && input_tlp == '1') || (idx_tlp == 2 && input_tlp == '2') || (idx_tlp == 2 && input_tlp == '8') || (idx_tlp == 2 && input_tlp == '9') || (idx_tlp == 2 && input_tlp == '3') || (idx_tlp == 2 && input_tlp == '5') || (idx_tlp == 2 && input_tlp == '7') || (idx_tlp == 3 && input_tlp == '1') || (idx_tlp == 3 && input_tlp == '2') || (idx_tlp == 3 && input_tlp == '3') || (idx_tlp == 3 && input_tlp == '4') || (idx_tlp == 3 && input_tlp == '5') || (idx_tlp == 3 && input_tlp == '7') || (idx_tlp == 3 && input_tlp == '8') || (idx_tlp == 3 && input_tlp == '9'))
            {
                printf("%c", input_tlp);
                tamp_tlp[idx_tlp] = input_tlp;
                idx_tlp++;
            }
            else if (idx_tlp >= 4)
            {
                printf("%c ", input_tlp);
                tamp_tlp[idx_tlp] = input_tlp;
                idx_tlp++;
            }
        }
        else if (idx_tlp != 0 && input_tlp == 8)
        {
            printf("\b ");
            idx_tlp--;
            tamp_tlp[idx_tlp] = ' ';
        }
        else if (idx_tlp < 12 && input_tlp == 13)
        {
            gotoxy(69, 14);
            printf("INVALID                   ");
            Sleep(700);
            gotoxy(69, 14);
            printf("                            ");
            Sleep(250);
            val_tlp();
        }
    }
    tamp_tlp[idx_tlp] = 0;
    val_gender();
}

void val_gender()
{
    int salah;

    do
    {
        int idx_gender = 0;
        gotoxy(69 + idx_gender, 16);
        input_gender = getche();
        if (input_gender == 'P')
        {
            val_umur();
        }
        else if (input_gender == 'L')
        {
            val_umur();
        }
        else
        {
            gotoxy(69, 16);
            printf("INVALID");
            Sleep(500);
            gotoxy(69, 16);
            printf("        ");
            Sleep(250);
            salah = 1;
        }
    } while (salah == 1);
}

void val_umur()
{
    int idx_umur = 0;
    char input_umur;
    while (input_umur != 13)
    {
        gotoxy(69 + idx_umur, 18);
        input_umur = getch();
        if (idx_umur < 2 && input_umur >= '0' && input_umur <= '9')
        {
            tamp_umur[idx_umur] = input_umur;
            printf("%c", tamp_umur[idx_umur]);
            idx_umur++;
        }
        else if (input_umur == 8 && idx_umur != 0)
        {
            printf("\b ");
            idx_umur--;
        }
        else if (idx_umur == 0 && input_umur == 13)
        {
            for (int a = 1; a <= 4; a++)
            {
                if (a % 2 == 1)
                {
                    gotoxy(69, 18);
                    printf("INVALID ");
                    Sleep(500);
                }
                else
                {
                    gotoxy(69, 18);
                    printf("   TAHUN");
                    Sleep(250);
                }
            }
            val_umur();
        }
    }
    tamp_umur[idx_umur] = 0;
    cek_umur();
}

void cek_umur()
{
    int usia, cek_umur;
    for (int a = 0; a < strlen(tamp_umur); a++)
    {
        if (tamp_umur[0] == '0')
        {
            for (int a = 1; a <= 4; a++)
            {
                if (a % 2 == 1)
                {
                    gotoxy(69, 18);
                    printf("INVALID  ");
                    Sleep(500);
                }
                else
                {
                    gotoxy(69, 18);
                    printf("   TAHUN");
                    Sleep(250);
                }
            }
            val_umur();
        }
        else if (tamp_umur[0] == '7' || tamp_umur[0] == '8' || tamp_umur[0] == '9')
        {
            for (int a = 1; a <= 4; a++)
            {
                if (a % 2 == 1)
                {
                    gotoxy(69, 18);
                    printf("Anda terlalu tua  ");
                    Sleep(500);
                }
                else
                {
                    gotoxy(69, 18);
                    printf("   TAHUN             ");
                    Sleep(250);
                }
            }
            val_umur();
        }
        usia = atoi(tamp_umur);
        if (usia >= 1 && usia <= 16)
        {

            for (int b = 1; b <= 4; b++)
            {
                if (b % 2 == 1)
                {
                    gotoxy(69, 18);
                    printf("MINIMAL 17 TAHUN");
                    Sleep(250);
                }
                else
                {
                    gotoxy(69, 18);
                    printf("   TAHUN        ");
                    Sleep(250);
                }
            }
            val_umur();
        }
        else
        {
            cek_umur++;
            itoa(usia, tamp_usia, 10);
        }
    }
    if (cek_umur > 0)
    {
        val_kota();
    }
}

void val_kota()
{
    int idx_kota = 0;
    char input_kota;
    while (input_kota != 13)
    {
        gotoxy(69 + idx_kota, 20);
        input_kota = getch();
        if (idx_kota != 0 && input_kota == 8)
        {
            printf("\b ");
            idx_kota--;
        }
        else if (idx_kota < 22 && (input_kota >= 'a' && input_kota <= 'z' || input_kota >= 'A' && input_kota <= 'Z' || input_kota == 32))
        {
            tamp_kota[idx_kota] = input_kota;
            printf("%c", tamp_kota[idx_kota]);
            idx_kota++;
        }
        else if (idx_kota == 0 && input_kota == 13)
        {
            for (int a = 1; a <= 6; a++)
            {
                if (a % 2 == 1)
                {
                    gotoxy(69, 20);
                    printf("INVALID                               ");
                    Sleep(500);
                }
                else
                {
                    gotoxy(69, 20);
                    printf("                                       ");
                    Sleep(250);
                }
            }
            val_kota();
        }
    }
    tamp_kota[idx_kota] = 0;
    cek_kota();
}

void cek_kota()
{
    char kota[50];
    int khilaf;
    for (int a = 0; a < strlen(tamp_kota); a++)
    {
        if (strlen(tamp_kota) < 3)
        {
            for (int a = 1; a <= 6; a++)
            {
                if (a % 2 == 1)
                {
                    gotoxy(69, 20);
                    printf("Nama kota minimal 3 karakter");
                    Sleep(500);
                }
                else
                {
                    gotoxy(69, 20);
                    printf("                            ");
                    Sleep(250);
                }
            }
            khilaf++;
            break;
        }
        if (tamp_kota[0] == 32 || tamp_kota[strlen(tamp_kota) - 1] == ' ')
        {
            for (int a = 1; a <= 6; a++)
            {
                if (a % 2 == 1)
                {
                    gotoxy(69, 20);
                    printf("Input awal dan akhir tidak boleh spasi");
                    Sleep(500);
                }
                else
                {
                    gotoxy(69, 20);
                    printf("                                      ");
                    Sleep(250);
                }
            }
            khilaf++;
            break;
        }
        if (tamp_kota[0] >= 'a' && tamp_kota[0] <= 'z')
        {
            for (int a = 1; a <= 6; a++)
            {
                if (a % 2 == 1)
                {
                    gotoxy(69, 20);
                    printf("Input awal harus kapital");
                    Sleep(500);
                }
                else
                {
                    gotoxy(69, 20);
                    printf("                        ");
                    Sleep(250);
                }
            }
            khilaf++;
            break;
        }
        if (tamp_kota[strlen(tamp_kota) - 1] >= 'A' && tamp_kota[strlen(tamp_kota) - 1] <= 'Z')
        {
            for (int a = 1; a <= 6; a++)
            {
                if (a % 2 == 1)
                {
                    gotoxy(69, 20);
                    printf("Input Akhir tidak Boleh Kapital");
                    Sleep(500);
                }
                else
                {
                    gotoxy(69, 20);
                    printf("                               ");
                    Sleep(250);
                }
            }
            khilaf++;
            break;
        }
        if (tamp_kota[a] == ' ' && tamp_kota[a + 1] >= 'a' && tamp_kota[a + 1] <= 'z')
        {
            for (int a = 1; a <= 6; a++)
            {
                if (a % 2 == 1)
                {
                    gotoxy(69, 20);
                    printf("Setelah Spasi Harus Kapital");
                    Sleep(500);
                }
                else
                {
                    gotoxy(69, 20);
                    printf("                           ");
                    Sleep(250);
                }
            }
            khilaf++;
            break;
        }
        if (tamp_kota[a] >= 'A' && tamp_kota[a] <= 'Z' && tamp_kota[a + 1] >= 'A' && tamp_kota[a + 1] <= 'Z')
        {
            for (int a = 1; a <= 6; a++)
            {
                if (a % 2 == 1)
                {
                    gotoxy(69, 20);
                    printf("Kapital Tidak Boleh Ganda");
                    Sleep(500);
                }
                else
                {
                    gotoxy(69, 20);
                    printf("                         ");
                    Sleep(250);
                }
            }
            khilaf++;
            break;
        }
        if (tamp_kota[a] >= 'a' && tamp_kota[a] <= 'z' && tamp_kota[a + 1] >= 'A' && tamp_kota[a + 1] <= 'Z')
        {
            for (int a = 1; a <= 6; a++)
            {
                if (a % 2 == 1)
                {
                    gotoxy(69, 20);
                    printf("INVALID                                              ");
                    Sleep(500);
                }
                else
                {
                    gotoxy(69, 20);
                    printf("                      ");
                    Sleep(250);
                }
            }
            khilaf++;
            break;
        }
        if (tamp_kota[a] == ' ' && tamp_kota[a + 1] == ' ')
        {
            for (int a = 1; a <= 6; a++)
            {
                if (a % 2 == 1)
                {
                    gotoxy(69, 20);
                    printf("Spasi Tidak Boleh Ganda");
                    Sleep(500);
                }
                else
                {
                    gotoxy(69, 20);
                    printf("                       ");
                    Sleep(250);
                }
            }
            khilaf++;
            break;
        }

        if (tamp_kota[a] >= 'a' && tamp_kota[a] <= 'z' && tamp_kota[a + 1] == tamp_kota[a] && tamp_kota[a + 2] == tamp_kota[a + 1])
        {
            for (int a = 1; a <= 6; a++)
            {
                if (a % 2 == 1)
                {
                    gotoxy(69, 20);
                    printf("Huruf kecil sama tidak boleh lebih dari 3 karakter");
                    Sleep(500);
                }
                else
                {
                    gotoxy(69, 20);
                    printf("                                                  ");
                    Sleep(250);
                }
            }
            khilaf++;
            break;
        }
    }
    if (khilaf > 0)
    {
        khilaf = 0;
        val_kota();
    }
    else
    {
        valus();
    }
}

void valus()
{
    int idx_user = 0;
    char input_user;

    while (input_user != 13)
    {
        gotoxy(69 + idx_user, 22);
        input_user = getch();
        if (idx_user > 0 && input_user == 8)
        {
            printf("\b \b");
            idx_user--;
        }
        if (idx_user < 12 && (input_user >= '0' && input_user <= '9'))
        {
            tamp_valus[idx_user] = input_user;
            printf("%c", tamp_valus[idx_user]);
            idx_user++;
        }
        if (idx_user < 12 && input_user == 13)
        {
            gotoxy(69, 22);
            printf("HARUS 12 DIGIT ANGKA");
            Sleep(500);
            gotoxy(69, 22);
            printf("                            ");
            Sleep(250);
            valus();
        }
    }
    tamp_valus[idx_user] = 0;
    //============================== VALIDASI TXT AKUN ========================================
    char nem[100][100], us[100][100], pas[100][100];
    int sld[100];
    int id = 0, dex = -1;
    FILE *jeng = fopen("akun.txt", "r");
    while (fscanf(jeng, "%[^#]#%[^#]#%[^#]#%d\n", &nem[id], &us[id], &pas[id], &sld[id]) != EOF)
    {
        if (strcmp(us[id], tamp_valus) == 0)
        {
            dex = id;
        }
        id++;
    }
    fclose(jeng);
    if (dex != -1)
    {
        gotoxy(69, 22);
        printf("NO REKENING SUDAH TERDAFTAR");
        Sleep(700);
        gotoxy(69, 22);
        printf("                             ");
        Sleep(250);
        valus();
    }
    else
    {
        valpass();
    }
}

void valpass()
{
    int idx_pass = 0;
    char input_pass;

    while (input_pass != 13)
    {
        gotoxy(69 + idx_pass, 24);
        input_pass = getch();
        if (idx_pass > 0 && input_pass == 8)
        {
            printf("\b \b");
            idx_pass--;
        }
        if (idx_pass < 6 && (input_pass >= '0' && input_pass <= '9'))
        {
            tamp_pass[idx_pass] = input_pass;
            printf("%c", tamp_pass[idx_pass]);
            idx_pass++;
        }
        if (idx_pass < 6 && input_pass == 13)
        {
            gotoxy(69, 24);
            printf("HARUS 6 DIGIT ANGKA");
            Sleep(700);
            gotoxy(69, 24);
            printf("                         ");
            Sleep(250);
            valpass();
        }
    }
    tamp_pass[idx_pass] = 0;

    //============================== VALIDASI TXT AKUN ========================================
    char nem[100][100], us[100][100], pas[100][100];
    int sld[100];
    int id = 0, dex = -1;
    FILE *view = fopen("akun.txt", "r");
    while (fscanf(view, "%[^#]#%[^#]#%[^#]#%d\n", &nem[id], &us[id], &pas[id], &sld[id]) != EOF)
    {
        if (strcmp(pas[id], tamp_pass) == 0)
        {
            dex = id;
        }
        id++;
    }
    fclose(view);

    if (dex != -1)
    {
        gotoxy(69, 24);
        printf("PIN SUDAH TERDAFTAR");
        Sleep(700);
        gotoxy(69, 24);
        printf("                       ");
        Sleep(250);
        valpass();
    }
    else
    {
        FILE *regist, *jeng, *wallet1, *wallet2;
        regist = fopen("regist.txt", "a");
        fprintf(regist, "%s#%s#%c#%s#%s\n", tamp_nama, tamp_tlp, input_gender, tamp_umur, tamp_kota);
        fclose(regist);

        jeng = fopen("akun.txt", "a");
        saldo += 0;
        fprintf(jeng, "%s#%s#%s#%d\n", tamp_nama, tamp_valus, tamp_pass, saldo);
        fclose(jeng);

        wallet1 = fopen("dana.txt", "a");
        fprintf(wallet1, "%s\n", tamp_tlp);
        fclose(wallet1);

        wallet2 = fopen("shopeepay.txt", "a");
        fprintf(wallet2, "%s\n", tamp_tlp);
        fclose(wallet2);

        set(7, 5);
        gotoxy(60, 29);
        printf("AKUN SUKSES TERDAFTAR");
        // printf("YEAYYY, SELAMAT!! Anda berhasil mendapatkan bonus saldo Rp. 100.000 dari pendaftaran akun baru");

        set(5, 7);
        gotoxy(4, 32);
        printf("Tekan << Esc untuk kembali");
        gotoxy(117, 32);
        printf("Tekan Enter >> untuk Login");
        char kembali;
        while (pilih != 27)
        {
            pilih = getch();
            if (pilih == 27)
            {
                halaman_utama();
            }
            else if (pilih == 13)
            {
                login();
            }
        }
    }
}

void inp_uang(int z, int k)
{
    if (tampval == 3)
    {
        char input_uang;
        int x = 0;
        while (input_uang != 13)
        {
            gotoxy(z + x, k);
            input_uang = getch();
            if (x > 0 && input_uang == 8)
            {
                printf("\b ");
                x--;
            }
            if (x < 8 && (input_uang >= '0' && input_uang <= '9' || input_uang == 32))
            {
                nom_uang[x] = input_uang;
                printf("%c", nom_uang[x]);
                x++;
            }
            if (x == 0 && input_uang == 13)
            {
                gotoxy(z, k);
                printf("INVALID  ");
                Sleep(700);
                gotoxy(z, k);
                printf("          ");
                Sleep(250);
                inp_uang(z, k);
            }
        }
        nom_uang[x] = 0;
    }
    if (tampval == 4)
    {
        char input_uang;
        int s = 0;
        while (input_uang != 13)
        {
            gotoxy(z + s, k);
            input_uang = getch();
            if (s > 0 && input_uang == 8)
            {
                printf("\b ");
                s--;
            }
            if (s < 8 && (input_uang >= '0' && input_uang <= '9' || input_uang == 32))
            {
                nom_uang[s] = input_uang;
                printf("%c", nom_uang[s]);
                s++;
            }
            if (s == 0 && input_uang == 13)
            {
                gotoxy(z, k);
                printf("INVALID  ");
                Sleep(700);
                gotoxy(z, k);
                printf("          ");
                Sleep(250);
                inp_uang(z, k);
            }
        }
        nom_uang[s] = 0;
    }
    if (tampval == 5 || tampval == 6)
    {
        char input_uang;
        int y = 0;
        while (input_uang != 13)
        {
            gotoxy(z + y, k);
            input_uang = getch();
            if (y > 0 && input_uang == 8)
            {
                printf("\b ");
                y--;
            }
            if (y < 8 && (input_uang >= '0' && input_uang <= '9' || input_uang == 32))
            {
                nom_uang[y] = input_uang;
                printf("%c", nom_uang[y]);
                y++;
            }
            if (y == 0 && input_uang == 13)
            {
                gotoxy(z, k);
                printf("INVALID  ");
                Sleep(700);
                gotoxy(z, k);
                printf("          ");
                Sleep(250);
                inp_uang(z, k);
            }
        }
        nom_uang[y] = 0;
    }

    val_uang(z, k);
}

void val_uang(int z, int k)
{
    int salah;
    for (int a = 0; a < strlen(nom_uang); a++)
    {
        if (nom_uang[a] == 32)
        {
            for (int a = 1; a <= 4; a++)
            {
                if (a % 2 == 1)
                {
                    gotoxy(z, k);
                    printf("Input tidak boleh menggunakan spasi");
                    Sleep(500);
                }
                else
                {
                    gotoxy(z, k);
                    printf("                                   ");
                    Sleep(250);
                }
            }
            salah++;
            break;
        }
        if (nom_uang[0] == 0)
        {
            for (int a = 1; a <= 4; a++)
            {
                if (a % 2 == 1)
                {
                    gotoxy(z, k);
                    printf("Tidak boleh diawali angka 0");
                    Sleep(500);
                }
                else
                {
                    gotoxy(z, k);
                    printf("                                   ");
                    Sleep(250);
                }
            }
            salah++;
            break;
        }

        uang = atoi(nom_uang);
        if (uang <= 49999 || uang >= 50000001)
        {
            for (int a = 1; a <= 6; a++)
            {
                if (a % 2 == 1)
                {
                    gotoxy(z, k);
                    printf("Minimal Rp. 50.000 dan maksimal Rp. 50.000.000");
                    Sleep(500);
                }
                else
                {
                    gotoxy(z, k);
                    printf("                                               ");
                    Sleep(250);
                }
            }
            salah++;
            break;
        }
    }
    if (salah > 0)
    {
        salah = 0;
        inp_uang(z, k);
    }

    else
    {
        if (tampval == 3)
        {
            bingkai(44, 13, 97, 7, 5, 7);
            set(5, 7);
            gotoxy(87, 15);
            printf("Masukkan PIN :");
            gotoxy(73, 17);
            printf("__________________________________________");
            int kok = 0, ulg = 0;
            char p_log;
            char pin_tf[100];
            do
            {

                while (p_log != 13)
                {
                    gotoxy(90 + kok, 16);
                    p_log = getch();
                    if (kok > 0 && p_log == 8)
                    {
                        printf("\b ");
                        kok--;
                    }
                    if (kok < 6 && (p_log >= '0' && p_log <= '9'))
                    {
                        pin_tf[kok] = p_log;
                        printf("*");
                        kok++;
                    }
                    if (kok == 0 && p_log == 13)
                    {
                        gotoxy(85, 16);
                        printf("INPUT TIDAK VALID");
                        Sleep(700);
                        gotoxy(85, 16);
                        printf("                         ");
                        p_log = 0;
                        ulg++;
                    }
                }
            } while (ulg > 0);

            if (strcmp(pin, pin_tf) == 0)
            {
                char nem[100][100], us[100][100], pas[100][100];
                int sld[100];
                int id = 0, dex = -1;
                FILE *view = fopen("akun.txt", "r");
                while (fscanf(view, "%[^#]#%[^#]#%[^#]#%d\n", &nem[id], &us[id], &pas[id], &sld[id]) != EOF)
                {
                    if (strcmp(pin_tf, pas[id]) == 0)
                    {
                        dex = id;
                    }
                    id++;
                }
                fclose(view);
                if (dex != -1)
                {
                    if (sld[dex] >= uang)
                    {
                        sld[dex] -= uang;
                        FILE *serah, *jeng;
                        kirim += uang;
                        serah = fopen("transfer.txt", "a");
                        fprintf(serah, "%s#%s#%d\n", tamp_nama, user_inp, kirim);
                        fclose(serah);
                        jeng = fopen("akun.txt", "w");
                        for (int j = 0; j < id; j++)
                        {
                            if (dex == j)
                            {
                                fprintf(jeng, "%s#%s#%s#%d\n", nem[j], us[j], pas[j], sld[dex]);
                            }
                            else
                            {
                                fprintf(jeng, "%s#%s#%d\n", nem[j], us[j], pas[j], sld[j]);
                            }
                        }
                        fclose(jeng);
                        set(6, 11);
                        gotoxy(90, 31);
                        printf("SUKSES");
                        Sleep(1000);
                        fclose(jeng);
                        invoice = 4;
                        bukti();
                    }

                    else if (sld[dex] <= uang)
                    {
                        gotoxy(69, 28);
                        printf("Oops.. MAAF SALDO ANDA TIDAK CUKUP UNTUK MELAKUKAN TRANSAKSI");
                        Sleep(1000);
                        menu();
                    }
                }
                else
                {
                    gotoxy(90, 31);
                    printf("AKUN TIDAK DITEMUKAN");
                    halaman_utama();
                }
            }
            else
            {
                // b = 1;
                gotoxy(79, 31);
                printf("PIN YANG ANDA MASUKKAN SALAH !");
                Sleep(1000);
                gotoxy(79, 31);
                printf("                               ");
                menu();
            }
        }
        if (tampval == 4)
        {
            char nem[100][100], us[100][100], pas[100][100];
            int sld[100];
            int id = 0, dex = -1;
            FILE *view, *baru;
            view = fopen("akun.txt", "r");
            while (fscanf(view, "%[^#]#%[^#]#%[^#]#%d\n", &nem[id], &us[id], &pas[id], &sld[id]) != EOF)
            {
                if ((strcmp(norek, us[id]) == 0) && (strcmp(pin, pas[id]) == 0))
                {
                    dex = id;
                }
                id++;
            }
            fclose(view);
            if (dex != -1)
            {
                baru = fopen("akun.txt", "w");
                sld[dex] += uang;
                for (int a = 0; a < id; a++)
                {
                    if (dex == a)
                    {

                        fprintf(baru, "%s#%s#%s#%d\n", nem[a], us[a], pas[a], sld[dex]);
                    }
                    else
                    {
                        fprintf(baru, "%s#%s#%s#%d\n", nem[a], us[a], pas[a], sld[a]);
                    }
                }
                fclose(baru);

                set(7, 5);
                gotoxy(48, 24);
                printf("S A L D O  B E R H A S I L  D I T A M B A H K A N");

                gotoxy(10, 33);
                printf("<< Tekan Esc untuk kembali ke menu");
                char ch;
                int tahan = 0;
                while ((ch = getch()) != 13 || tahan == 0)
                {
                    if (ch == 27)
                    {
                    
                        menu();
                    }
                }
            }
            else
            {
                gotoxy(50, 14);
                printf("Akun tidak ditemukan !");
                while (1)
                {
                    gotoxy(10, 33);
                    printf("<< Esc untuk kembali ke menu");
                    gotoxy(110, 33);
                    printf(">> Tab untuk keluar");
                    switch (getch())
                    {
                    case 27:
                        menu();
                        break;
                    case 9:
                        exit(0);
                        break;
                    default:
                        gotoxy(50, 33);
                        printf("Maaf, kesalahan input !");
                        getch();
                    }
                }
            }
        }
        if (tampval == 5)
        {
            char nem[100][100], us[100][100], pas[100][100];
            int sld[100];
            int id = 0, dex = -1;
            FILE *view = fopen("akun.txt", "r");
            while (fscanf(view, "%[^#]#%[^#]#%[^#]#%d\n", &nem[id], &us[id], &pas[id], &sld[id]) != EOF)
            {
                if ((strcmp(norek, us[id]) == 0) && (strcmp(pin, pas[id]) == 0))
                {
                    dex = id;
                }
                id++;
            }
            fclose(view);
            if (dex != -1)
            {
                if (sld[dex] >= uang)
                {
                    sld[dex] -= uang;
                    FILE *jeng, *wallet1;
                    wallet1 = fopen("dana.txt", "a");
                    kirim += uang;
                    fprintf(wallet1, "%s#%s#%d\n", tamp_nama, tamp_tlp, kirim);
                    fclose(wallet1);

                    jeng = fopen("akun.txt", "w");
                    for (int j = 0; j < id; j++)
                    {
                        if (dex == j)
                        {
                            fprintf(jeng, "%s#%s#%s#%d\n", nem[j], us[j], pas[j], sld[dex]);
                        }
                        else
                        {
                            fprintf(jeng, "%s#%s#%s#%d\n", nem[j], us[j], pas[j], sld[j]);
                        }
                    }
                    fclose(jeng);
                    set(11, 6);
                    gotoxy(70, 31);
                    printf("SUKSES");
                    Sleep(1000);
                    invoice = 5;
                    bukti();
                }

                else if (sld[dex] <= uang)
                {
                    set(11, 6);
                    gotoxy(50, 28);
                    printf("Oops.. MAAF SALDO ANDA TIDAK CUKUP UNTUK MELAKUKAN TRANSAKSI");
                    Sleep(1000);
                    menu();
                }
            }
            else
            {
                set(11, 6);
                gotoxy(68, 31);
                printf("AKUN TIDAK DITEMUKAN");
                Sleep(1000);
                halaman_utama();
            }
        }
        if (tampval == 6)
        {
            char nem[100][100], us[100][100], pas[100][100];
            int sld[100];
            int id = 0, dex = -1;
            FILE *view = fopen("akun.txt", "r");
            while (fscanf(view, "%[^#]#%[^#]#%[^#]#%d\n", &nem[id], &us[id], &pas[id], &sld[id]) != EOF)
            {
                if ((strcmp(norek, us[id]) == 0) && (strcmp(pin, pas[id]) == 0))
                {
                    dex = id;
                }
                id++;
            }
            fclose(view);
            if (dex != -1)
            {

                if (sld[dex] >= uang)
                {
                    sld[dex] -= uang;
                    FILE *jeng, *wallet1;
                    wallet1 = fopen("shopeepay.txt", "a");
                    kirim += uang;
                    fprintf(wallet1, "%s#%s#%d\n", tamp_nama, tamp_tlp, kirim);
                    fclose(wallet1);

                    jeng = fopen("akun.txt", "w");
                    for (int j = 0; j < id; j++)
                    {
                        if (dex == j)
                        {
                            fprintf(jeng, "%s#%s#%s#%d\n", nem[j], us[j], pas[j], sld[dex]);
                        }
                        else
                        {
                            fprintf(jeng, "%s#%s#%s#%d\n", nem[j], us[j], pas[j], sld[j]);
                        }
                    }
                    fclose(jeng);
                    set(7, 5);
                    gotoxy(70, 31);
                    printf("SUKSES");
                    Sleep(1000);
                    invoice = 6;
                    bukti();
                }

                else if (sld[dex] <= uang)
                {
                    set(11, 6);
                    gotoxy(50, 28);
                    printf("Oops.. MAAF SALDO ANDA TIDAK CUKUP UNTUK MELAKUKAN TRANSAKSI");
                    Sleep(1000);
                    menu();
                }
            }
            else
            {
                set(11, 6);
                gotoxy(68, 31);
                printf("AKUN TIDAK DITEMUKAN");
                Sleep(1000);
                halaman_utama();
            }
        }
    }
}

//================================== LOGO ========================================
void logo_zara(int x, int y)
{
    gotoxy(x, y);
    printf("__  /                     __ )                 |    \n");
    gotoxy(x, y + 1);
    printf("   /    _` |   __|  _` |  __ \\    _` |  __ \\   |  / \n");
    gotoxy(x, y + 2);
    printf("  /    (   |  |    (   |  |   |  (   |  |   |    <  \n");
    gotoxy(x, y + 3);
    printf("____| \\__,_| _|   \\__,_| ____/  \\__,_| _|  _| _|\\_\\\n");
}

void logo_registrasi(int x, int y)
{
    gotoxy(x, y);
    printf("  _ \\               _)        |                     _)\n");
    gotoxy(x, y + 1);
    printf(" |   |   _ \\   _` |  |   __|  __|   __|  _` |   __|  |\n");
    gotoxy(x, y + 2);
    printf(" __ <    __/  (   |  | \\__ \\  |    |    (   | \\__ \\  |\n");
    gotoxy(x, y + 3);
    printf("_| \\_\\ \\___| \\__, | _| ____/ \\__| _|   \\__,_| ____/ _|\n");
    gotoxy(x, y + 4);
    printf("             |___/                                    \n");
}

void logo_login(int x, int y)
{
    gotoxy(x, y);
    printf(".____                 .__        \n");
    gotoxy(x, y + 1);
    printf("|    |     ___   ____ |__| ____  \n");
    gotoxy(x, y + 2);
    printf("|    |    / _ \\ / ___\\|  |/    \\ \n");
    gotoxy(x, y + 3);
    printf("|    |___( <_> ) /_/  >  |   |  \\\n");
    gotoxy(x, y + 4);
    printf("|________ \\___/ \\__  /|__|___|  /\n");
    gotoxy(x, y + 5);
    printf("         \\/   /_____/         \\/ \n");
}

void logo_zb(int x, int y)
{
    gotoxy(x, y);
    printf("%c%c%c%c%c                        %c%c%c%c%c                   %c%c    \n", 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219);
    gotoxy(x, y + 1);
    printf("   %c%c   %c%c %c%c %c%c %c%c    %c%c %c%c %c%c   %c    %c%c %c%c %c%c %c%c%c  %c%c  %c%c\n", 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219);
    gotoxy(x, y + 2);
    printf("  %c%c   %c%c %c%c%c %c%c%c  %c  %c%c %c%c%c %c%c%c%c%c%c   %c%c %c%c%c %c%c%c  %c%c %c%c%c%c%c \n", 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219);
    gotoxy(x, y + 3);
    printf(" %c%c   %c%c  %c%c%c %c%c     %c%c  %c%c%c %c%c   %c%c %c%c  %c%c%c %c%c   %c%c %c%c %c%c \n", 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219);
    gotoxy(x, y + 4);
    printf("%c%c%c%c%c  %c%c%c %c%c %c%c      %c%c%c %c%c %c%c%c%c%c%c   %c%c%c %c%c %c%c   %c%c %c%c  %c%c \n", 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219);
}

void logo_about(int x, int y)
{
    gotoxy(x, y + 1);
    printf(" _______ _______  _______ ___ ___ _______ \n");
    gotoxy(x, y + 2);
    printf("|   _   |   _   \\|   _   |   Y   |       |\n");
    gotoxy(x, y + 3);
    printf("|.  1   |.  1   /|.  |   |.  |   |.|   | |\n");
    gotoxy(x, y + 4);
    printf("|.  _   |.  _   \\|.  |   |.  |   `-|.  |-'\n");
    gotoxy(x, y + 5);
    printf("|:  |   |:  1    |:  1   |:  1   | |:  |  \n");
    gotoxy(x, y + 6);
    printf("|::.|:. |::.. .  |::.. . |::.. . | |::.|  \n");
    gotoxy(x, y + 7);
    printf("`--- ---`-------'`-------`-------' `---'  ");
}
//================================== BINGKAI ========================================

void bingkai(int x, int y, int panjang, int lebar, int text, int background)
{
    for (int i = 0; i <= panjang; i++)
    {
        for (int j = 0; j <= lebar; j++)
        {
            if (i == 0 || j == 0 || i == panjang || j == lebar)
            {
                gotoxy(x + i, y + j);
                set(text, text);
                printf("%c", 219);
                Sleep(0);
            }
            else
            {
                gotoxy(x + i, y + j);
                set(background, background);
                printf(" ");
            }
        }
    }
}

//==================================== OPENING ======================================
void welcome()
{
    bingkai(0, 0, 144, 34, 5, 7);
    set(5, 7);
    gotoxy(35, 8);
    printf("%c%c       %c%c %c%c%c%c%c%c%c %c%c       %c%c%c%c%c   %c%c%c%c%c  %c%c    %c%c %c%c%c%c%c%c%c    %c%c%c%c%c%c%c  %c%c%c%c%c\n", 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219);
    Sleep(40);                          
    gotoxy(35, 9);
    printf("%c%c       %c%c %c%c      %c%c      %c%c    %c %c%c   %c%c %c%c%c  %c%c%c %c%c           %c%c%c   %c%c   %c%c\n", 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219);
    Sleep(40);
    gotoxy(35, 10);
    printf("%c%c   %c   %c%c %c%c%c%c%c   %c%c      %c%c      %c%c   %c%c %c%c %c%c %c%c %c%c%c%c%c        %c%c%c   %c%c   %c%c\n", 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219);
    Sleep(40);
    gotoxy(35, 11);
    printf(" %c%c %c%c%c %c%c  %c%c      %c%c      %c%c    %c %c%c   %c%c %c%c    %c%c %c%c           %c%c%c   %c%c   %c%c\n", 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219);
    Sleep(40);
    gotoxy(35, 12);
    printf("  %c%c   %c%c   %c%c%c%c%c%c%c %c%c%c%c%c%c%c  %c%c%c%c%c   %c%c%c%c%c  %c%c    %c%c %c%c%c%c%c%c%c      %c%c%c    %c%c%c%c%c\n", 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219);
    Sleep(40);
    logo_zb(45, 17);
    for (int a = 1, b = 1; a <= 100; a++)
    {
        set(5, 7);
        gotoxy(67, 30);
        printf("Loading %d%%", a);
        Sleep(15);
        if (a % 2 == 0)
        {
            set(5, 7);
            gotoxy(b + 47, 32);
            printf("%c", 177);
            Sleep(20);
            b++;
        }
    }
    halaman_utama();
}

//=============================== HALAMAN UTAMA ==================================
void halaman_utama()
{
    bingkai(0, 0, 144, 34, 5, 7);
    set(5, 7);
    logo_zara(47, 7);
    set(5, 7);
    gotoxy(53, 7);
    printf("Selamat datang di");
    set(5, 7);
    gotoxy(32, 28);
    printf("Nikmati pengalaman mudah dan nyaman dalam melakukan transaksi dengan ZaraBank");
    gotoxy(7,32); printf("<< Tekan Esc 2x untuk keluar program");
    bingkai_pilih_utama(5, 7);
}
//================================== BINGKAI HALAMAN UTAMA ==============================
void bingkai_pilih_utama(int text, int background)
{
    // bingkai(0, 0, 144, 34, 11, 7);
    for (int a = 0; a <= 20; a++)
    {
        for (int b = 0; b <= 4; b++)
        {
            Sleep(0);

            if (a == 0 || a == 20 || b == 0 || b == 4)
            {
                set(text, background);
                gotoxy(10 + a, 18 + b);
                printf("%c", 219);
                set(text, background);
                gotoxy(60 + a, 18 + b);
                printf("%c", 219);
                set(text, background);
                gotoxy(110 + a, 18 + b);
                printf("%c", 219);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    gotoxy(17, 20);
    printf("SIGN IN");

    gotoxy(66, 20);
    printf("REGISTRASI");

    gotoxy(118, 20);
    printf("ABOUT");

    pindah_utama();
}
void bingkai_geser_utama(int awal, int text, int background)
{
    set(text, background);
    for (int a = 0; a <= 20; a++)
    {
        for (int b = 0; b <= 4; b++)
        {
            if (a == 0 || a == 20 || b == 0 || b == 4)
            {
                gotoxy(awal + a, 18 + b);
                printf("%c", 219);
            }
        }
    }
}
void pindah_utama()
{
    int awal = 10, n = 1, pilihmenu;

    do
    {
        bingkai_geser_utama(awal, 3, 7);
        pilihmenu = getch();
        if (pilihmenu == 77)
        {
            bingkai_geser_utama(awal, 5, 7);
            awal += 50;
            n++;
            if (n > 3)
            {
                awal = 10;
                n = 1;
            }
        }

        else if (pilihmenu == 75)
        {
            bingkai_geser_utama(awal, 5, 7);
            awal -= 50;
            n--;
            if (n < 1)
            {
                awal = 110;
                n = 3;
            }
        }
        else if (pilihmenu == 13)
        {

            if (pilihmenu == 13 && awal == 10)
            {
                login();
            }
            else if (pilihmenu == 13 && awal == 60)
            {
                registrasi();
            }
            else if (pilihmenu == 13 && awal == 110)
            {
                about();
            }
        }
        else if(pilihmenu == 27)
        {
            exit(0);
        }
    } while (pilihmenu != 13);
}

//================================= BERANDA ===========================================
void beranda()
{
    bingkai(0, 0, 144, 10, 5, 5);
    bingkai(0, 11, 144, 24, 7, 7);
    set(5, 7);
    logo_zara(47, 12);
    set(5, 7);
    gotoxy(10, 33);
    printf("<< Esc untuk kembali ke halaman utama");
    bingkai_pilih_beranda(5, 7);
}
//=============================== BINGKAI BERANDA ===============================

void bingkai_pilih_beranda(int text, int background)
{
    for (int a = 0; a <= 20; a++)
    {
        for (int b = 0; b <= 4; b++)
        {
            Sleep(0);

            if (a == 0 || a == 20 || b == 0 || b == 4)
            {
                set(text, background);
                gotoxy(35 + a, 20 + b);
                printf("%c", 219);
                set(text, background);
                gotoxy(85 + a, 20 + b);
                printf("%c", 219);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    gotoxy(43, 22);
    printf("MENU");

    gotoxy(90, 22);
    printf("SETTING AKUN");

    pindah_beranda();
}

void bingkai_geser_beranda(int awal, int text, int background)
{
    set(text, background);
    for (int a = 0; a <= 20; a++)
    {
        for (int b = 0; b <= 4; b++)
        {
            if (a == 0 || a == 20 || b == 0 || b == 4)
            {
                gotoxy(awal + a, 20 + b);
                printf("%c", 219);
            }
        }
    }
}

void pindah_beranda()
{
    int awal = 35, n = 1, pilihmenu;

    do
    {
        bingkai_geser_beranda(awal, 3, 7);
        pilihmenu = getch();
        if (pilihmenu == 77)
        {
            bingkai_geser_beranda(awal, 5, 7);
            awal += 50;
            n++;
            if (n > 2)
            {
                awal = 35;
                n = 1;
            }
        }

        else if (pilihmenu == 75)
        {
            bingkai_geser_beranda(awal, 5, 7);
            awal -= 50;
            n--;
            if (n < 1)
            {
                awal = 85;
                n = 2;
            }
        }
        else if (pilihmenu == 13)
        {

            if (pilihmenu == 13 && awal == 35)
            {
                menu();
            }
            else if (pilihmenu == 13 && awal == 85)
            {
                set_akun();
            }
        }
        else if (pilihmenu == 27)
        {
            halaman_utama();
        }
    } while (pilihmenu != 13);
}

void login()
{
    bingkai(0, 0, 144, 34, 11, 13);
    bingkai(97, 4, 45, 27, 11, 7);
    set(13, 7);
    logo_login(103, 9);
    set(7, 13);
    logo_zara(21, 15);
    set(13, 7);
    gotoxy(100, 21);
    printf("USERNAME : ");
    gotoxy(100, 24);
    printf("PASSWORD : ");
    gotoxy(103, 28);
    printf("Tekan tombol 'Enter' untuk lanjut");
    set(7, 13);
    gotoxy(4, 32);
    printf("<< Esc untuk kembali ke halaman utama");

    while (TRUE)
    {
        pilih = getch();
        if (pilih == 27)
        {
            halaman_utama();
        }
        else if (pilih == 13)
        {
            set(13, 7);
            gotoxy(103, 28);
            printf("                                  ");
            gotoxy(111, 21);
            printf("               ");
            gotoxy(100, 21);
            printf("USERNAME : ");
            gotoxy(111, 24);
            printf("               ");
            gotoxy(100, 24);
            printf("PASSWORD : ");
            masuk();
        }
    }
}

void masuk()
{
    char u_log;
    int xox = 0;
    while (u_log != 13)
    {
        gotoxy(111 + xox, 21);
        u_log = getch();
        if (xox > 0 && u_log == 8)
        {
            printf("\b ");
            xox--;
        }
        if (xox < 12 && (u_log >= '0' && u_log <= '9'))
        {
            user_inp[xox] = u_log;
            printf("%c", user_inp[xox]);
            xox++;
        }
        if (xox == 0 && u_log == 13)
        {
            gotoxy(111, 21);
            printf("INPUT TIDAK BOLEH KOSONG");
            Sleep(700);
            gotoxy(111, 21);
            printf("                         ");
            xox = 0;
            masuk();
        }
    }
    user_inp[xox] = 0;
    pas_masuk();
}

void pas_masuk()
{
    char p_log;
    int kok = 0;
    while (p_log != 13)
    {
        gotoxy(111 + kok, 24);
        p_log = getch();
        if (kok > 0 && p_log == 8)
        {
            printf("\b ");
            kok--;
        }
        if (kok < 6 && (p_log >= '0' && p_log <= '9'))
        {
            up_inp[kok] = p_log;
            printf("%c", up_inp[kok]);
            kok++;
        }
        if (kok == 0 && p_log == 13)
        {
            gotoxy(111, 24);
            printf("INPUT TIDAK BOLEH KOSONG");
            Sleep(700);
            gotoxy(111, 24);
            printf("                         ");
            kok = 0;
            pas_masuk();
        }
    }
    up_inp[kok] = 0;

    char nem[50][50], nama[50][50];
    char pass[50][50];
    int sald[100];
    int x = 0;
    int z = -1;
    FILE *jeng = fopen("akun.txt", "r");
    while (fscanf(jeng, "%[^#]#%[^#]#%[^#]#%d\n", &nem[x], &nama[x], &pass[x], &sald[x]) != EOF)
    {
        if ((strcmp(nama[x], user_inp) == 0) && (strcmp(pass[x], up_inp) == 0))
        {
            z = x;
        }
        x++;
    }
    fclose(jeng);
    if (z == -1)
    {
        gotoxy(110, 28);
        printf("username password salah!");
        Sleep(1000);
        gotoxy(110, 28);
        printf("                           ");
        gotoxy(111, 21);
        printf("                         ");
        gotoxy(111, 24);
        printf("                         ");

        masuk();
    }
    else
    {
        strcpy(nami, nem[z]);
        strcpy(norek, user_inp);
        strcpy(pin, up_inp);
        gotoxy(115, 28);
        printf("SUKSES LOGIN");
        Sleep(700);
        beranda();
    }
}

void registrasi()
{
    tampval = 1;
    z = 69;
    k = 12;

    bingkai(0, 0, 144, 34, 7, 7);
    bingkai(7, 4, 130, 26, 5, 5);
    set(7, 5);
    logo_registrasi(44, 6);
    gotoxy(40, 12);
    printf("   Nama lengkap            :                                ");
    gotoxy(40, 13);
    printf("   _________________________________________________________");
    gotoxy(40, 14);
    printf("   No Telepon              :                                ");
    gotoxy(40, 15);
    printf("   _________________________________________________________");
    gotoxy(40, 16);
    printf("   Jenis kelamin [L/P]     :                                ");
    gotoxy(40, 17);
    printf("   _________________________________________________________");
    gotoxy(40, 18);
    printf("   Umur                    :    TAHUN                       ");
    gotoxy(40, 19);
    printf("   _________________________________________________________");
    gotoxy(40, 20);
    printf("   Asal kota               :                                ");
    gotoxy(40, 21);
    printf("   _________________________________________________________");
    gotoxy(40, 22);
    printf("   Masukkan No Rekening    :                                ");
    gotoxy(40, 23);
    printf("   _________________________________________________________");
    gotoxy(40, 24);
    printf("   Masukkan PIN            :                                ");
    gotoxy(40, 25);
    printf("   _________________________________________________________");
    val_nama(z, k);
}

void about()
{
    bingkai(0, 0, 144, 34, 5, 5);
    // row horizontal
    set(7, 7);
    for (int a = 0; a < 114; a++)
    {
        gotoxy(15 + a, 4);
        printf("%c", 219); // atas
        gotoxy(15 + a, 30);
        printf("%c", 219); // bawah
    }
    // row vertikal
    for (int a = 0; a < 5; a++)
    {
        gotoxy(15, 5 + a);
        printf("%c", 219); // kiri atas
        gotoxy(128, 5 + a);
        printf("%c", 219); // kanan atas
        gotoxy(128, 25 + a);
        printf("%c", 219); // kiri bawah
        gotoxy(15, 25 + a);
        printf("%c", 219); // kanan bawah
    }
    // row horizontal kecil
    for (int a = 0; a < 10; a++)
    {
        gotoxy(6 + a, 9);
        printf("%c", 219); // kiri atas
        gotoxy(128 + a, 9);
        printf("%c", 219); // kanan atas
        gotoxy(128 + a, 25);
        printf("%c", 219); // kanan bawah
        gotoxy(6 + a, 25);
        printf("%c", 219); // kiri bawah
    }
    // row vertikal
    for (int a = 0; a < 15; a++)
    {
        gotoxy(6, 10 + a);
        printf("%c", 219); // kiri
        gotoxy(137, 10 + a);
        printf("%c", 219); // bawah
    }
    set(7, 5);
    logo_about(50, 4);
    gotoxy(20, 13);
    printf("ZaraBank adalah perbankan digital berbasis aplikasi sederhana");
    gotoxy(20, 14);
    printf("yang memberikan pengalaman mudah dan nyaman dalam melakukan");
    gotoxy(20, 15);
    printf("transaksi. Anda dapat melakukan transaksi, sekaligus dapat");
    gotoxy(20, 16);
    printf("menerima saldo dari sesama rekening ZaraBank.");
    gotoxy(20, 19);
    printf("Keuntungan menggunakan ZaraBank");
    gotoxy(20, 20);
    printf("1. Gratis biaya admin");
    gotoxy(20, 21);
    printf("2. Gratis biaya transfer");
    gotoxy(20, 22);
    printf("3. Gratis biaya admin untuk top up e-wallet");
    gotoxy(50, 28);
    printf("copyright @2023-2024 by Ajeng Azzahra Maharani");
    gotoxy(22, 26);
    printf("<< Esc untuk kembali");

    while (pilih != 27)
    {
        pilih = getch();
        if (pilih == 27)
        {
            halaman_utama();
        }
    }
}

//================================= MENU ========================================
void menu()
{
    bingkai(0, 0, 40, 34, 5, 5);
    bingkai(41, 0, 103, 34, 7, 7);
    set(5, 7);
    logo_zara(75,15);
    gotoxy(81,15); printf("MENU");
    gotoxy(43, 32);
    printf("<< Esc untuk kembali ke beranda");
    bingkai_pilih_menu(7, 5);
}
//=============================== BINGKAI FITUR MENU ===================================
void bingkai_pilih_menu(int text, int background)
{
    for (int a = 0; a <= 20; a++)
    {
        for (int b = 0; b <= 4; b++)
        {
            Sleep(0);

            if (a == 0 || a == 20 || b == 0 || b == 4)
            {
                set(text, background);
                gotoxy(10 + a, 3 + b);
                printf("%c", 219);
                gotoxy(10 + a, 11 + b);
                printf("%c", 219);
                gotoxy(10 + a, 19 + b);
                printf("%c", 219);
                gotoxy(10 + a, 27 + b);
                printf("%c", 219);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    gotoxy(16, 5);
    printf("TRANSFER");

    gotoxy(16, 13);
    printf("ISI SALDO");

    gotoxy(16, 21);
    printf("CEK SALDO");

    gotoxy(13, 29);
    printf("TOP UP E-WALLET");
    pindah_menu();
}

void bingkai_geser_menu(int awal, int text, int background)
{
    set(text, background);
    for (int a = 0; a <= 20; a++)
    {
        for (int b = 0; b <= 4; b++)
        {
            if (a == 0 || a == 20 || b == 0 || b == 4)
            {
                gotoxy(10 + a, awal + b);
                printf("%c", 219);
            }
        }
    }
}

void pindah_menu()
{
    int awal = 3, n = 1, pilihmenu;
    do
    {
        bingkai_geser_menu(awal, 3, 7);
        pilihmenu = getch();
        if (pilihmenu == 80)
        {
            bingkai_geser_menu(awal, 7, 7);
            awal += 8;
            n++;
            if (n > 4)
            {
                awal = 3;
                n = 1;
            }
        }

        else if (pilihmenu == 72)
        {
            bingkai_geser_menu(awal, 7, 7);
            awal -= 8;
            n--;
            if (n < 1)
            {
                awal = 27;
                n = 4;
            }
        }
        else if (pilihmenu == 13)
        {

            if (pilihmenu == 13 && awal == 3)
            {
                transfer();
            }
            else if (pilihmenu == 13 && awal == 11)
            {
                isi_saldo();
            }
            else if (pilihmenu == 13 && awal == 19)
            {
                cek_saldo();
            }
            else if (pilihmenu == 13 && awal == 27)
            {
                topUp_ewallet();
            }
        }
        else if (pilihmenu == 27)
        {
            beranda();
        }
    } while (pilihmenu != 13);
}

//================================= FITUR MENU ==============================================
void transfer() // edit saldo
{
    tampval = 2;
    z = 62;
    k = 15;
    bingkai(0, 0, 144, 34, 7, 7);
    bingkai(20, 7, 104, 20, 5, 5);
    set(7, 5);
    gotoxy(25, 15);
    printf("MASUKKAN NAMA TUJUAN               : ");
    gotoxy(25, 17);
    printf("MASUKKAN NOMOR REKENING TUJUAN     : ");
    val_nama(z, k);
}

void saldo_transfer()
{
    bingkai(0, 0, 40, 34, 5, 5);
    bingkai(41, 0, 103, 34, 7, 7);
    set(5, 7);
    bingkai_pilih_transfer(7, 5);
}

//=============================== BINGKAI FITUR TRANSFER ===================================
void bingkai_pilih_transfer(int text, int background)
{
    for (int a = 0; a <= 20; a++)
    {
        for (int b = 0; b <= 4; b++)
        {
            Sleep(0);

            if (a == 0 || a == 20 || b == 0 || b == 4)
            {
                set(text, background);
                gotoxy(10 + a, 3 + b);
                printf("%c", 219);
                gotoxy(10 + a, 11 + b);
                printf("%c", 219);
                gotoxy(10 + a, 19 + b);
                printf("%c", 219);
                gotoxy(10 + a, 27 + b);
                printf("%c", 219);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    gotoxy(13, 5);
    printf("Rp. 50,000,00");

    gotoxy(13, 13);
    printf("Rp. 100,000,00");

    gotoxy(13, 21);
    printf("Rp. 300,000,00");

    gotoxy(14, 29);
    printf("NOMINAL LAIN");
    pindah_transfer();
}

void bingkai_geser_transfer(int awal, int text, int background)
{
    set(text, background);
    for (int a = 0; a <= 20; a++)
    {
        for (int b = 0; b <= 4; b++)
        {
            if (a == 0 || a == 20 || b == 0 || b == 4)
            {
                gotoxy(10 + a, awal + b);
                printf("%c", 219);
            }
        }
    }
}

void pindah_transfer()
{
    int awal = 3, n = 1, pilihmenu;
    do
    {
        bingkai_geser_transfer(awal, 15, 7);
        pilihmenu = getch();
        if (pilihmenu == 80)
        {
            bingkai_geser_transfer(awal, 7, 7);
            awal += 8;
            n++;
            if (n > 4)
            {
                awal = 3;
                n = 1;
            }
        }

        else if (pilihmenu == 72)
        {
            bingkai_geser_transfer(awal, 7, 7);
            awal -= 8;
            n--;
            if (n < 1)
            {
                awal = 27;
                n = 4;
            }
        }
        else if (pilihmenu == 13)
        {
            bingkai(44, 3, 97, 7, 5, 7);
            set(5, 7);
            if (pilihmenu == 13 && awal == 3)
            {
                tf_50();
            }
            else if (pilihmenu == 13 && awal == 11)
            {
                tf_100();
            }
            else if (pilihmenu == 13 && awal == 19)
            {
                tf_300();
            }
            else if (pilihmenu == 13 && awal == 27)
            {
                tf_nom_lain();
            }
        }
    } while (pilihmenu != 13);
}

void tf_50()
{
    gotoxy(87, 5);
    printf("Masukkan PIN :");
    gotoxy(73, 7);
    printf("__________________________________________");
    int kok = 0, ulg = 0;
    char p_log;
    char pin_tf[100];

    do
    {
        while (p_log != 13)
        {
            gotoxy(90 + kok, 6);
            p_log = getch();
            if (kok > 0 && p_log == 8)
            {
                printf("\b ");
                kok--;
            }
            if (kok < 6 && (p_log >= '0' && p_log <= '9'))
            {
                pin_tf[kok] = p_log;
                printf("*");
                kok++;
            }
            if (kok == 0 && p_log == 13)
            {
                gotoxy(85, 12);
                printf("INPUT TIDAK VALID");
                Sleep(700);
                gotoxy(85, 12);
                printf("                         ");
                p_log = 0;
                ulg++;
            }
        }
    } while (ulg > 0);

    if (strcmp(pin, pin_tf) == 0)
    {
        char nem[100][100], us[100][100], pas[100][100];
        int sld[100];
        int id = 0, dex = -1;
        FILE *view = fopen("akun.txt", "r");
        while (fscanf(view, "%[^#]#%[^#]#%[^#]#%d\n", &nem[id], &us[id], &pas[id], &sld[id]) != EOF)
        {
            if (strcmp(pin_tf, pas[id]) == 0)
            {
                dex = id;
            }
            id++;
        }
        fclose(view);
        if (dex != -1)
        {
            if (sld[dex] >= saldo_tf[0])
            {
                sld[dex] -= saldo_tf[0];
                FILE *serah, *jeng;
                kirim += saldo_tf[0];
                serah = fopen("transfer.txt", "a");
                fprintf(serah, "%s#%s#%d\n", tamp_nama, user_inp, kirim);
                fclose(serah);
                jeng = fopen("akun.txt", "w");
                for (int j = 0; j < id; j++)
                {
                    if (dex == j)
                    {
                        fprintf(jeng, "%s#%s#%s#%d\n", nem[j], us[j], pas[j], sld[dex]);
                    }
                    else
                    {
                        fprintf(jeng, "%s#%s#%s#%d\n", nem[j], us[j], pas[j], sld[j]);
                    }
                }
                fclose(jeng);
                gotoxy(90, 15);
                printf("SUKSES");
                Sleep(1000);
                fclose(jeng);
                invoice = 1;
                bukti();
            }

            else if (sld[dex] <= saldo_tf[0])
            {
                gotoxy(69, 28);
                printf("Oops.. MAAF SALDO ANDA TIDAK CUKUP UNTUK MELAKUKAN TRANSAKSI");
                Sleep(1000);
                menu();
            }
        }
        else
        {
            gotoxy(90, 15);
            printf("AKUN TIDAK DITEMUKAN");
            halaman_utama();
        }
    }
    else
    {
        gotoxy(79, 15);
        printf("PIN YANG ANDA MASUKKAN SALAH !");
        Sleep(1000);
        gotoxy(79, 15);
        printf("                               ");
        menu();
    }
}

void tf_100()
{
    gotoxy(87, 5);
    printf("Masukkan PIN :");
    gotoxy(73, 7);
    printf("__________________________________________");
    int kok = 0, ulg = 0;
    char p_log;
    char pin_tf[100];

    do
    {
        while (p_log != 13)
        {
            gotoxy(90 + kok, 6);
            p_log = getch();
            if (kok > 0 && p_log == 8)
            {
                printf("\b ");
                kok--;
            }
            if (kok < 6 && (p_log >= '0' && p_log <= '9'))
            {
                pin_tf[kok] = p_log;
                printf("*");
                kok++;
            }
            if (kok == 0 && p_log == 13)
            {
                gotoxy(85, 12);
                printf("INPUT TIDAK VALID");
                Sleep(700);
                gotoxy(85, 12);
                printf("                         ");
                p_log = 0;
                ulg++;
            }
        }
    } while (ulg > 0);

    if (strcmp(pin, pin_tf) == 0)
    {
        char nem[100][100], us[100][100], pas[100][100];
        int sld[100];
        int id = 0, dex = -1;
        FILE *view = fopen("akun.txt", "r");
        while (fscanf(view, "%[^#]#%[^#]#%[^#]#%d\n", &nem[id], &us[id], &pas[id], &sld[id]) != EOF)
        {
            if (strcmp(pin_tf, pas[id]) == 0)
            {
                dex = id;
            }
            id++;
        }
        fclose(view);
        if (dex != -1)
        {
            if (sld[dex] >= saldo_tf[1])
            {
                sld[dex] -= saldo_tf[1];
                FILE *serah, *jeng;
                kirim += saldo_tf[1];
                serah = fopen("transfer.txt", "a");
                fprintf(serah, "%s#%s#%d\n", tamp_nama, user_inp, kirim);
                fclose(serah);
                jeng = fopen("akun.txt", "w");
                for (int j = 0; j < id; j++)
                {
                    if (dex == j)
                    {
                        fprintf(jeng, "%s#%s#%s#%d\n", nem[j], us[j], pas[j], sld[dex]);
                    }
                    else
                    {
                        fprintf(jeng, "%s#%s#%s#%d\n", nem[j], us[j], pas[j], sld[j]);
                    }
                }
                fclose(jeng);
                gotoxy(90, 15);
                printf("SUKSES");
                Sleep(1000);
                fclose(jeng);
                invoice = 2;
                bukti();
            }

            else if (sld[dex] <= saldo_tf[1])
            {
                gotoxy(69, 28);
                printf("Oops.. MAAF SALDO ANDA TIDAK CUKUP UNTUK MELAKUKAN TRANSAKSI");
                Sleep(1000);
                menu();
            }
        }
        else
        {
            gotoxy(90, 15);
            printf("AKUN TIDAK DITEMUKAN");
            halaman_utama();
        }
    }
    else
    {
        gotoxy(79, 15);
        printf("PIN YANG ANDA MASUKKAN SALAH !");
        Sleep(1000);
        gotoxy(79, 15);
        printf("                               ");
        menu();
    }
}

void tf_300()
{
    gotoxy(87, 5);
    printf("Masukkan PIN :");
    gotoxy(73, 7);
    printf("__________________________________________");
    int kok = 0, ulg = 0;
    char p_log;
    char pin_tf[100];

    do
    {
        while (p_log != 13)
        {
            gotoxy(90 + kok, 6);
            p_log = getch();
            if (kok > 0 && p_log == 8)
            {
                printf("\b ");
                kok--;
            }
            if (kok < 6 && (p_log >= '0' && p_log <= '9'))
            {
                pin_tf[kok] = p_log;
                printf("*");
                kok++;
            }
            if (kok == 0 && p_log == 13)
            {
                gotoxy(85, 12);
                printf("INPUT TIDAK VALID");
                Sleep(700);
                gotoxy(85, 12);
                printf("                         ");
                p_log = 0;
                ulg++;
            }
        }
    } while (ulg > 0);

    if (strcmp(pin, pin_tf) == 0)
    {
        char nem[100][100], us[100][100], pas[100][100];
        int sld[100];
        int id = 0, dex = -1;
        FILE *view = fopen("akun.txt", "r");
        while (fscanf(view, "%[^#]#%[^#]#%[^#]#%d\n", &nem[id], &us[id], &pas[id], &sld[id]) != EOF)
        {
            if (strcmp(pin_tf, pas[id]) == 0)
            {
                dex = id;
            }
            id++;
        }
        fclose(view);
        if (dex != -1)
        {
            if (sld[dex] >= saldo_tf[2])
            {
                sld[dex] -= saldo_tf[2];
                FILE *serah, *jeng;
                kirim += saldo_tf[2];
                serah = fopen("transfer.txt", "a");
                fprintf(serah, "%s#%s#%d\n", tamp_nama, user_inp, kirim);
                fclose(serah);
                jeng = fopen("akun.txt", "w");
                for (int j = 0; j < id; j++)
                {
                    if (dex == j)
                    {
                        fprintf(jeng, "%s#%s#%s#%d\n", nem[j], us[j], pas[j], sld[dex]);
                    }
                    else
                    {
                        fprintf(jeng, "%s#%s#%s#%d\n", nem[j], us[j], pas[j], sld[j]);
                    }
                }
                fclose(jeng);
                gotoxy(90, 15);
                printf("SUKSES");
                Sleep(1000);
                fclose(jeng);
                invoice = 3;
                bukti();
            }

            else if (sld[dex] <= saldo_tf[2])
            {
                gotoxy(69, 28);
                printf("Oops.. MAAF SALDO ANDA TIDAK CUKUP UNTUK MELAKUKAN TRANSAKSI");
                Sleep(1000);
                menu();
            }
        }
        else
        {
            gotoxy(90, 15);
            printf("AKUN TIDAK DITEMUKAN");
            halaman_utama();
        }
    }
    else
    {
        gotoxy(79, 15);
        printf("PIN YANG ANDA MASUKKAN SALAH !");
        Sleep(1000);
        gotoxy(79, 15);
        printf("                               ");
        menu();
    }
}

void tf_nom_lain()
{
    tampval = 3;
    z = 54;
    k = 7;
    // bingkai(44, 13, 97, 7, 5, 7);
    set(5, 7);
    gotoxy(50, 6);
    printf("MASUKKAN NOMINAL TRANSFER :");
    gotoxy(50, 7);
    printf("Rp. ");
    inp_uang(z, k);
}

void isi_saldo()
{
    tampval = 4;
    z = 54;
    k = 18;
    bingkai(0, 0, 144, 34, 5, 5);
    set(7,5); logo_zara(50,8);
    gotoxy(56,8); printf("ISI SALDO");
    set(7, 7);
    for (int a = 0; a < 114; a++)
    {
        gotoxy(15 + a, 4);
        printf("%c", 219); // atas
        gotoxy(15 + a, 30);
        printf("%c", 219); // bawah
    }
    // row vertikal kecil
    for (int a = 0; a < 5; a++)
    {
        gotoxy(15, 5 + a);
        printf("%c", 219); // kiri atas
        gotoxy(128, 5 + a);
        printf("%c", 219); // kanan atas
        gotoxy(128, 25 + a);
        printf("%c", 219); // kiri bawah
        gotoxy(15, 25 + a);
        printf("%c", 219); // kanan bawah
    }
    // row horizontal kecil
    for (int a = 0; a < 10; a++)
    {
        gotoxy(6 + a, 9);
        printf("%c", 219); // kiri atas
        gotoxy(128 + a, 9);
        printf("%c", 219); // kanan atas
        gotoxy(128 + a, 25);
        printf("%c", 219); // kanan bawah
        gotoxy(6 + a, 25);
        printf("%c", 219); // kiri bawah
    }
    // row vertikal
    for (int a = 0; a < 15; a++)
    {
        gotoxy(6, 10 + a);
        printf("%c", 219); // kiri
        gotoxy(137, 10 + a);
        printf("%c", 219); // bawah
    }

    bingkai(21, 15, 103, 5, 7, 7);
    set(5, 7);
    gotoxy(50, 17);
    printf("MASUKKAN NOMINAL SALDO YANG INGIN ANDA ISI");
    gotoxy(50, 18);
    printf("Rp. ");
    inp_uang(z, k);
}
void cek_saldo() // read
{
    bingkai(0, 0, 144, 34, 7, 7);
    bingkai(0, 10, 144, 24, 5, 5);
    set(5,7); logo_zara(50,3);
    char nem[100][100], us[100][100], pas[100][100];
    int sld[100];
    int id = 0, dex = -1;
    FILE *view = fopen("akun.txt", "r");
    while (fscanf(view, "%[^#]#%[^#]#%[^#]#%d\n", &nem[id], &us[id], &pas[id], &sld[id]) != EOF)
    {
        if ((strcmp(norek, us[id]) == 0) && (strcmp(pin, pas[id]) == 0))
        {
            dex = id;
        }
        id++;
    }
    fclose(view);

    set(7, 5);
    gotoxy(25, 15);
    printf("ZARA BANK INDONESIA");
    gotoxy(25, 18);
    printf("NO REKENING            : %s", us[dex]);
    gotoxy(25, 21);
    printf("SALDO TERSEDIA         : Rp. %d", sld[dex]);
    gotoxy(20, 24);
    printf("_________________________________________________________________________________________________");
    gotoxy(50, 30);
    printf("copyright @2024 by Ajeng Azzahra Maharani");
    gotoxy(5, 33);
    printf("<< Tekan Esc untuk kembali ke menu");

    char ch;
    int tahan = 0;
    while ((ch = getch()) != 13 || tahan == 0)
    {
        if (ch == 27)
        {
            menu();
        }
    }
}

void topUp_ewallet() // delete saldo
{
    bingkai(0, 0, 144, 34, 7, 5);
    bingkai_pilih_ewallet(7, 5);
}
//============================== BINGKAI TOP UP E-WALLET =============================
void bingkai_pilih_ewallet(int text, int background)
{
    for (int a = 0; a <= 20; a++)
    {
        for (int b = 0; b <= 4; b++)
        {
            Sleep(0);

            if (a == 0 || a == 20 || b == 0 || b == 4)
            {
                set(text, background);
                gotoxy(35 + a, 20 + b);
                printf("%c", 219);
                set(text, background);
                gotoxy(85 + a, 20 + b);
                printf("%c", 219);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    gotoxy(43, 22);
    printf("DANA");

    gotoxy(91, 22);
    printf("SHOPEEPAY");

    pindah_ewallet();
}

void bingkai_geser_ewallet(int awal, int text, int background)
{
    set(text, background);
    for (int a = 0; a <= 20; a++)
    {
        for (int b = 0; b <= 4; b++)
        {
            if (a == 0 || a == 20 || b == 0 || b == 4)
            {
                gotoxy(awal + a, 20 + b);
                printf("%c", 219);
            }
        }
    }
}

void pindah_ewallet()
{
    int awal = 35, n = 1, pilihmenu;

    do
    {
        bingkai_geser_ewallet(awal, 3, 7);
        pilihmenu = getch();
        if (pilihmenu == 77)
        {
            bingkai_geser_ewallet(awal, 7, 7);
            awal += 50;
            n++;
            if (n > 2)
            {
                awal = 35;
                n = 1;
            }
        }

        else if (pilihmenu == 75)
        {
            bingkai_geser_ewallet(awal, 7, 7);
            awal -= 50;
            n--;
            if (n < 1)
            {
                awal = 85;
                n = 2;
            }
        }
        else if (pilihmenu == 13)
        {

            if (pilihmenu == 13 && awal == 35)
            {
                dana();
            }
            else if (pilihmenu == 13 && awal == 85)
            {
                shopeepay();
            }
        }
        else if (pilihmenu == 27)
        {
            beranda();
        }
    } while (pilihmenu != 13);
}
//================================== ISI TOP UP ======================================
void dana()
{
    tampval = 5;
    z = 39;
    k = 15;

    bingkai(0, 0, 144, 34, 11, 6);
    set(11, 6);
    logo_zb(75, 4);
    gotoxy(100,10); printf("~ TOP UP DANA ~");

    gotoxy(10, 15);
    printf("MASUKKAN NAMA              : ");
    gotoxy(10, 16);
    printf("________________________________________________________________________________");
    gotoxy(10, 17);
    printf("NO TELFON                  : ");
    gotoxy(10, 18);
    printf("________________________________________________________________________________");
    val_nama(z, k);
}
void nom_dana()
{
    tampval = 5;
    z = 42;
    k = 22;
    bingkai(10, 20, 78, 4, 11, 11);
    set(6, 11);
    gotoxy(12, 22);
    printf("MASUKKAN NOMINAL        : Rp. ");
    inp_uang(z, k);
}
void shopeepay()
{
    tampval = 6;
    z = 39;
    k = 15;

    bingkai(0, 0, 144, 34, 7, 5);
    set(7, 5);
    logo_zb(75, 4);
    gotoxy(96,10); printf("~ TOP UP SHOPEEPAY ~");


    gotoxy(10, 15);
    printf("MASUKKAN NAMA              : ");
    gotoxy(10, 16);
    printf("________________________________________________________________________________");
    gotoxy(10, 17);
    printf("NO TELFON                  : ");
    gotoxy(10, 18);
    printf("________________________________________________________________________________");
    val_nama(z, k);
}
void nom_shopee()
{
    tampval = 6;
    z = 42;
    k = 22;
    bingkai(10, 20, 78, 4, 7, 7);

    set(6, 7);
    gotoxy(12, 22);
    printf("MASUKKAN NOMINAL        : Rp. ");
    inp_uang(z, k);
}

void bukti()
{
    time_t waktu_Baru;
    struct tm *waktu_info;
    time(&waktu_Baru);
    waktu_info = localtime(&waktu_Baru);

    bingkai(0, 0, 144, 34, 7, 5);
    bingkai(50, 11, 51, 18, 7, 7);
    set(7, 5);
    logo_zara(50, 4);
    gotoxy(68, 9);
    printf("BUKTI TRANSAKSI");

    set(5, 7);
    if (invoice == 1)
    {
        gotoxy(53, 13);
        printf("Dari                    %s", nami);
        gotoxy(53, 14);
        printf("                        SeaBank: %s", norek);
        gotoxy(54, 16);
        printf("____________________________________________");
        gotoxy(53, 18);
        printf("Ke                      %s", tamp_nama);
        gotoxy(53, 19);
        printf("                        SeaBank: %s", user_inp);
        gotoxy(54, 21);
        printf("____________________________________________");
        gotoxy(53, 23);
        printf("Jumlah Transfer         Rp. %d", kirim);
        gotoxy(53, 24);
        printf("Waktu Transaksi         %02d %02d %04d, %02d:%02d", waktu_info->tm_mday, waktu_info->tm_mon + 1, waktu_info->tm_year + 1900, waktu_info->tm_hour, waktu_info->tm_min);
        gotoxy(54, 27);
        printf("Resi ini merupakan bukti transaksi yang sah.");
        kirim = 0;
    }
    else if (invoice == 2)
    {
        gotoxy(53, 13);
        printf("Dari                    %s", nami);
        gotoxy(53, 14);
        printf("                        SeaBank: %s", norek);
        gotoxy(54, 16);
        printf("____________________________________________");
        gotoxy(53, 18);
        printf("Ke                      %s", tamp_nama);
        gotoxy(53, 19);
        printf("                        SeaBank: %s", user_inp);
        gotoxy(54, 21);
        printf("____________________________________________");
        gotoxy(53, 23);
        printf("Jumlah Transfer         Rp. %d", kirim);
        gotoxy(53, 24);
        printf("Waktu Transaksi         %02d %02d %04d, %02d:%02d", waktu_info->tm_mday, waktu_info->tm_mon + 1, waktu_info->tm_year + 1900, waktu_info->tm_hour, waktu_info->tm_min);
        gotoxy(54, 27);
        printf("Resi ini merupakan bukti transaksi yang sah.");
        kirim = 0;
    }
    else if (invoice == 3)
    {
        gotoxy(53, 13);
        printf("Dari                    %s", nami);
        gotoxy(53, 14);
        printf("                        SeaBank: %s", norek);
        gotoxy(54, 16);
        printf("____________________________________________");
        gotoxy(53, 18);
        printf("Ke                      %s", tamp_nama);
        gotoxy(53, 19);
        printf("                        SeaBank: %s", user_inp);
        gotoxy(54, 21);
        printf("____________________________________________");
        gotoxy(53, 23);
        printf("Jumlah Transfer         Rp. %d", kirim);
        gotoxy(53, 24);
        printf("Waktu Transaksi         %02d %02d %04d, %02d:%02d", waktu_info->tm_mday, waktu_info->tm_mon + 1, waktu_info->tm_year + 1900, waktu_info->tm_hour, waktu_info->tm_min);
        gotoxy(54, 27);
        printf("Resi ini merupakan bukti transaksi yang sah.");
        kirim = 0;
    }
    else if (invoice == 4)
    {
        gotoxy(53, 13);
        printf("Dari                    %s", nami);
        gotoxy(53, 14);
        printf("                        SeaBank: %s", norek);
        gotoxy(54, 16);
        printf("____________________________________________");
        gotoxy(53, 18);
        printf("Ke                      %s", tamp_nama);
        gotoxy(53, 19);
        printf("                        SeaBank: %s", user_inp);
        gotoxy(54, 21);
        printf("____________________________________________");
        gotoxy(53, 23);
        printf("Jumlah Transfer         Rp. %d", kirim);
        gotoxy(53, 24);
        printf("Waktu Transaksi         %02d %02d %04d, %02d:%02d", waktu_info->tm_mday, waktu_info->tm_mon + 1, waktu_info->tm_year + 1900, waktu_info->tm_hour, waktu_info->tm_min);
        gotoxy(54, 27);
        printf("Resi ini merupakan bukti transaksi yang sah.");
        kirim = 0;
    }
    else if (invoice == 5)
    {
        gotoxy(53, 13);
        printf("Dari                    %s", nami);
        gotoxy(53, 14);
        printf("                        SeaBank: %s", norek);
        gotoxy(54, 16);
        printf("____________________________________________");
        gotoxy(53, 18);
        printf("Ke                      %s", tamp_nama);
        gotoxy(53, 19);
        printf("                        Dana: %s", tamp_tlp);
        gotoxy(54, 21);
        printf("____________________________________________");
        gotoxy(53, 23);
        printf("Jumlah Transfer         Rp. %d", kirim);
        gotoxy(53, 24);
        printf("Waktu Transaksi         %02d %02d %04d, %02d:%02d", waktu_info->tm_mday, waktu_info->tm_mon + 1, waktu_info->tm_year + 1900, waktu_info->tm_hour, waktu_info->tm_min);
        gotoxy(54, 27);
        printf("Resi ini merupakan bukti transaksi yang sah.");
        kirim = 0;
    }
    else if (invoice == 6)
    {
        gotoxy(53, 13);
        printf("Dari                    %s", nami);
        gotoxy(53, 14);
        printf("                        SeaBank: %s", norek);
        gotoxy(54, 16);
        printf("____________________________________________");
        gotoxy(53, 18);
        printf("Ke                      %s", tamp_nama);
        gotoxy(53, 19);
        printf("                        Shopeepay: %s", tamp_tlp);
        gotoxy(54, 21);
        printf("____________________________________________");
        gotoxy(53, 23);
        printf("Jumlah Transfer         Rp. %d", kirim);
        gotoxy(53, 24);
        printf("Waktu Transaksi         %02d %02d %04d, %02d:%02d", waktu_info->tm_mday, waktu_info->tm_mon + 1, waktu_info->tm_year + 1900, waktu_info->tm_hour, waktu_info->tm_min);
        gotoxy(54, 27);
        printf("Resi ini merupakan bukti transaksi yang sah.");
        kirim = 0;
    }
    do
    {
        set(7, 5);
        gotoxy(7, 32);
        printf("<< Tekan Esc untuk kembali ke menu");

        pilih = getch();
        if (pilih == 27)
        {
            menu();
        }

    } while (pilih != 27);
}

//=============================== SETTING AKUN ====================================
void set_akun()
{
    bingkai(0, 0, 144, 10, 5, 5);
    bingkai(0, 11, 144, 24, 7, 7);
    set(5, 7);
    logo_zara(47, 12);
    set(5, 7);
    gotoxy(10, 33);
    printf("<< Esc untuk kembali ke beranda");
    bingkai_pilih_sett_akun(5, 7);
}
//=============================== BINGKAI FITUR SETT AKUN ========================
void bingkai_pilih_sett_akun(int text, int background)
{
    for (int a = 0; a <= 20; a++)
    {
        for (int b = 0; b <= 4; b++)
        {
            Sleep(0);

            if (a == 0 || a == 20 || b == 0 || b == 4)
            {
                set(text, background);
                gotoxy(35 + a, 20 + b);
                printf("%c", 219);
                set(text, background);
                gotoxy(85 + a, 20 + b);
                printf("%c", 219);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    gotoxy(41, 22);
    printf("EDIT AKUN");

    gotoxy(90, 22);
    printf("HAPUS AKUN");

    pindah_sett_akun();
}

void bingkai_geser_sett_akun(int awal, int text, int background)
{
    set(text, background);
    for (int a = 0; a <= 20; a++)
    {
        for (int b = 0; b <= 4; b++)
        {
            if (a == 0 || a == 20 || b == 0 || b == 4)
            {
                gotoxy(awal + a, 20 + b);
                printf("%c", 219);
            }
        }
    }
}

void pindah_sett_akun()
{
    int awal = 35, n = 1, pilihmenu;

    do
    {
        bingkai_geser_sett_akun(awal, 3, 7);
        pilihmenu = getch();
        if (pilihmenu == 77)
        {
            bingkai_geser_sett_akun(awal, 5, 7);
            awal += 50;
            n++;
            if (n > 2)
            {
                awal = 35;
                n = 1;
            }
        }

        else if (pilihmenu == 75)
        {
            bingkai_geser_sett_akun(awal, 5, 7);
            awal -= 50;
            n--;
            if (n < 1)
            {
                awal = 85;
                n = 2;
            }
        }
        else if (pilihmenu == 13)
        {

            if (pilihmenu == 13 && awal == 35)
            {
                edit_akun();
            }
            else if (pilihmenu == 13 && awal == 85)
            {
                hapus_akun();
            }
        }
        else if (pilihmenu == 27)
        {
            beranda();
        }
    } while (pilihmenu != 13);
}

//================================== ISI SETTING AKUN =================================
void edit_akun()
{
    bingkai(0, 0, 144, 34, 13, 13);
    bingkai(4, 2, 136, 30, 7, 13);
    bingkai(8, 4, 128, 26, 7, 13);

    char nem[100][100], us[100][100], pas[100][100];
    int sld[100];
    int id = 0, dexx = -1;

    FILE *jeng = fopen("akun.txt", "r");
    while (fscanf(jeng, "%[^#]#%[^#]#%[^#]#%d\n", &nem[id], &us[id], &pas[id], &sld[id]) != EOF)
    {
        if ((strcmp(norek, us[id]) == 0) && (strcmp(pin, pas[id]) == 0))
        {
            dexx = id;
        }
        id++;
    }
    fclose(jeng);

    if (dexx != -1)
    {

        set(7, 13);
        gotoxy(45, 15), printf("MASUKKAN NO REKENING BARU : ");
        gotoxy(45, 16);
        printf("_________________________________________________________");
        gotoxy(45, 18);
        printf("MASUKKAN PIN BARU         : ");
        gotoxy(45, 19);
        printf("_________________________________________________________");
        gotoxy(70, 25);
        printf("PERHATIAN !!!");
        gotoxy(57, 26);
        printf("Saat mengedit akun, anda harus mengedit");
        gotoxy(61, 27);
        printf("NO REKENING beserta PIN nya");
        inp_norek_baru();

        FILE *edit = fopen("akun.txt", "w");
        for (int j = 0; j < id; j++)
        {
            if (j == dexx)
            {
                fprintf(edit, "%s#%s#%s#%d\n", nem[j], tamp_valus, tamp_pass, sld[j]);
            }
            else
            {
                fprintf(edit, "%s#%s#%s#%d\n", nem[j], us[j], pas[j], sld[j]);
            }
        }
        fclose(edit);
        gotoxy(65, 23);
        printf("AKUN BERHASIL DIUPDATE !!");
        Sleep(1500);
        halaman_utama();
    }
    else
    {
        gotoxy(65, 23);
        printf("DATA TIDAK DITEMUKAN");
        Sleep(1500);
        halaman_utama();
    }
}
void inp_norek_baru()
{
    int a = 0;
    char inputan;

    while (inputan != 13)
    {
        gotoxy(73 + a, 15);
        inputan = getch();
        if (a > 0 && inputan == 8)
        {
            printf("\b \b");
            a--;
        }
        if (a < 12 && (inputan >= '0' && inputan <= '9'))
        {
            tamp_valus[a] = inputan;
            printf("%c", tamp_valus[a]);
            a++;
        }
        if (a < 12 && inputan == 13)
        {
            gotoxy(73, 15);
            printf("HARUS 12 DIGIT ANGKA");
            Sleep(500);
            gotoxy(73, 15);
            printf("                            ");
            Sleep(250);
            inp_norek_baru();
        }
    }
    tamp_valus[a] = 0;
    //============================== VALIDASI TXT AKUN ========================================
    char nem[100][100], us[100][100], pas[100][100];
    int sld[100];
    int id = 0, dex = -1;
    FILE *jeng = fopen("akun.txt", "r");
    while (fscanf(jeng, "%[^#]#%[^#]#%[^#]#%d\n", &nem[id], &us[id], &pas[id], &sld[id]) != EOF)
    {
        if (strcmp(us[id], tamp_valus) == 0)
        {
            dex = id;
        }
        id++;
    }
    fclose(jeng);
    if (dex != -1)
    {
        gotoxy(73, 15);
        printf("NO REKENING SUDAH TERDAFTAR");
        Sleep(700);
        gotoxy(73, 15);
        printf("                             ");
        Sleep(250);
        inp_norek_baru();
    }
    else
    {
        inp_pin_baru();
    }
}
void inp_pin_baru()
{
    int index = 0;
    char inp;

    while (inp != 13)
    {
        gotoxy(73 + index, 18);
        inp = getch();
        if (index > 0 && inp == 8)
        {
            printf("\b \b");
            index--;
        }
        if (index < 6 && (inp >= '0' && inp <= '9'))
        {
            tamp_pass[index] = inp;
            printf("%c", tamp_pass[index]);
            index++;
        }
        if (index < 6 && inp == 13)
        {
            gotoxy(73, 18);
            printf("HARUS 6 DIGIT ANGKA");
            Sleep(700);
            gotoxy(73, 18);
            printf("                         ");
            Sleep(250);
            inp_pin_baru();
        }
    }
    tamp_pass[index] = 0;

    //============================== VALIDASI TXT AKUN ========================================
    char nem[100][100], us[100][100], pas[100][100];
    int sld[100];
    int id = 0, dex = -1;
    FILE *view = fopen("akun.txt", "r");
    while (fscanf(view, "%[^#]#%[^#]#%[^#]#%d\n", &nem[id], &us[id], &pas[id], &sld[id]) != EOF)
    {
        if (strcmp(pas[id], tamp_pass) == 0)
        {
            dex = id;
        }
        id++;
    }
    fclose(view);

    if (dex != -1)
    {
        gotoxy(73, 18);
        printf("PIN SUDAH TERDAFTAR");
        Sleep(700);
        gotoxy(73, 18);
        printf("                       ");
        Sleep(250);
        inp_pin_baru();
    }
}

void hapus_akun()
{
    bingkai(0, 0, 144, 34, 7, 5);
    char nem[100][100], us[100][100], pas[100][100];
    int sld[100];
    int id = 0, x = 0, s = 0;

    FILE *jeng = fopen("akun.txt", "r");
    while (fscanf(jeng, "%[^#]#%[^#]#%[^#]#%d\n", &nem[id], &us[id], &pas[id], &sld[id]) != EOF)
    {
        if (strcmp(norek, us[id]) == 0)
        {
            dexx = id;
        }
        id++;
    }
    fclose(jeng);

    if (dexx == -1)
    {
        set(7, 5);
        gotoxy(60, 17);
        printf("DATA TIDAK DITEMUKAN");
        Sleep(1000);
        gotoxy(10, 32);
        printf("<< Esc untuk kembali ke beranda");

        pilih = getch();
        if (pilih == 27)
        {
            beranda();
        }
    }
    else
    {
        FILE *data1 = fopen("akun.txt", "w");
        for (int b = 0; b < id; b++)
        {
            if (dexx != b)
            {
                fprintf(data1, "%s#%s#%s#%d\n", nem[b], us[b], pas[b], sld[b]);
            }
        }
        fclose(data1);
        set(7, 5);
        gotoxy(60, 17);
        printf("AKUN BERHASIL DIHAPUS !");
        Sleep(1000);
        halaman_utama();
    }
}

