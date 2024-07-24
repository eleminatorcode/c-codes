
#include<stdio.h>
int main() {
int age = 22;
int *ptr = &age;
int _age = *ptr;
int **ptr1=&ptr;
printf("%d\n", _age);
//address
printf("%p\n", &age);
printf("%p\n", ptr);
printf("%p\n", &ptr);
//data
printf("%d\n", age);
printf("%d\n", *ptr);
printf("%d\n", *(&age));
printf("%d\n", &ptr1);

return 0;
}