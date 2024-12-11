#include<stdio.h>
#include<string.h>
int main(){
	char str[25] = "Viet Trung dep zai vcl";
	int count = 0; 
	
	int length = strlen(str);

	for(int i = 0; i<length; i++){
		
		if(str[i]==' '){
			count++;
		}
		
	}
	printf("So tu trong chuoi la %d", count+1);
	return 0;
}