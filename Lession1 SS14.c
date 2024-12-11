#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	
	printf("Nhap mot chuoi bat ki ");
	fgets(str,sizeof(str),stdin);
	fputs(str,stdout);
	int length = strlen(str);
	printf("Do dai cua chuoi la %d", length);
	return 0;
}