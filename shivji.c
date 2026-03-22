#include <stdio.h>

int main()
{
    float temp;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &temp);

    if (temp > 30)
    {
        printf("Weather is Hot 🔥\n");
    }
    else if (temp >= 20 && temp <= 30)
    {
        printf("Weather is Pleasant 😊\n");
    }
    else if (temp >= 10 && temp < 20)
    {
        printf("Weather is Cool 🌤️\n");
    }
    else
    {
        printf("Weather is Cold ❄️\n");
    }

    return 0;
}