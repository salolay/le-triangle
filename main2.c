#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ligne , i, j;
    printf("donnez nombre de lignes :\n");
    scanf("%d", &ligne);
    for(i=1;i<=ligne;i++){
        for(j=1;j<=ligne-i;j++){
            printf("  ");
        }
        for(j=1;j<=(2*i-1);j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
