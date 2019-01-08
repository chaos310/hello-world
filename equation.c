//求解如下方程组

//ax + by = c

//dx + ey = f

//注意输入/输出，数据类型
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
