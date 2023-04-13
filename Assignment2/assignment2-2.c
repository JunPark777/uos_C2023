// 인공지능학과 2021480004 박준

# include <stdio.h>
# include "assignment2-2_header.h"  // 함수들이 저장되어있는 헤더 include

int main(void) {
	int a, b;
	int i = 1;
	
	printf("첫번째 수를 입력하세요 : ");
	scanf_s("%d", &a);
	printf("두번째 수를 입력하세요 : ");
	scanf_s("%d", &b);

	// parameter 사용
	LSM(a, b);
	GCM(a, b);
	is_prime(a);
	is_prime(b);

	// scanf로 직접 입력
	scan_LSM();
	scan_GCM();
	scan_is_prime();
}
