#include<stdio.h>

/*3. Faça um procedimento que receba uma matriz A(10,10), por parâmetro, e realize as seguintes trocas:

O procedimento deve retornar a matriz alterada.*/
void imprimir(int mat_A[10][10]){
    for(int i =0; i< 10; i++){
        for(int j =0; j< 10; j++){
            printf("%d\t", mat_A[i][j]);
        }
        printf("\n");
    }
}
// a linha 2 com a linha 8;
void linha2_linha8(int mat_A[10][10]){
    for(int j =0; j < 10; j++){
       int temp = mat_A[1][j];
        mat_A[1][j] = mat_A[7][j];
        mat_A[7][j] = temp; 
    }
}
// a coluna 4 com a coluna 10;
void coluna4_coluna10(int mat_A[10][10]){
    for(int i =0; i < 10; i++){
       int temp = mat_A[i][3];
        mat_A[i][3] = mat_A[i][9];
        mat_A[i][9] = temp; 
    }
}
//a diagonal principal com a secundária;
void diagonais(int mat_A[10][10]){
    for(int i =0; i < 10; i++){
       int temp = mat_A[i][i];
        mat_A[i][i] = mat_A[1][9-i];
        mat_A[i][9-i] = temp;
    }
}
//a linha 5 com a coluna 10;
void linha5_coluna10(int mat_A[10][10]){
    for(int i =0; i < 10; i++){
        int temp = mat_A[4][i];
        mat_A[4][i] = mat_A[i][9];
        mat_A[i][9] = temp;
    }
}

main(){
    int mat_A[10][10];
    for(int i =0; i< 10; i++){
        for(int j =0; j< 10; j++){
            mat_A[i][j] = i * 10 + j;
        }
    }
    // matriz original
    imprimir(mat_A);
    printf("---------------------------------------------------------------------------------\n");
    linha2_linha8(mat_A);
    coluna4_coluna10(mat_A);
    diagonais(mat_A);
    linha5_coluna10(mat_A);
    // matriz modificada
    imprimir(mat_A);
}