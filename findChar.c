#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <malloc.h>
#include <memory.h>

int main(void){
	while(1){
                char s[100];
                char c = 0;
                int n = 0;
                char *p = s;
                printf("文字列を入力してください。\n");
                rewind(stdin);
                gets(s);

                printf("発見したい文字を入力してください。\n");
                rewind(stdin);
                c = getchar();

                printf("\tp:%d\n\t*p:%c\n\tc:%c\n",p,*p,c);

                printf("\"%s\"の中から\'%c\'を探します\n",s,c);
                while(*p != '\0'){
                        if(*p == c){
                                printf("%d文字目で発見。\n",p-s+1);
                                printf("\tpの中身:%d\n\tsの中身:%d\n",p,s);
                                n++;
                        }
                        p++;
                }
                if(n == 0)
                        printf("見つかりませんでした。\n");
                else
                        printf("%d個見つかりました。\n",n);
                char quit = 'y';
                int qNum = 1;

                while(1){
                        printf("終了しますか？Y/N\n");
                        rewind(stdin);
                        quit = getchar();
                        if(quit == 'y'||quit == 'Y'){
                                qNum = 1;
                                break;
                        }
                        else if(quit == 'n'||quit == 'N'){
                                qNum = 0;
                                break;
                        }
                        else
                                continue;
                }

                printf("\tquit:%c\n\tqNum:%d\n",quit,qNum);

                if(qNum)
                        return 0;
        }
	return 0;
}
