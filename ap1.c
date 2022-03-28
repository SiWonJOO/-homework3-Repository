#include <stdio.h>
#include <stdlib.h>
void main()
{
int list[5]; //1차원 배열 생성
int *plist[5] = {NULL,}; // 포인터 배열 초기화
plist[0] = (int *)malloc(sizeof(int)); // 배열에 Int size 만큼 메모리 할당
list[0] = 1; // 배열에 첫번째 칸 값을 1
list[1] = 100; // 
*plist[0] = 200; //
 //(list+i) = &list[i], *(list+i) = list[i] 는 모두 같은 의미이다.
printf("[----- [SIWON JOO] [2018038045] -----]\n\n"); 
printf("value of list[0] = %d\n", list[0]); // 첫번째 배열의 들어있는 값인 1을 출력한다.
printf("address of list[0] = %p\n", &list[0]); // 첫번째 배열의 들어있는 주솟값을 출력한다. 
printf("value of list = %p\n", list); // list 는 list[0]의 주솟값을 뜻하므로 list[0]의 주솟값을 출력한다.
printf("address of list (&list) = %p\n", &list); // list 배열의 첫번째 주솟값을 출력한다.
printf("----------------------------------------\n\n");
printf("value of list[1] = %d\n", list[1]); // 두번째 배열의 들어있는 값인 100을 출력한다.
printf("address of list[1] = %p\n", &list[1]); // 두번째 배열의 들어있는 주솟값을 출력한다. 
printf("value of *(list+1) = %d\n", *(list + 1)); // list +1 의 포인터는 list[1] 이 가르키는 곳의 값 100을 출력한다.
printf("address of list+1 = %p\n", list+1); // list +1 은 list[1]의 주솟값을 뜻하므로 list[1]의 주솟값을 출력한다.
printf("----------------------------------------\n\n");
printf("value of *plist[0] = %d\n", *plist[0]); // 포인터 plist[0] 은 200 이므로 200을 출력한다.
printf("&plist[0] = %p\n", &plist[0]); // plist[0] 의 주소를 출력한다.
printf("&plist = %p\n", &plist); // plist의 주소는 plist[0] 의 주소와 같으므로 plist[0]의 주소를 출력한다.
printf("plist = %p\n", plist);  // plist  plist[0] 의 주소와 같으므로 plist[0]의 주소를 출력한다.
printf("plist[0] = %p\n", plist[0]); // 포인터 배열 plist[0]이 가르키는 값인 200을 담고있는 주소를 출력한다.
printf("plist[1] = %p\n", plist[1]); //포인터 배열을 NULL 값으로 초기화 해주었기 때문에 0이 나온다.
printf("plist[2] = %p\n", plist[2]); //포인터 배열을 NULL 값으로 초기화 해주었기 때문에 0이 나온다.
printf("plist[3] = %p\n", plist[3]); //포인터 배열을 NULL 값으로 초기화 해주었기 때문에 0이 나온다.
printf("plist[4] = %p\n", plist[4]); //포인터 배열을 NULL 값으로 초기화 해주었기 때문에 0이 나온다.
free(plist[0]); // plist 배열의 메모리 할당을 해제해준다.
}
