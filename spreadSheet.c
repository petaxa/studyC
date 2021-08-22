#include <stdio.h>

int main(void){
	int mat[3][4] = {
		{20,30,50,10},
		{12,40,32,49},
		{134,345,443,21}
	};
	int i,j;
	int sum_r;
	int sum_c[4] = {0,0,0,0};
	int total = 0;

	for(j=0;j<3;j++){
		sum_r = 0;
		for(i=0;i<4;i++){
			printf("%4d ",mat[j][i]);
			sum_r += mat[j][i];
			sum_c[i] += mat[j][i];
		}
		printf("| %4d\n",sum_r);
	}
	printf("------------------------\n");
	for(i = 0;i<4;i++){
		printf("%4d ",sum_c[i]);
		total += sum_c[i];
	}
	printf("| %4d \n",total);
}

