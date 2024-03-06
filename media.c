#include <stdio.h>

int main()
{
    int primo_numero ;
    int secondo_numero ;
    int media;
    
    printf("\ninserisci il primo numero ");
    scanf("%d", &primo_numero);
    
    printf("\ninserisci il secondo numero ");
    scanf("%d",&secondo_numero);
    
    media = (primo_numero + secondo_numero)/2 ;
    
    printf("la media è uguale a : %d\n" , media);
    
    
    
    
    

    return 0;
}