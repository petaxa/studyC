#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <malloc.h>
#include <memory.h>
main(){

	/*printf("hello\nworld\n");
	unsigned char age = 25;
	double height = 166.7123123123;
    	float weight = 58.5;
    	char ascII = 65;
    	printf("weight:%d\n",weight);
    	printf("文字コード：%d,文字：%c\n",ascII,ascII);
    	printf("height:%3.2f",height);*/

    	/*char c;
    	char s[10];
    	printf("long:%dbite\n",sizeof(long));
    	printf("char:%dbite\n",sizeof(c));
    	printf("string:%dbite\n",sizeof(s));*/

    	/*printf("3/2=%d\n",3/2);
    	printf("3.0/2=%f\n",3.0/2);
    	printf("3.0/2.0=%1.2f\n",3.0/2.0);*/


    	/*int score = 100;
	float ave = 70.3;
	
	if(score>ave){
		if(score==100){
			printf("perfect");
		}else{
			printf("もうすこし");
		}
	}else{
		printf("平均まで%1.2f点です。\n",ave-score);
	}*/	
        

	/*int i;
	for(i=33;i<80;i++)
		if(i%3==2){
			printf("文字コード:%d\t文字:%c\n\n",i,i);
		}else{
			printf("文字コード:%d\t文字:%c\t\t",i,i);
		}*/

	/*char a;
	do{
		a=getchar();
		printf("%c",a);
	}while(a!='e');*/


	/*
	char c = '\0';
	char prevletter;
	int wordnum;
	int word_in;

	while(1){
		wordnum = 0;
		word_in = 0;
		prevletter = '\0';
		printf("Type in English.\n");
		while(1){
			c = getchar();
			if(c == '\n'){
				if(word_in)
					wordnum++;
				break;
			}
			prevletter = c;
			if(c == ' '||c == '.'){
				if(word_in){
					wordnum++;
					word_in = 0;
				}
			}else
				word_in = 1;
		}
	
		if(prevletter == '\0')
			break;
		printf("ワード数:%d\n",wordnum);
	}*/

	/*int X,Y,Z,U;
	int x = 4;
	int y = 2;
	int z = 2;
	int u = 2;

	int a[10][10][10][10] = {
		{
			{
				{1,2,3,7},
				{4,5,6,8}
			},
			{
				{10,20,30,40},
				{50,60,70,80}
			}
		},
		{
			{
				{100,200,300,400},
				{500,600,700,800}
			},
			{
				{101,102,103,104},
				{105,106,107,108}
			}
		}
	};
	for(U=0;U<u;U++){
		for(Z=0;Z<z;Z++){
			for(Y=0;Y<y;Y++){
				for(X=0;X<x;X++)
					printf("a[%d][%d][%d][%d] = %d ",U,Z,Y,X,a[U][Z][Y][X]);
				printf("\n");
			}
			printf("\n");
		}
		printf("\n");
	}*/

	/*char a,b;
	printf("aのアドレスは%x、bのアドレスは%x\n",&a,&b);
	*/


	/*
	char x = 4, y;
	char *p = &x;
	y = *p;
	printf("変数xの値は%dです\n",y);
	*/

	/*char s[] = "I love cat";
	char c = 'd';
	char *p = NULL;

	printf("%sに%c",s,c);
	p = strchr(s,c);
	if(!p)
		printf("はありません\npointer:%d",p);

	else
		printf("を発見しました\npointer:%d",p);
	*/

	/*
	int a[4] = {10,20,30,40};
	printf("*(a+3):%d\na[3]:%d\n",*(a+3),a[3]);
	printf("*a+3:%d\na[0]+3:%d\n",*a+3,a[0]+3);	
	*/
/* */
/*	char *b; */
/*	char a[4] = {20,40,30,10}; */
/*	b = (char *)malloc(sizeof(char)*200); */
/*	if(!b) */
/*		return 0; */
/*	memcpy(b,a,sizeof(char)*4); */
/*	printf("%d %d %d %d\n",*b,*(b+1),*(b+2),*(b+3)); */
/*		free(b); */
/*	 */
	
	

	/*commit test*/

	/*char s[20];
	int i = 0;
	FILE *fp;
	fp = fopen("test.txt","r");
	if(fp == NULL)
		return 0;
	while(1){
		fgets(s,20,fp);
		if(feof(fp))
			break;
		printf("%04d:%s",i,s);
		i++;
	}
	fclose(fp);*/

	/*FILE *fp;
	int a = 100,b = 5,c = 40;
	int x = 1,y = 10,z = 100;
	char delm[] = "----====----\n";

	fp = fopen("test.txt","w");
	if(fp == NULL)
		return 0;
	fputs(delm,fp);
	fprintf(fp,"%4d%4d%4d\n%4d%4d%4d\n",a,b,c,x,y,z);
	fputs(delm,fp);
	fclose(fp);*/
	FILE *fp;
	char filename[] = "bintest.dat";
	int buf_w[10],buf_r[10];
	int i;

	/*
	for(i=0;i<10;i++)
		buf_w[i] = (i+1)*10;
	if(!(fp = fopen(filename,"wb")))
		return 0;
	if(fwrite(buf_w,sizeof(int),10,fp) != 10){
		fclose(fp);
		return 0;
	}
	fclose(fp);

	if(!(fp = fopen(filename,"rb")))
		return 0;
	if(fread(buf_r,sizeof(int),10,fp) != 10){
		fclose(fp);
		return 0;
	}
	fclose(fp);

	for(i=0;i<10;i++)
		printf("%d ",buf_r[i]);
	*/

	char s[30];
	fgets(s,29,stdin);
	fputs(s,stdout);
	fputs("error\n",stderr);


    	return 0;
}
