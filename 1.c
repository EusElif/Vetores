#include <stdio.h>
#include <stdlib.h>

int main(){
    int n[60],i,m[60],p[60],x=0,y=0;
    //y e m <- impar; x e p <- par
    for(i=0;i<5
    ;i++){
    //lendo os numeros
        printf("N:");
        scanf("%d",&n[i]);
        //separação entre pares e impares
        if(n[i]%2==0){
            p[x]=n[i];
            x++;
        }else{
            m[y]=n[i];
            y++;
        }
    }
    //mostrando numeros pares
    printf("Quantidade de Numeros Pares: %d\n",x);
    for(i=0;i<x;i++){
        printf("Numero Par: %d\n",p[i]);
    }
    //mostrando numeros impares
    printf("Quantidade de Numeros Impares: %d\n",y);
    for(i=0;i<y;i++){
        printf("Numero Impar: %d\n",m[i]);
    }
}
