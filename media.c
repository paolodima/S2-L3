#include <stdio.h>

int main()
{
    int primo_numero ;
    int secondo_numero ;
    float media;
    
    printf("\ninserisci il primo numero ");
    scanf("%d", &primo_numero);
    
    printf("\ninserisci il secondo numero ");
    scanf("%d",&secondo_numero);
    
    media = (primo_numero + secondo_numero)/2 ;
    
    printf("la media è uguale a : %2f\n" , media);
    
    
    
    
    

    return 0;
}