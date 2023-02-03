#include <stdio.h>
#include <stdlib.h>

int main(){
int i, k, l;
{
    printf("Pilihan Menu\n");
    printf("===========\n");
    printf("1.Level 1   \n");
    printf("2.Level 2   \n");
    printf("3.Level 3   \n");
    printf("4.Selesai    \n");
    printf("===========\n");
    printf("Input Pilihan :");
    scanf("%d", &l);

    switch(l){
     int j,k,l;
   case 1 :
       printf("Input Angka :");
       scanf("%d",&l);
        for(j=0; j<=l; j++){
        for(k=0; k<=j;k++){
       printf("%3d", j+k);
        }
       printf("\n");
    }
        break;

   case 2 :
        printf("Masukan Angka :");
        scanf("%d",&l);
         for(j=0; j<=l; j++){
         for(k=1; k<=j;k++){
        printf("%3d", j*k);
           }
        printf("\n");
        }
        break;

   case 3 :
    printf("masukkan angka : ");
            scanf("%d", &l);

        for (i=1; i<=l; i++){
        for (j=1; j<=l-i; j++){
           printf(" ");
                }
        for (k=1; k<=i; k++){
           printf("%d", k);
                }
        for (j=i-1; j>=1; j--){
            printf("%d", j);
                }
            printf("\n");
         }
        for (i=l-1; i>=1; i--){
        for (k=1; k<=l-i; k++){
            printf(" ");
                }
        for (j=1; j<=i ;j++){
            printf("%d", j);
                }
        for (j=i-1; j>=1; j--){
            printf("%d", j);
                }
            printf("\n");
            }

        break;
   case 4:
    printf("Terima Kasih!");
        break;

   default:
    printf("PILIHAN TIDAK ADA!!!");
}
}
}
