//������������ÿλ���ִ�ӡ�������������Ҵ�ӡ���ո����֣�

//2018/11/14 ����
#include<stdio.h>
#include<math.h>
int main() {
    
    
    int x,i,t,z;
    scanf("%d",&x);
    int p=0;
    t=x;
	while(1){
    	x=x/10;
    	if(x>0)p++;
    	if(x<=0)break;
    	
	}
	
	while(p>=0){
		i=pow(10,p);
		z=t/i;
		z=z%10;
		printf("%d ",z);
		p--;
	}
	
    
    
	return 0; 
	//to do sth

}

