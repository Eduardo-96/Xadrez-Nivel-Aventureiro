#include <stdio.h>

int main(){

    int i, torre = 0, bispo = 0, rainha = 0, opcao;

    printf(" Vamos Jogar Xadrez \n");
    printf(" DIgite a peça que quer movimentar \n");
    
    do{
    printf(" 1. TORRE \n");
    printf(" 2. BISPO \n");
    printf(" 3. RAINHA \n");
    printf(" 4. CAVALO\n");
    printf(" 5. SAIR \n");
    printf(" Digite a opção: ");
    scanf("%d", &opcao);

        switch (opcao)                    // CRIEI ESSE SWITCH PARA COLOCAR AS DIFERENTE TIPOS DE  FORMAS PRA USAR
        {
        case 1:
            for(torre = 0; torre < 5; torre++){ // O FOR É PARA ELE REFEPIR O CONANDO ENQUANTO NÃO CHEGAR A 5
                printf(" Direita\n");       //imprime a direção do movimento
            }
            break;
        case 2:
            do{ //o 'do' vai e
                printf("cima, direita \n"); 
                bispo++;           
            }while (bispo <= 5);

            break;
        case 3:
            while (rainha <=5){
                printf(" Cima \n");
                rainha++;
            }
            break;
         case 4:
                                        // eu instanciei o cavalo com o 1 para que ele ande unicamente duas casas
            for(int cavalo = 1; cavalo <=2; cavalo++){ // o codigo vai executar 2 vezes
                printf("cima\n");       // a cada vez executada ele vai printar a paralavra cima
                if( cavalo == 2){       // quando chegar em duas execuções para cima ele entra em um loop de verificação
                    int j = 1;          // instanciei uma variavel para verificar o numero de casas que ele pode andar
                        while (j <= 1){ // enquanto o j for <= 1 ele vai executar
                        printf("direita\n"); 
                        j++;            // somatoria para não ficar infinitamente contando;
                        }
                }
            }
         break;  
         case 5:
            printf(" VocÊ saiu do Jogo \n");
            break;   

        default:
        printf(" Opção invalida \n");
            break;
        }
            
    } while (opcao != 5);
    

return 0;
}