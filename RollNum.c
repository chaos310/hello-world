
//�������������뷴����ȵ���

//2018/11/14 ����
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
		printf("���ǻ�����");
		break;
		}
		l++;
		x--; 
	}
	if(l>=x)printf("�ǻ�����");
	

	
	
	
	
	return 0;
	//to do sth

}
