//Faça uma função que recebe a idade de uma pessoa em apresente sua idade expressa em dias, meses e anos.
#include<stdio.h>

int dia_no_mes(int mes){
    int dias_mes[12]= {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    return dias_mes[mes - 1];
}

void calcular_idade(int dia_nas, int mes_nas, int ano_nas, int ano, int mes, int dia){
    int anos, dias, meses;
    if(dia >= dia_nas){
        dias = dia - dia_nas;
    }else{
        dias = dia + dia_no_mes(mes_nas) - dia_nas;
        mes--;
    }
    if(mes >= mes_nas){
        meses= mes - mes_nas;
    }else{
        meses = mes + 12 - mes_nas;
        ano--;
    }
    anos = ano - ano_nas;

    printf("Idade: %d anos/ %d meses/ %d dias", anos, meses, dias);

}
int main(){
    int dia, ano, mes;
    int dia_nas, mes_nas, ano_nas;

    printf("Digite a data de nascimento (dd mm aa): ");
    scanf("%d %d %d", &dia_nas, &mes_nas, &ano_nas);

    printf("Digite a data atual (dd mm aa): ");
    scanf("%d %d %d", &dia, &mes, &ano);

    // chamar a função

    calcular_idade(dia_nas, mes_nas, ano_nas, ano, mes, dia);
}