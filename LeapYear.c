//被4整除的年份是闰年，但是00结尾的年份被400整除才是闰年。

//2018/11/14 更新
#include<stdio.h>
int main() {
    
    int x;
    
    scanf("%d",&x);
    
    if(x%100==0){
    	if(x%400==0)printf("是闰年");
		else printf("不是闰年");
	}
	else if(x%4==0)printf("是闰年");
	else printf("不是闰年");
    return 0; 
	//to do sth

}
