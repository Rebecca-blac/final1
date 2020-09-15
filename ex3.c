#include<stdio.h>
#include<stdlib.h>

int main (int argc,char *argv[]){
  double a[100];
  int i=1;
  int j=0;
  int x=0;
  double temp;
  if(argc==1){
    printf("needs at least one integer parameter!");
  }
  else{
    for(int i=1;i<argc;i++,j++){
        if(*argv[i]>='0'&&*argv[i<='9']){
            a[j]=atof(argv[i]);
        }
        else{
            printf("has to be an intrger format!");
            return 0;
        }
    }
    for(x=0;x<argc-2;x++){
        if(a[x]>a[x+1]){
            temp=a[x];
            a[x]=a[x+1];
            a[x+1]=temp;
        }
        printf("Max is %g\n",a[argc-2]);
        return 0;
    }

  }

}