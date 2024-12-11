#include<stdio.h>
int main(){
	char str[25] = "VietTrung";
	char space = " ";
	int length = sizeof(str)/sizeof(char);
	for(int i = 0; i<length; i++){
		printf("%c", str[i]);
		printf("%c", space);
	}
	return 0;
}