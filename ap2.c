#include <stdio.h>
#include <stdlib.h>
void main()
{
int list[5]; // 5개의 정수 배열을 선언
int *plist[5]; // 정수에 대한 5개의 포인터 선언
list[0] = 10; 
list[1] = 11;
plist[0] = (int*)malloc(sizeof(int)); // 포인터 배열 plist[0] 의 메모리를 할당해준다.
printf("[----- [SIWON JOO] [2018038045] -----]\n\n"); 
printf("list[0] \t= %d\n", list[0]); // list [0] 의 값을 출력 하므로 10을 출력한다.
printf("address of list \t= %p\n", list); // list[0] 의 주소값을 출력한다.
printf("address of list[0] \t= %p\n", &list[0]); // list[0] 의 주소값을 출력한다.
printf("address of list + 0 \t= %p\n", list+0); // list[0] 의 주소값을 출력한다.
printf("address of list + 1 \t= %p\n", list+1); // list+1 은 list[1]의 주솟값을 의미하므로 list[1] 의 주솟값을 출력한다.
printf("address of list + 2 \t= %p\n", list+2); // list+2 은 list[2]의 주솟값을 의미하므로 list[2] 의 주솟값을 출력한다.
printf("address of list + 3 \t= %p\n", list+3); // list+3 은 list[3]의 주솟값을 의미하므로 list[3] 의 주솟값을 출력한다.
printf("address of list + 4 \t= %p\n", list+4); // list+4 은 list[4]의 주솟값을 의미하므로 list[4] 의 주솟값을 출력한다.
printf("address of list[4] \t= %p\n", &list[4]);  // list[4] 의 주솟값을 출력한다.
free(plist[0]); // 포인터 배열 plist[0]에 할당된 메모리를 해제해준다.
}