# include <stdio.h>
# include<math.h>

int LSM(int a, int b) {
	int i = 1;
	while (1) {
		if (a * i % b == 0) {  // a의 배수 중, b의 배수인 수를 찾음
			break;
		}
		i++;
	}
	printf("최소공배수는 %d입니다.\n", a* i);
	return a * i;
}

int GCM(int a, int b) {
	int M;
	for (int i = 1; i <= a || i <= b; i++) {  // max(a,b) 이하인 수 중에서 a와 b의 약수인 수를 찾음
		if (a % i == 0 && b % i == 0) {
			M = i;  // i가 증가하면서 조건에 맞으면 M에 저장하기 때문에 최대값이 저장됨
		}
	}
	printf("최대공약수는 %d입니다.\n", M);
	return M;
}

int is_prime(int n) {
	for (int i = 2; i < (int)(sqrt(n)) + 1; i++) {  // 2부터 n의 제곱근보다 작은 자연수까지 n의 약수가 있는지 확인
		if (n % i == 0) {  // i로 나눠질 경우 -> 소수 x
			printf("%d는(은) 소수가 아닙니다.\n", n);
			return 0;
		}
	}
	printf("%d는(은) 소수입니다.\n", n);  // if문에 걸리지 않았을 경우 -> 소수
	return 1;
}


// 아래의 함수들은 모두 위 함수에서 scanf만 추가됨

int scan_LSM() {
	int a, b;
	int i = 1;

	printf("\n최소공배수를 알려드립니다.\n");
	printf("첫번째 수를 입력하세요 : ");
	scanf_s("%d", &a);
	printf("두번째 수를 입력하세요 : ");
	scanf_s("%d", &b);

	while (1) {
		if (a * i % b == 0) {
			break;
		}
		i++;
	}
	printf("최소공배수는 %d입니다.\n", a * i);
	return a * i;
}

int scan_GCM() {
	int a, b;

	printf("\n최대공약수를 알려드립니다.\n");
	printf("첫번째 수를 입력하세요 : ");
	scanf_s("%d", &a);
	printf("두번째 수를 입력하세요 : ");
	scanf_s("%d", &b);

	int M;
	for (int i = 1; i <= a || i <= b; i++) {
		if (a % i == 0 && b % i == 0) {
			M = i;
		}
	}
	printf("최대공약수는 %d입니다.\n", M);
	return M;
}

int scan_is_prime() {
	int n;

	printf("\n소수를 판별해드립니다.\n");
	printf("자연수를 입력하세요 : ");
	scanf_s("%d", &n);

	for (int i = 2; i < (int)(sqrt(n)) + 1; i++) {
		if (n % i == 0) {
			printf("%d는(은) 소수가 아닙니다.\n", n);
			return 0;
		}
	}
	printf("%d는(은) 소수입니다.\n", n);
	return 1;
}