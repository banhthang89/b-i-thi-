#include <stdio.h>
#include <math.h>
int main() {
  float a,b,c,s,p;
  printf("Nhap lan luot so lieu cua ba canh a,b,c\n");
  scanf("%f%f%f", &a,&b,&c);
  p=(a+b+c)/2;
  if(a+b>c && a+c>b && b+c>a) {
    s=sqrt(p*(p-a)*(p-b)*(p-c));
    printf("Dien tich cua tam giac la S: %f",s);
  } 
  else {
    printf("Ba canh vua nhap vao khong tao thanh mot tam giac");
  }
  return 0;
}