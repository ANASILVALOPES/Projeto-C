#include <stdio.h> //declaracao de bibliotecas
#include <stdlib.h>
#include <conio.h>

int main() //inicio do codigo

{
printf("\n*****EcoCombustivel*****\n"); //nome do posto

//declaracao de variaveis
            float distancia,volume,consumo;
            float vGas,vEta;
            float precoGasolina, precoEtanol;
            char nomePosto[50];
            char combustivel[11];

//construcao do switch case
            int opcao;
    while(1)
    {

        printf("\n_____Menu_____\n");
        printf("Entre com a opcao desejada:");
        printf("\n1. Calcular consumo medio\n");
        printf("2. Inserir nome do Posto de Combustivel\n");
        printf("3. Comparar precos dos combustiveis\n");
        printf("4. Mostrar ficheiro\n");
        scanf("%d", &opcao);

        switch(opcao)
        {
            case 1: //caso 1

                // código para calcular consumo médio

                 printf("\nA distancia percorrida foi: (km): \n"); //pergunta a distancia percorrida
                 scanf("%f", &distancia); //armazena a distancia

                 printf("\nQuantos litros de combustivel foi gasto: (l): \n"); //pergunta a litragem de combustivel
                 scanf("%f", &volume); //armazena a litragem de combustivel

                 consumo = distancia/volume; //calculo do consumo

                 printf("\n*****O consumo medio do seu carro por quilometragem e de:*****\n"); //informa o consumo medio do carro
                 printf("%.3f km/l\n", consumo); //informa o consumo medio do carro


FILE *fp; //poteiro do ficheiro

fp = fopen("record.txt", "w"); //abre o ficheiro
fprintf(fp, "%.3f", consumo); //insere o consumo medio no ficheiro
fclose(fp); //fecha o ficheiro


                break; //volta ao menu

            case 2: //caso 2

               // NOMEPOSTO

         printf("Insira o nome do posto de combustivel: "); //opcao para o usuario inserir o nome do posto
         scanf("%s", nomePosto); //leitura do nome do posto
         printf("Tudo certo"); //mensagem para o usuario informando que deu certo



fp = fopen("record.txt", "w"); //abre o ficheiro
fprintf(fp, "%s", nomePosto); //insere o nome do posto no ficheiro
fclose(fp); //fecha o ficheiro

                break; //volta ao menu

            case 3:

                // código para comparar preços de combustíveis

                 printf("\n*****GASOLINA OU ETANOL?*****\n"); //pergunta ao usuario se e gasolina ou etanol

            printf("\nQual preco da Gasolina? \n"); //pergunta o preco da gasolina
            scanf ("%f", &precoGasolina); //grava o preco

            printf("\nQual preco da Etanol? \n"); //pergunta o preco do etanol
            scanf ("%f", &precoEtanol); //grava o preco

    // Preco Gasolina * 0.70 = Preco Maximo do Alcool

   if ((precoGasolina * 0.70) < precoEtanol) //calculo
   {
printf("Compensa mais gasolina"); //informa ao usuario que compensa mais gasolina
printf("\nCom qual ira abastecer?\n\n"); //pergunta ao usuario qual ira querer
scanf("%s",combustivel); //armazena a opcao digitada
printf ("\n***************************OBRIGADO(A)!!!******************************"); //mensagem de agradecimento
break; //volta ao menu

FILE *fp; //ponteiro do ficheiro

fp = fopen("record.txt", "w"); //abre o ficheiro
fprintf(fp, "%s", combustivel); //escreve o combustivel dentro do ficheiro
fclose(fp); //fecha o ficheiro
   }

   if ((precoGasolina * 0.70) > precoEtanol) //calculo
   {
printf("Compensa mais etanol"); //informa que compensa mais etanol
printf("\nCom qual ira abastecer?\n\n"); //pergunta ao usuario qual ira querer
scanf("%s",combustivel); //armazena a opcao digitada
printf ("\n***************************OBRIGADO(A)!!!******************************"); //mensagem de agradecimento
break; //volta ao menu

FILE *fp; //ponteiro do ficheiro

fp = fopen("record.txt", "w"); //abre o ficheiro
fprintf(fp, "%s", combustivel); //escreve o combustivel dentro do ficheiro
fclose(fp); //fecha o ficheiro
   }
   if ((precoGasolina * 0.70) == precoEtanol) //calculo
   {
       // Valores sao Equivalentes

       printf("Valores sao equivalentes.\n Com qual ira abastecer?"); //diz que os valores sao equivalentes e pergunta ao usuario qual ira querer
       scanf("%s",combustivel); //armazena a opcao digitada
   }
            printf (" ***************************OBRIGADO(A)!!!******************************"); //mensagem de agradecimento
                break; //volta ao menu

            case 4: //caso 4

            //exibicao do ficheiro

fp = fopen("record.txt", "r"); //abre o ficheiro

printf("Abrindo ficheiro...");

printf("\nPosto: %s\n Consumo medio: %.3f\n Abasteceu com: %s\n", nomePosto, consumo, combustivel); //lista o que ha dentro do ficheiro

fclose(fp); //fecha o ficheiro

return 0; //encerra o programa

                break;

            default: //opcao predefinida
                printf("Opção inválida!\n"); //informa ao usuario que a opcao escolhida e invalida
                break; //encerra
        }
    }


         system("pause");
         return 0; //fim do programa

}

