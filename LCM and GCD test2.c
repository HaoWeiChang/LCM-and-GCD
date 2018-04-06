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
	puts("叫块ㄢ计: ");
	scanf("%d %d",&Num1,&Num2);
	printf("程そ计:%d",GCD(Num1,Num2));
	printf("程そ计:%d",Num1*Num2/GCD(Num1,Num2));
	return 0;
}
