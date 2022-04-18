#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    char ogrenci[4][20] = {"Kaan","Fatih","Hasan","Mert"};

    for(int i=0;i<4;i++) {
        printf("%s\n",ogrenci[i]);
    }


    return 0;
}
