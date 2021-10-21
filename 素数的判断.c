#include <stdio.h>
int main(){
	int a=0,i=2,b=0;
	printf("输入一个数");
	scanf("%d",&a);
	if(a!=1&&a!=2){
	do{
	b=a%i;
	i++;
}while(b!=0&&i!=a);
if(b==0){
	printf("%d不是素数",a);
} else{
	printf("%d是素数",a);} 
}else{
    printf("%d是素数",a);
}

	return 0;
}
