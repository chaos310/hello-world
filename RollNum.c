
//回文数：正读与反读相等的数

//2018/11/14 更新
#include<stdio.h>
#include<string.h> 
char a[1000];

int main() {
     
    int x,l,i;
    scanf("%s",a);
     
    x=strlen(a);
    x=x-1;
    l=0;
    i=x/2;
	
	while(x>=i){
		if(a[l]!=a[x]){
		printf("不是回文数");
		break;
		}
		l++;
		x--; 
	}
	if(l>=x)printf("是回文数");
	

	
	
	
	
	return 0;
	//to do sth

}
