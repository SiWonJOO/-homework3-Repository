#include<stdio.h>
#include<stdlib.h>
void main()
{
    printf("[----- [SIWON JOO] [2018038045] -----]\n\n"); 
int **x; 
printf("sizeof(x) = %lu\n", sizeof(x)); // 더블포인터가 가르키는 x의 size는 디버거에 따라 바뀌기 때문에 32bit 디버거를 사용하면 4가 출력된다.
printf("sizeof(*x) = %lu\n", sizeof(*x)); // 포인터 x는 더블포인터 x가 가르키는 메모리 공간인데 32bit 디버거를 사용하면 4가 출력된다.
printf("sizeof(**x) = %lu\n", sizeof(**x)); // 더블포인터x는 int 로 선언되었기 때문에 int size인 4byte 가 출력된다.
}