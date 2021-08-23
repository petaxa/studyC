#include <stdio.h>
#include <string.h>

/*void swapbyval(int,int);
void swapbyref(int *,int *);

int main(void){
	int a = 2,b = 3;

	printf("a=%d,b=%d\n",a,b);
	swapbyval(a,b);
	printf("swapByVal\na=%d,b=%d\n",a,b);
	swapbyref(&a,&b);	
	printf("swapByRef\na=%d,b=%d",a,b);
}

void swapbyval(int x,int y){
	int temp;
	temp = x;
	x = y;
	y = temp;
}

void swapbyref(int *x,int *y){
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}*/

int main(int argc,char *argv[]){
	int i;
	if(argc <= 1){
		printf("引数を指定してください。\nenum hoge unya:hoge、unyaを配列番号とともに出力します。\ncount hoge unya:引数の個数を出力します。\n");
		return 1;
	}
	if(strcmp(argv[1],"enum")==0)
		for(i = 0;i<argc;i++)
			printf("argv[%d]:%s\n",i,argv[i]);
	else if(strcmp(argv[1],"count")==0)
			printf("引数の個数は%d個。\n",argc-1);
	return 0;
	}
