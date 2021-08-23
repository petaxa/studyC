#include <stdio.h>
#include <string.h>

int wtoj(int,char *,int *,char *);

int main(void){
	int wyear = -1,jyear = 0;
	char nengo[16];
	char error[20];

	printf("Convarting to AD to JP calendar.\nTo interrupt,enter 0 on console.\n");
	while(wyear !=0){
		printf("Enter the year of OurLord.(1868-2021):\n");
		scanf("%d",&wyear);
		scanf("%*[^\n]%*c");
		if(wtoj(wyear,nengo,&jyear,error)==0){
			printf("\"%d AD\" is \"%s%d\" in JP calender.\n",wyear,nengo,jyear);
			wyear = -1;
			*nengo = 0;
			*error = 0;
		}
		else
			printf(error);
		
	}
	return 0;
}

/**********************************************
  wtoj():Convart to AD to JP calendar.
  [arg]:wyear -- AD
  	:nengo -- pointer to string for NENGO
  	:jyear -- pointer to JP calendar
  [return]
  	:success -- 0
  	:out of scope -- 1
 **********************************************/

int wtoj(int wyear,char *nengo,int *jyear,char *error){
	if(wyear >= 1868 && wyear <= 1911){
		strcpy(nengo,"明治");
		*jyear = wyear-1868+1;
		return 0;
	}else if(wyear >= 1912 && wyear <= 1925){
		strcpy(nengo,"大正");
		*jyear = wyear-1912+1;
		return 0;
	}else if(wyear >= 1926 && wyear <= 1988){
		strcpy(nengo,"昭和");
		*jyear = wyear-1926+1;
		return 0;
	}else if(wyear >= 1989 && wyear <= 2018){
		strcpy(nengo,"平成");
		*jyear = wyear-1989+1;
		return 0;
	}else if(wyear >= 2019 && wyear >= 2021){
		strcpy(nengo,"令和");
		*jyear = wyear-1989+1;
		return 0;
	}else if(wyear == 0){
		strcpy(error,"exit");
		return 1;
	}else{
		strcpy(error,"out of scope\n");
		return 1;
	}
}
