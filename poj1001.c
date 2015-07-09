#include <stdio.h>
int main(){
  double a[10],b[10],c,d;
  int i=0;
  while(scanf("%lf %lf",&c,&d)==2){
    a[i]=c;
    b[i]=d;
    i++;
    }
  for(int j=0;j<sizeof(a)/sizeof(a[0]);j++){
    double t=1;
    for(int k=0;k<b[j];k++){
      t*=a[j];
    }
    printf("%lf\n",t );
  }



  return 0;
}
