#include<stdio.h>
#include"print_tools.h"

//结构体字节对齐
typedef struct{
		int   age;
		char* name;
}person;

struct class{
	int id;
	int size;
};

int main(int args, char *argv[]){
	int a = 123456;
	print_by_byte(&a, "123456", sizeof(int));
	person p;
	p.age = 99;
	p.name = "abc";
	print_by_byte(&p, "person", sizeof(person));
	char *c = "ABC";
	print_by_byte(&c, "char *", sizeof(char *));
	struct class d;
	d.id = 10;
	d.size = 15;
	print_by_byte(&d, "struct calss", sizeof(struct class));
	unsigned char e = 10;
	print_by_byte(&e, "char", sizeof(char));
	char f = 10;
	print_by_byte(&f, "unsigned char",sizeof(unsigned char));
	char g = -10;
	print_by_byte(&g, "unsigned char",sizeof(unsigned char));
	return 1;
}
