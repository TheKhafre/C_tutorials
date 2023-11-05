#include <stdio.h>

int main(void)
{
	int a[2][3][4], i, j, k;
	for(i = 0; i < 2; i++){
		for(j = 0; j < 3; j++){
			for(k = 0; k < 4; k++){
				printf("enter array elements");
				scanf("%d", &a[i][j][k]);
			}
		}
	}

	for(i = 0; i < 2; i++){
                for(j = 0; j < 3; j++){
                        for(k = 0; k < 4; k++){
                                printf("\t%d", a[i][j][k]);
                        }
			printf("\n");
                }
		printf("\n");
        }
}
