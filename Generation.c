#include <stdio.h>

int main(void){

	int year;
	
	printf("Enter your birth year: ");
	scanf("%d", &year);
	
	if(year>=2010 && year<=2024){
		printf("Gen Alpha");
	}
	else if(year>=1995 && year<=2009){
		printf("Gen Z");
	}
	else if(year>=1980 && year<=1994){
		printf("Millennials");
	}
	else if(year>=1965 && year<=1979){
		printf("Gen X");
	}
	else if(year>=1946 && year<=1964){
		printf("Baby Boomers");
	}
	else{
		printf("Builders");
	}
	return 0;
}


