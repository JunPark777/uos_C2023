# include <stdio.h>
# include<math.h>

int trans(int n, int k, int M) {
	// n : 10진수
	// k : 변환할 진법
	// M : 변환할 진법의 최고 자리수 값 -> 1000을 2진수로 변환할 때, M은 512가 된다.

	int result;
	result = (int)(n / M);  // 10진수 n을 k진수로 바꿨을 때, 제일 왼쪽 값

	if (result < 10) {  // 0 ~ 9 까지 한자리 정수 값일 경우, 그대로 출력
		printf("%c", '0' + (result));
	}
	else {  // 10 이상일 경우, 해당 숫자와 맞는 문자 출력
		printf("%c", 'A' + (result - 10));
	}

	if (M > 1) {  // 변환할 진법의 최고 자리수 값이 1이 아닐 경우, 아직 변환할 자리수가 더 남아있으므로 재귀
		return trans(n % M, k, (int)(M / k));
	}
	else {  // 변환할 진법의 최고 자리수 값이 1인 경우, 해당 진법의 모든 자리수 출력이 완료
		return 0;
	}

}

int main(void) {
	int n, k, result;
	int M = 1;

	printf("변환할 10진수 입력 : ");
	scanf_s("%d", &n);  // 10진수를 n에 저장
	printf("변환할 진법 입력 : ");
	scanf_s("%d", &k);  // 변환할 진법을 k에 저장

	while (1) {  // n보다 작은 k의 거듭제곱 중 가장 큰 수를 M에 저장
		if (n >= M * k) {
			M = M * k;
		}
		else {
			break;
		}
	}

	printf("%d의 %d진수 변환 값 : ", n, k);
	result = trans(n, k, M);  // 재귀함수 실행
}