#include <stdio.h>
#include <string.h>

int main(void){
	FILE *fpr,*fpw;
	char bufr[256],bufw[256];
	char strRow[] = "dog";
	char strRe[] = "rabbit";
	char *p,*q;

	if(!(fpr = fopen("dog.txt","r"))){
		printf("failed:reading the file");
		return 1;
	}

	if(!(fpw = fopen("rabbit.txt","w"))){
		printf("failed:writing the file");
		return 1;
	}
	printf("Input replaced word\n");
	gets(strRow);
	printf("gets直後:%s\n",strRow);
	printf("Input new word\n");
	gets(strRe);
	while(1){
		fgets(bufr,256,fpr);
		strcpy(bufw,bufr);
		printf("strRow:%s\n",strRow);
		p = strstr(bufr,strRow);
		if(p){
			q = bufw + (p - bufr);
			strcpy(q,strRe);
			strcpy(q+strlen(strRe),p+strlen(strRow));
		}
		fprintf(fpw,"%s",bufw);
		if(feof(fpr)){
			printf("replace %s to %s\n",strRow,strRe);
			break;
		}
	}
	fclose(fpr);
	fclose(fpw);
	return 0;
}
