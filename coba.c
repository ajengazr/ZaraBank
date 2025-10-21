#include<stdio.h>
void main(int text, int background)
{
    // bingkai(0, 0, 144, 34, 11, 7);
    for (int a = 0; a <= 20; a++)
    {
        for (int b = 0; b <= 4; b++)
        {
            // Sleep(0);

            if (a == 0 || a == 20 || b == 0 || b == 4)
            {
                // set(text, background);
                // gotoxy(10 + a, 18 + b);
                printf("%c", 219);
                // set(text, background);
                // gotoxy(60 + a, 18 + b);
                printf("%c", 219);
                // set(text, background);
                // gotoxy(110 + a, 18 + b);
                printf("%c", 219);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    // gotoxy(17, 20);
    printf("SIGN IN");

    // gotoxy(66, 20);
    printf("REGISTRASI");

    // gotoxy(118, 20);
    printf("ABOUT");

    pindah_utama();
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
            // exit(0);
        }
    } while (pilihmenu != 13);
}

