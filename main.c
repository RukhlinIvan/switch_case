#include <stdio.h>


void main(){
    int a,b,c,d,e,f,g;
    printf("Enter two numbers:");
    scanf(" %d%d", &a, &b); 
    printf("\n");
    printf("выбирай функцию: 1-сумма 2-разность 3-произведение 4-частное \n");
    scanf("%d",&c);
    d = a + b;
    e = a - b;
    f = a * b;
    g = a / b;
    switch(c){
        case 1: printf("%d \n", d); break;
        case 2: printf("%d \n", e); break;
        case 3: printf("%d \n", f); break;
        case 4: printf("%d \n", g); break;
        default: printf("нет такой функции \n");
}
}