#include <stdio.h>
#include <conio.h>
void printSinWave(int wave_ht, int wave_lngth)
{
    int is = 1, os = 2;
    for (int i = 1; i <= wave_ht; i++) {
        for (int j = 1; j <= wave_lngth; j++) {
            for (int k = 1; k <= os; k++) {
                printf(" ");
            }
            printf("0");
             for (int k = 1; k <= is; k++)
                printf(" ");           
            printf("0");
            for (int k = 1; k <= os; k++)
                printf(" ");
              printf(" ");
        }
        os = (i + 1 != wave_ht);
        is = (i + 1 != wave_ht) ? 3 : 5;
        printf("\n");
    }
}
int main()
{
    int wave_ht = 5, wave_lngth = 10;
    printSinWave(wave_ht, wave_lngth);
    return 0;
}
