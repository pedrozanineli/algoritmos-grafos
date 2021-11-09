#include <stdio.h>
#include <stdlib.h>

void caminhoDeEuler(int matriz[5][5]){
    int total = 0, grau, i = 0, j, n = 5;

    do{
        grau = 0;
        for(j=0; j < n; j++){
            grau = grau + *matriz[i,j];
        }
        if(grau%2 == 1){
            total = total + 1;
        }
        i = i + 1;
    }while(total<=2 && i<n);

    if(total > 2){
        printf("Não existe um caminho de Euler.");
    }else{
        printf("Existe um caminho de Euler.");
    }
}

int main(){
    int teste[5][5]={{0,1,1,0,0},{1,0,1,0,0},{1,1,0,1,0},{0,0,1,0,1},{0,0,0,1,0}};

    printf("Testando se existe um caminho de Euler para a seguinte matriz:\n");

    for(int i = 0; i<5; i++){
        for(int j = 0; j<5; j++){
            printf("%d ", teste[i][j]);
        }
        printf("\n");
    }

    caminhoDeEuler(teste);

    return 0;
}
