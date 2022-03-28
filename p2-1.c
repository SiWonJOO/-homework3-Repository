#include <stdio.h>
#define MAX_SIZE 100
float sum(float [], int);
float input[MAX_SIZE], answer;
int i;
void main(void)
{
 printf("[----- [SIWON JOO] [2018038045] -----]\n\n"); 
for(i=0; i < MAX_SIZE; i++)
input[i] = i; //MAX_SIZE 만큼 i번째 배열에 i값을 넣어준다.
/* for checking call by reference */
printf("address of input = %p\n", input); // input[0] 의 주소를 출력한다.
answer = sum(input, MAX_SIZE); // sum 함수를 호출해서 return 값을 answer 에 대입해준다.
// 호출 시 input(=&input[0])은 주소를 담고 있고 → 주소가 sum 함수의 list에 복사
printf("The sum is: %f\n", answer); // answer 값 출력
}
float sum(float list[], int n) //sum 함수 정의
{
printf("value of list = %p\n", list); // list배열은 input 배열의 주소를 담고 있으므로 input[0] 의 주소를 출력한다.
printf("address of list = %p\n\n", &list); // list[0]의 주소를 출력한다. 
int i;
float tempsum = 0;
for(i = 0; i < n; i++) 
tempsum += list[i]; // list 배열의 0번째부터 i번째 값을 전부 더해준다
return tempsum; 
}