#include <stdio.h>
float ConvertcCelFahrenhit(float c)
{
    return ((c * 9.0 / 5.0) + 32.0);
}
int main()
{
    float celsius, fahrenheit;
    printf("Enter tempratuer in celsius: ");
    scanf("%f", &celsius);
    fahrenheit = ConvertcCelFahrenhit(celsius);
    printf("%.2f celsius = %.2f fahrenheit", celsius, fahrenheit);
    return 0;
}