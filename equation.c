//������·�����

//ax + by = c

//dx + ey = f

//ע������/�������������
#include<stdio.h>

int main(){
	
	double a,b,c,d,e,f,x,y;
	
	scanf("%lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&f);
	
	x=(c*e-b*f)/(a*e-b*d);
	y=(c*d-f*a)/(b*d-a*e);
	
	
	if(a*e-b*d==0)printf("error");
	else printf("%lf %lf",x,y);
	
	
	
	
	return 0;
} 
