//��4��������������꣬����00��β����ݱ�400�����������ꡣ

//2018/11/14 ����
#include<stdio.h>
int main() {
    
    int x;
    
    scanf("%d",&x);
    
    if(x%100==0){
    	if(x%400==0)printf("������");
		else printf("��������");
	}
	else if(x%4==0)printf("������");
	else printf("��������");
    return 0; 
	//to do sth

}
