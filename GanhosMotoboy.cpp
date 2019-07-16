#include<stdio.h>
#include<stdlib.h>

int main()
{
	float a, b, c, d, e, f, g, h, i, j, k, bruto, des, liquido; /*o número máximo de corridas em um dia gira em torno de 10*/

		printf("**************************\n");
		printf("CALCULO DOS GANHOS DO DIA:\n");/*Título*/
		printf("**************************\n");
		printf("\n");/*Quebra de linha*/
		printf("digite o valor da primeira corrida:\n");
			scanf_s("%f", &a);
		printf("digite o valor da segunda corrida:\n");
			scanf_s("%f", &b);
		printf("digite o valor da terceira corrida:\n");
			scanf_s("%f", &c);
		printf("digite o valor da quarta corrida:\n");
			scanf_s("%f", &d);
		printf("digite o valor da quinta corrida:\n");
			scanf_s("%f", &e);
		printf("digite o valor da sexta corrida:\n");
			scanf_s("%f", &f);
		printf("digite o valor da setima corrida:\n");
			scanf_s("%f", &g);
		printf("digite o valor da oitava corrida:\n");
			scanf_s("%f", &h);
		printf("digite o valor da nona corrida:\n");
			scanf_s("%f", &i);
		printf("digite o valor da decima corrida:\n");
			scanf_s("%f", &j);
		printf("digite o valor da decima primeira corrida:\n");
			scanf_s("%f", &k);
		printf("\n");
	bruto = a + b + c + d + e + f + g + h + i + j + k;
		printf("GANHO BRUTO:R$%.2f\n", bruto);
		printf("\n");
	des = bruto * 35 / 100; /*ganho bruto - 20% do aplicativo e - 15%da gasolina(35%)*/
	liquido = bruto - des;
		printf("GANHO LIQUIDO:R$%.2f\n", liquido);
		printf("\n");

	system("pause");
	return 0;
}