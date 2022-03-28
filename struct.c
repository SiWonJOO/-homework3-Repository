#include <stdlib.h>
struct student1 { // 구조체 student1 선언
char lastName;
int studentId;
char grade;
};
typedef struct { // typedef 으로 구조체 선언
char lastName;
int studentId;
char grade;
} student2;

int main() {
    printf("[----- [SIWON JOO] [2018038045] -----]\n\n"); 
struct student1 st1 = {'A', 100, 'A'}; //st1 구조체 생성
printf("st1.lastName = %c\n", st1.lastName);
printf("st1.studentId = %d\n", st1.studentId);
printf("st1.grade = %c\n", st1.grade);
student2 st2 = {'B', 200, 'B'}; //st2 구조체 생성
printf("\nst2.lastName = %c\n", st2.lastName);
printf("st2.studentId = %d\n", st2.studentId);
printf("st2.grade = %c\n", st2.grade);
student2 st3;
st3 = st2; // 구조 치환을 해줌.
printf("\nst3.lastName = %c\n", st3.lastName);
printf("st3.studentId = %d\n", st3.studentId);
printf("st3.grade = %c\n", st3.grade);
/* equality test */
//전체 구조의 동등성 검사는 불가능 하기 때문에 하나하나씩 비교하였음.
if(st2.grade == st3.grade) 
{
    if(st2.lastName == st2.lastName)
    {
        if(st2.studentId == st3.studentId)
        {
        printf("equal\n");
        }
    }
}
else
printf("not equal\n");
return 0;
}