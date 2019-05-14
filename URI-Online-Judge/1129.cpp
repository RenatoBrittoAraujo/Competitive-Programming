#include <stdio.h>

int main() {

    int nct,i,alt[5],ma,nma,j,nam;
    char res;
    while(scanf("%d",&nct)!=0){
            if(nct==0)break;
    for(i=0;i<nct;i++){
            nam=0;
            nma=0;
        for(j=0;j<5;j++){
            scanf("%d",&alt[j]);
            if(j==0){ma=alt[j];nma=j;if(alt[j]<=127)nam++;}

            if(alt[j]<ma){ma=alt[j];nma=j;}
            if(alt[j]<=127&&j!=0){nam++;}


        }

        if(ma<=127&&nam==1){
        switch(nma){
        case 0:
            res='A';
            break;
        case 1:
            res='B';
            break;
        case 2:
            res='C';
            break;
        case 3:
            res='D';
            break;
        case 4:
            res='E';
            break;
        }
        printf("%c\n",res);
        }else{
        printf("*\n");}
    }

    }

    return 0;
}
