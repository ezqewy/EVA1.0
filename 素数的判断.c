#include <stdio.h>
int main(){
	int a=0,i=2,b=0;
	printf("����һ����");
	scanf("%d",&a);
	if(a!=1&&a!=2){
	do{
	b=a%i;
	i++;
}while(b!=0&&i!=a);
if(b==0){
	printf("%d��������",a);
} else{
	printf("%d������",a);} 
}else{
    printf("%d������",a);
}

	return 0;
}
