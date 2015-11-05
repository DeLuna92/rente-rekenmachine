#include <stdio.h>
#include <cs50.h>
#define RENTE 0.007

int main(void)
{
    float bedrag;
    float rentebedrag;
    
    do
    {
    printf("Voer hier je gespaarde bedrag in:\n");
    bedrag = GetFloat();
    }
    while (bedrag < 0);
    
    rentebedrag = bedrag * RENTE;
    printf("%.2f\n", rentebedrag);
    return 0;
}
