// A41 - WAP to count no. of characters, words and lines, entered through stdin
#include <stdio.h>
int main () {
    int charcnt=0,wrdcnt=0,linecnt=0;
    char ch,prev_ch=' ';

    while(1){
        ch=getchar();
        if(ch==EOF){
            if(prev_ch!=' ' && prev_ch!='\n'){
                wrdcnt++;
                linecnt++;
            }
            break;
        }
        charcnt++;
        ch==' ' && charcnt>0 && prev_ch!=' ' && prev_ch!='\n' && wrdcnt++;
        ch=='\n'&&prev_ch!=' ' && prev_ch!='\n' && prev_ch!='\t'&&(linecnt++, wrdcnt++);
        prev_ch=ch;
    }
    
    printf("\n\rchar count = %d , word count = %d , line count = %d\n",charcnt,wrdcnt,linecnt);
    return 0;
}