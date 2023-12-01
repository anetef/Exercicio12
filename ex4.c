/*Faça um procedimento que receba, por parâmetro, uma matriz 61x10. O procedimento deve somar individualmente as
 colunas da matriz e armazenar o resultado na 61a linha da matriz. O procedimento deve retornar a matriz alterada*/

 //Faça um procedimento que receba, por parâmetro, uma matriz 61x10.
 #include<stdio.h>
 void imprimir(int mat[61][10]){
    for(int i=0; i<61; i++){
        for(int j=0; j<10; j++){
            printf("%d\t",mat[i][j]);
        }
         printf("\n");
    }
 }
 //O procedimento deve somar individualmente as colunas da matriz e armazenar o resultado na 61a linha da matriz.
 void soma_colunas(int mat[61][10]){
    for(int j=0; j<61; j++){
        mat[60][j]=0;
    }
    for(int j=0; j<10;j++){
        for(int i=0; i<60; i++){
            mat[60][j]+= mat[i][j];
        }
    }
 }

 int main(){
    int mat[61][10];
    for(int i =0; i<61 ; i++){
        for(int j=0; j<10 ; j++){
            mat[i][j] = i*10+j;  
        }
    }
    //matriz original
    imprimir(mat);
    printf("-------------------------------------------------------------------------------\n");
    soma_colunas(mat);
    //matriz com soma de colunas
    imprimir(mat);
    
 }