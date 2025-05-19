#include <stdio.h>

int main(int argc, char* argv[]) {
    double pi=3.141592;
    double raio, area, perimetro;
    printf("Digite o raio: ");
    scanf("%lf", &raio);
    area=pi*(raio*raio);
    perimetro=2.0*pi*raio;
    printf("Raio:%lf\n", raio);
    printf("Area:%lf\n", area);
    printf("Perimetro:%lf\n", perimetro);
    return 0;
}
