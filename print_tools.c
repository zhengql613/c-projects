#include "print_tools.h"

void print_by_byte(void *p_obj, char *src, int size){
	int i = 0;
	printf("%s's size is %d\n", src, size);
	while(i < size){
		printf("%02X,",*(((unsigned char *)p_obj)+i));
		i++;
		if(i == size){
			printf("$\n");
		}
	}
}
