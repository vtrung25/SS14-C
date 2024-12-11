#include<stdio.h>
#include<string.h>
int main(){
	char str[25] = "VieT Trung";
	int count, a;
	int length = strlen(str);
	printf("Nhap 1 ki tu ");
	scanf("%c", &a);
	for(int i = 0; i<length; i++){
		
		if(str[i]==a){
			count++;
		}
		
	}
	printf("So lan xuat hien cua ki tu %c trong chuoi la %d", a, count);
	return 0;
}