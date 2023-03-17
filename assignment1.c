# include <stdio.h>

int main(void) {

	char name[15], birth[15], num[15], major[15];  // 각 배열의 size를 15로 설정
	
	printf("이름 입력 : ");
	scanf_s("%s", name, sizeof(name));  // 이름을 name에 받음
	printf("생년월일 입력 : ");
	scanf_s("%s", birth, sizeof(birth));  // 생일을 변수 birth에 받음
	printf("학번 입력 : ");
	scanf_s("%s", num, sizeof(num));  // 학번을 변수 num에 받음
	printf("학과명 입력 : ");
	scanf_s("%s", major, sizeof(major));  // 학과명을 변수 major에 받음

	printf("\n이름 : %s\n", name);  // 변수 name에 들어있는 이름 출력
	printf("생년월일 : %s\n", birth);  // 변수 birth에 들어있는 생년월일 출력
	printf("학번 : %s\n", num);  // 변수 num에 들어있는 학번 출력
	printf("학과명 : %s\n", major);  // 변수 major에 들어있는 학과명 출력
}