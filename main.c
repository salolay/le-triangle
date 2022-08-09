#include <stdio.h>
#include <stdlib.h>

int main()
{
int L, i, j;
      printf("donnez nombre de lignes : \n");
      scanf("%d", &L);
      for(i=1;i<=L;i++){
        for(j=1;j<=i;j++){
            printf(" *");
        }
        printf("\n");
      }
    return 0;
}
