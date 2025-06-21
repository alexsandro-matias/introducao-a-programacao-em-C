#include <stdio.h>
#include <stdlib.h>



//7. Faça uma função que receba uma temperatura em graus Celsius e retorne-a convertida
//em graus Fahrenheit. A fórmula de convers˜ao é: F = C* (9.0 / 5.0) + 32.0, sendo F a
//temperatura em Fahrenheit e C a temperatura em Celsius.

float converteCelsiusParaFahrenheit(float celsius)
{
    return celsius * (9.0 / 5.0) + 32.0;
}



int main()
{
    float temperatura;
    printf("Digite uma temperatura em °C: ");
    scanf("%f", &temperatura);


    float temperaturaConvertida = converteCelsiusParaFahrenheit(temperatura);
    printf("%.2f°C = %.2f°F", temperatura, temperaturaConvertida);
    return 0;


}
