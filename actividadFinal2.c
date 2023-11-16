//Problema 2
#include <stdio.h>
void leerMatriz(int tam, int matriz[tam][tam]){
    printf("Ingrese los elementos de la matriz %dx%d:\n", tam, tam);
	int i,j;
    for (i=0;i<tam;++i){
        for ( j=0;j<tam;++j){
            printf("Posicion [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}
void imprimirMatriz(int tam, int matriz[tam][tam]){
    printf("Matriz ingresada:\n");
	int i, j;
    for (i=0;i<tam;++i){
        for (j=0;j<tam;++j){
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}
int esMatrizMagica(int tam, int matriz[tam][tam]){
    int sumaFila1=0,i,j;
    for (j=0;j<tam;++j){
        sumaFila1+=matriz[0][j];
    }
    int sumaFila2=0;
    for (j=0;j<tam;++j){
        sumaFila2+=matriz[1][j];
    }
    int sumaFila3=0;
    for (j=0;j<tam;++j){
        sumaFila3 += matriz[2][j];
    }
    int sumaColumna1=0;
    for (i=0;i<tam;++i){
        sumaColumna1+=matriz[i][0];
    }
    int sumaColumna2=0;
    for (i=0;i<tam;++i){
        sumaColumna2+=matriz[i][1];
    }
    int sumaColumna3=0;
    for (i=0;i<tam;++i){
        sumaColumna3+=matriz[i][2];
    }
    int sumaDiagonal=0;
    for (i=0;i<tam;++i){
        sumaDiagonal+=matriz[i][i];
    }
    int sumaDiagonalSecundaria=0;
    for (i=0;i<tam;++i){
        sumaDiagonalSecundaria+=matriz[i][tam-1-i];
    }

    printf("\nSuma de la fila 1: %d\n", sumaFila1);
    printf("Suma de la fila 2: %d\n", sumaFila2);
    printf("Suma de la fila 3: %d\n", sumaFila3);
    printf("Suma de la columna 1: %d\n", sumaColumna1);
    printf("Suma de la columna 2: %d\n", sumaColumna2);
    printf("Suma de la columna 3: %d\n", sumaColumna3);
    printf("Suma de la diagonal principal: %d\n", sumaDiagonal);
    printf("Suma de la diagonal secundaria: %d\n", sumaDiagonalSecundaria);

    return (sumaFila1==sumaFila2 && sumaFila2==sumaFila3 &&
            sumaFila3==sumaColumna1 && sumaColumna1==sumaColumna2 &&
            sumaColumna2==sumaColumna3 && sumaColumna3==sumaDiagonal &&
            sumaDiagonal==sumaDiagonalSecundaria);
}

int main(){
    int tam;
    printf("Ingrese el tamano de la matriz: ");
    scanf("%d", &tam);

    int matriz[tam][tam];

    leerMatriz(tam, matriz);
    imprimirMatriz(tam, matriz);

    if (esMatrizMagica(tam, matriz)) {
        printf("\nLa matriz es magica.\n");
    } else {
        printf("\nLa matriz no es magica.\n");
    }
    return 0;
}

