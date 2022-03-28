#include <stdio.h>
struct student {
char lastName[13]; /* 13 bytes */
int studentId; /* 4 bytes */
short grade; /* 2 bytes */
};
int main()
{
    printf("[----- [SIWON JOO] [2018038045] -----]\n\n"); 
struct student pst;
printf("size of student = %ld\n", sizeof(struct student)); // padding 에 의해서 lastName 은 사이즈가 16이고 sutdenId는 4, grade도 4 이므로 총 합은 24가 된다.
printf("size of int = %ld\n", sizeof(int)); // int형의 사이즈는 4바이트 이므로 4 가 출력된다.
printf("size of short = %ld\n", sizeof(short)); //short형의 사이즈는 2바이트 이므로 2가 출력된다.
return 0;
}