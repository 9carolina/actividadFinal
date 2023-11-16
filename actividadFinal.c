#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int n=5,m=7,A[5][7],suma=0;
//1ra funcion
void generarArreglo(){
	srand(time(NULL));
	int i,j;
	printf("Matriz: \n");
	for(i=0;i<n;i++){
		for (j=0;j<m;j++){
			A[i][j]=rand()%2+1;
			printf("%d  ", A[i][j]);	
		}
		printf("\n");
	}
}
//1.Suma de Diagonal Principal
void sumDiagonal() {
    int i,j;
    for (i=0;i<n;i++) {
        for (j=0;j<m;j++) {
            if (i==j) {
                suma+=A[i][j];
            } 
        }
    }
    printf("Suma de la diagonal principal: %d", suma);
}
//2.Suma de 1ra Fila
void sumPrimFi(){
	int j, sumPrimFi=0;
    for (j=0;j<m;j++) {
        sumPrimFi+=A[0][j];
    }
    printf("\nSuma de la primera fila: %d", sumPrimFi);
}	
//3.Suma de ultima columna
void sumUltCol(){
	int i, sumUltCol=0;
    for (i=0;i<n;i++) {
        sumUltCol+=A[i][m-1];
    }
    printf("\nSuma de la ultima columna: %d\n", sumUltCol);
}
//4.Suma de filas impares
void sumFilasImpares(){
	 int i,j,sumaFila1=0,sumaFila3=0,sumaFila5=0;

    for (j=0;j<m;j++) {
        sumaFila1+=A[0][j];
        sumaFila3+=A[2][j];
        sumaFila5+=A[4][j];
    }

    printf("\nSuma de la fila 1: %d\n", sumaFila1);
    printf("Suma de la fila 3: %d\n", sumaFila3);
    printf("Suma de la fila 5: %d\n", sumaFila5);

    int sumaTotalFilas=sumaFila1+sumaFila3+sumaFila5;
    printf("Suma de las filas impares: %d\n", sumaTotalFilas);
}	
//5. Suma de columnas pares
void sumColPares(){
	int i,j,sumaCol2=0,sumaCol4=0,sumaCol6=0;
    for (i=0;i<n;i++) {
        sumaCol2+=A[i][1];
        sumaCol4+=A[i][3];
        sumaCol6+=A[i][5];
    }
    printf("\nSuma de la columna 2: %d\n", sumaCol2);
    printf("Suma de la columna 4: %d\n", sumaCol4);
    printf("Suma de la columna 6: %d\n", sumaCol6);

    int sumaTotalCol=sumaCol2+sumaCol4+sumaCol6;
    printf("Suma de las columnas pares: %d\n", sumaTotalCol);
}	
//6. Suma del triangular superior mas diagonal
void sumTriSupMasDiagonal(){
    int i,j,sumDiagonal=0,sumTriSupMasDiagonal=0;

    for (i=0;i<n;i++){
        for (j=i;j<m;j++){
            sumTriSupMasDiagonal+=A[i][j];
            if (i==j){
                sumDiagonal+=A[i][j];
            }
        }
    }
    printf("\nSuma de la diagonal: %d\n", sumDiagonal);
    printf("Suma del triangular superior mas la diagonal: %d\n", sumTriSupMasDiagonal);
}
//7. Suma del triangular inferior mas diagonal
void sumTriInfMasDiagonal(){
    int i,j,sumDiagonal=0,sumTriInfMasDiagonal=0;

    for (i=0;i<n;i++) {
        for (j=0;j<=i;j++) {
            sumTriInfMasDiagonal+=A[i][j];
            if (i==j){
                sumDiagonal+=A[i][j];
            }
        }
    }
    printf("\nSuma de la diagonal: %d\n", sumDiagonal);
    printf("Suma del triangular inferior mas la diagonal: %d\n", sumTriInfMasDiagonal);
}

int main(){
	generarArreglo();
	sumDiagonal();
	sumPrimFi();
	sumUltCol();
	sumFilasImpares();
	sumColPares();
	sumTriSupMasDiagonal();
	sumTriInfMasDiagonal();
	return 0;
}
