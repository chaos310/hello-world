//求解一元二次方程的根 ax^2+bx+c=0


//查阅sqrt()函数

//注意有没有解

#include<stdio.h>
#include<math.h>

int main(){
	
	double a,b,c,x1,x2,delta;
	
	scanf("%lf %lf %lf",&a,&b,&c);
	
	delta=b*b-4*a*c;
	
	if(delta>0){
		x1=(-b+sqrt(delta))/(2*a);
		x2=(-b-sqrt(delta))/(2*a);
		printf("x1=%lf  x2=%lf",x1,x2);
	}
	
	if(delta==0){
		x1=x2=(-b)/(2*a);
		printf("x1=%lf  x2=%lf",x1,x2);
	}
	
	if(delta<0){
		printf("无解");
	}
	return 0;
} 
