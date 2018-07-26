#include <stdio.h>

int main()
{
	int roke = 1;
	do{
		for(int i = 0; i < roke; i++){
			
			printf("*");
		}
		printf("\n");
		roke++;


	}while(roke < 10);
	return 0;
}
