/* Tp #2 ejercicio 1-10 SSL
* Matias Nicolas Fradusco 
* 19/04/2015
*/

#include <stdio.h>

main(){
	int c;
	
	while((c = getchar()) != EOF){
		if(c == '\t')
			printf("\\t");		
		else if(c == '\\')
			printf("\\\\");
		else if(c == '\b')
			printf("\\b");
		else
		printf("%c", c);
		}
	}