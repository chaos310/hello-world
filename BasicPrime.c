//������ֻ��1�ͱ��������ӵ���

//2018/11/14 ����
#include<stdio.h>
int main() {
     int a=0;  // �����ĸ���
    int num,i;  // ���������

    printf("����һ��������");
    scanf("%d",&num);

    for(i=2;i<num;i++){
        if(num%i==0){
            a++;  // ����������1
        }
    }

    if(a==0){
        printf("%d��������\n", num);
    }else{
        printf("%d����������\n", num);
    }

    //to do sth

}
