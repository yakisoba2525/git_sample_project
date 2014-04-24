#include <stdio.h>
#include <stdlib.h>

int main(void){
  char subject[5][15],c;
  int i,cul;
  int sum=0;
  double ave=0;
  FILE *fp;

  fp=fopen("grade.csv","r");

  for(i=0; i<5; i++){
    fscanf(fp,"%s",subject[i]);
  }


  while(fp!=NULL){
    if(EOF!=fscanf(fp,"%d",&cul))break;
    fscanf(fp,"%c",&c);
      sum+=cul;
  }
  
  ave=sum;
  ave=ave/i;

  printf("%d,%f\n",sum,ave);

  return 0;
}
