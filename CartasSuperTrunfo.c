#include <stdio.h>
 
int main(){

char a, b, c, d, f, g, h;
char str[1][2][3][4];
int populacao1,populacao2;
float Área1, Área2;
float Pib1, Pib2;
int turísticos1, turísticos2;

printf("digite o estado:");
scanf("%c", &a);

printf("digite a cidade:");
scanf("%s" , &str);

printf("digite a populacao:");
scanf("%d", &populacao1);

printf("digite a Área:");
scanf("%f", &Área1);

printf("digite o Pib:");
scanf("%f", &Pib1);

printf("pontos turísticos:");
scanf("%d", &turísticos1);



printf("estado:%c" , a);
printf("cidade:%s" ,str);
printf("população:%d" ,populacao1);
printf("Área:%f" , Área1);
printf("Pib:%f" ,Pib1);
printf("turísticos:%d" , turísticos1);


printf("digite o estado:");
scanf("%s" , &b);

printf("digite a cidade:");
scanf("%s" , &str);

printf("digite a população:");
scanf("%d" , &populacao2);

printf("digite a Área:");
scanf("%f" , &Área2);

printf("digite o pib:");
scanf("%f", &Pib2);

printf("pontos turísticos:");
scanf("%d" , &turísticos2);

printf("estado:%c" , b);
printf("cidade:%s" , str);
printf("população:%d" , populacao2);
printf("Área:%f" , Área2);
printf("Pib2:%f" ,Pib2);
printf("turísticos:%d" , turísticos2);






return 0;
}