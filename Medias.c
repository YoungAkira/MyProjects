
#include <stdio.h>

int main(){
    float n1,n2,n3,media;
    char option;
    
    
    printf("Digite 3 notas: ");
    scanf("%f %f %f", &n1, &n2, &n3);
    
    printf("Digite uma das letras (a,b ou c): ");
    scanf(" %c", &option);
    
    switch (option) {
case 'a':
    media = (n1+n2+n3)/3.0;
    printf ("Media Aritmetica eh: %.2f\n", media);
    break;
    
 case 'b':
    media = (n1*3.0 + n2*3.0 + n3*4.0)/10.0;
    printf("Media Ponderada (3,3,4): %2.f\n", media);
    break;
         
         
case 'c':
     media = 3.0/((1.0/n1)+ (1.0/n2) + (1.0/n3));
     printf("Media Harmonica: %.2f\n", media);
     break;
     
 default:
     printf("Opção invalida:\n");
     break;
    }
     
     
  return 0;
}
