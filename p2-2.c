#include <stdio.h>
void print1 (int *ptr, int rows);
int main()
{
printf("[----- [SIWON JOO] [2018038045] -----]\n\n"); 
int one[] = {0, 1, 2, 3, 4}; // 5개의 정수를 가진 정수형 배열 선언
printf("one = %p\n", one); // one[0] 의 주소를 출력한다.
printf("&one = %p\n", &one); // one[0] 의 주소를 출력한다.
printf("&one[0] = %p\n", &one[0]); // one[0] 의 주소를 출력한다. 
printf("\n");
print1(&one[0], 5); // print1 함수를 호출한다.
return 0;
}
void print1 (int *ptr, int rows) // print1 의 함수를 정의한다.
{/* print out a one-dimensional array using a pointer */
int i;
printf ("Address \t Contents\n"); 
for (i = 0; i < rows; i++) // rows 가 5이기때문에 5번 반복한다.
printf("%p \t %5d\n", ptr + i, *(ptr + i)); // *ptr 은 one[0] 의 주소를 담고 있기 때문에 ptr+i 은 one[1]의 주소를 출력한다. 
// *(ptr+i) 는 one[i]번째주소가 가지고 있는 값을 출력한다. 
printf("\n");
}