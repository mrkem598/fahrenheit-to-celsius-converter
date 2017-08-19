/* This is a simple application to do some practice on how to change fahreneit to degree centigrade */

#include <stdio.h>

int main(void) {
     
	float fahrenheit,centigrade;
	
	printf("%f", &fahrenheit);

	centigrade = (fahrenheit -32.0) * 5.0/9.0;
	
	printf("\n\n Fahrenheit to Celsius Converter\n\n\tCentigrade temp is %f",

		centigrade);
	
	return 0;


}
