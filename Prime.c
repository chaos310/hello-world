/*����������������Ȼ����Ϊ��������:��������,��������֮��,��������֮���Լ��������ֵ�ƽ���Ͷ�������.����113����һ����������.��[100,9999]֮��:
(1)���������ĸ���.
(2)���г�������֮��.
(3)���ĳ�������.*/

//2018/11/14 ����
#include<stdio.h>
#include<math.h> 
#include<stdbool.h>
int sum_bit(int num) {
   int i,t,z,s;
    
    int p=0;
    int a=0;
    t= num;
	while(1){
    	 num= num/10;
    	if(num>0)p++;
    	if(num<=0)break;
    	
	}
	
	while(p>=0){
		i=pow(10,p);
		z=t/i;
		z=z%10;
	    s=s+z;
		p--;
	}
    for(i=2;i<s;i++){
        if(s%i==0){
            a++;  // ����������1
        }
    }

   if(a==0){
       return 1;
    }
	else{
       return 0;
}

}



int multi_bit(int num) {
 int i,t,z,s;
    
    int p=0;
    int a=0;
    t= num;
	while(1){
    	 num= num/10;
    	if(num>0)p++;
    	if(num<=0)break;
    	
	}
	
	while(p>=0){
		i=pow(10,p);
		z=t/i;
		z=z%10;
	    s=s*z;
		p--;
	}
    for(i=2;i<s;i++){
        if(s%i==0){
            a++;  // ����������1
        }
    }

    if(a==0){
       return 1;
    }else{
       return 0;
}


}



int square_sum_bit(int num) {
 int i,t,z,s;
    
    int p=0;
    int a=0;
    t= num;
	while(1){
    	 num= num/10;
    	if(num>0)p++;
    	if(num<=0)break;
    	
	}
	
	while(p>=0){
		i=pow(10,p);
		z=t/i;
		z=z%10;
	    s=s+z*z;
		p--;
	}
    for(i=2;i<s;i++){
        if(s%i==0){
            a++;  -
        }
    }

    if(a==0){
       return 1;
    }else{
       return 0;
}

}


bool isprime(int num) {

  if(num==1)return true;
  if(num==0)return false;

}



int main() {

   int num=100;
  for(;num<10000;num++){
  
  if(isprime(sum_bit(num))&&isprime(multi_bit(num))&&isprime(square_sum_bit(num))){
  	printf("%d�ǳ�������\n",num);
  }
}
    return 0;
    //to do sth

}
