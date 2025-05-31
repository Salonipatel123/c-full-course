#include <stdio.h>
void goodMorning();
void goodAfternoon();
void goodNight();
int main()
{
    goodMorning();
    return 0;
}
void goodMorning()
{
    printf("GoodMorning saloni\n");
    goodAfternoon();
}
void goodAfternoon()
{
    printf("GoodAfternoon saloni\n");
    goodNight();
}
void goodNight()
{
    printf("GoodNight saloni\n");
}
