#include<stdio.h>
#include<string.h>
int main(){
	char str[25] = "Viet Trung";
	
	int length = strlen(str);
	for(int i = length - 1; i>=0; i--){
		printf("%c", str[i]);
		
	}
	return 0;
}