#include<stdio.h>
#include<stdlib.h>

int GCD(int Num1,int Num2){
	int MaxN=0;
	if(Num1<Num2){
		MaxN = Num1;
	}else{
		MaxN = Num2; 
	}		
	int GCDN=1; 
	for(int LoopNum=2;LoopNum<=MaxN;LoopNum++){
		if(Num1%LoopNum==0&&Num2%LoopNum==0){
			GCDN*=LoopNum;
			Num1/=LoopNum;
			Num2/=LoopNum;
			LoopNum++;
		}	
	}	
	return GCDN;
}
int main(){
	int Num1,Num2;
	puts("�п�J��Ӽƭ�: ");
	scanf("%d %d",&Num1,&Num2);
	printf("�̤j���]�Ƭ�:%d",GCD(Num1,Num2));
	printf("�̤j���]�Ƭ�:%d",Num1*Num2/GCD(Num1,Num2));
	return 0;
}
