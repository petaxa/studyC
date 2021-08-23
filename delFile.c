#include <stdio.h>
#include <string.h>

int main(int argc,char *argv[]){
	char usage[] = "usage:trash <-d> fileName\n";
	int ret = 0;
	char newFileName[256]="";

	if(argc <= 1){
		printf(usage);
		return 1;
	}else if(strcmp(argv[1],"-d")==0){
		if(argc <= 2){
			printf(usage);
			return 2;
		}
		ret = remove(argv[2]);
		if(ret == 0)
			printf("deleted file\n");
		else
			printf("error:Not enough argments\n");
	}else{
		sprintf(newFileName,"%s.bak",argv[1]);
		ret = rename(argv[1],newFileName);
		if(ret == 0)
			printf("rename \"%s\"",newFileName);
		else
			printf("failed:Rename %s",argv[1]);
	}
}
