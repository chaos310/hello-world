/*满足下列条件的自然数称为超级素数:该数本身,所有数字之和,所有数字之积以及所有数字的平方和都是素数.例如113就是一个超级素数.求[100,9999]之内:
(1)超级素数的个数.
(2)所有超级素数之和.
(3)最大的超级素数.*/

//2018/11/14 更新
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
            a++;  // 素数个数加1
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
            a++;  // 素数个数加1
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
  	printf("%d是超级素数\n",num);
  }
}
    return 0;
    //to do sth

}
