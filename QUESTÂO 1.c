#include <stdio.h>
#include <string.h>

int main() {
    int i, j, tamanho;
    char temp;
    char str[101]; 

    printf("Digite a quantidade de letras que ira utilizar: ");
    scanf("%d", &tamanho);

    printf("Digite uma sequência aleatória de %d letras: ", tamanho);
    scanf("%s", str);

    if (strlen(str) != tamanho) {
        printf("O número de letras digitado não corresponde ao tamanho especificado.\n");
        return 1;
    }

    for (i = 0; i < tamanho - 1; i++) {
    	
        for (j = 0; j < tamanho - i - 1; j++) {
        	
            if (str[j] > str[j + 1]) {

                temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
                
            }
            
 }
        
    }

    printf("String ordenada: %s\n", str);

    return 0;
}

