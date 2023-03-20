calculo(int num1, int num2, int sub) {
    if (num1>num2) {
        sub = num1-num2;
    }else{
        sub = num2-num1;
    }

}





void main () {
    int num1, num2,sub;


    printf("Digite um numero qualquer: \n");
    scanf("%d", &num1);
    printf("Digite outro numero: \n");
    scanf("%d", &num2);


    printf("O resultado da subtração entre o menor numero com maior eh de: %d\n", calculo(num1,num2,sub));




}