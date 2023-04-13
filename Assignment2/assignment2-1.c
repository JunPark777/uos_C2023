# include <stdio.h>
# include<math.h>

int trans(int n, int k, int M) {
	// n : 10����
	// k : ��ȯ�� ����
	// M : ��ȯ�� ������ �ְ� �ڸ��� �� -> 1000�� 2������ ��ȯ�� ��, M�� 512�� �ȴ�.

	int result;
	result = (int)(n / M);  // 10���� n�� k������ �ٲ��� ��, ���� ���� ��

	if (result < 10) {  // 0 ~ 9 ���� ���ڸ� ���� ���� ���, �״�� ���
		printf("%c", '0' + (result));
	}
	else {  // 10 �̻��� ���, �ش� ���ڿ� �´� ���� ���
		printf("%c", 'A' + (result - 10));
	}

	if (M > 1) {  // ��ȯ�� ������ �ְ� �ڸ��� ���� 1�� �ƴ� ���, ���� ��ȯ�� �ڸ����� �� ���������Ƿ� ���
		return trans(n % M, k, (int)(M / k));
	}
	else {  // ��ȯ�� ������ �ְ� �ڸ��� ���� 1�� ���, �ش� ������ ��� �ڸ��� ����� �Ϸ�
		return 0;
	}

}

int main(void) {
	int n, k, result;
	int M = 1;

	printf("��ȯ�� 10���� �Է� : ");
	scanf_s("%d", &n);  // 10������ n�� ����
	printf("��ȯ�� ���� �Է� : ");
	scanf_s("%d", &k);  // ��ȯ�� ������ k�� ����

	while (1) {  // n���� ���� k�� �ŵ����� �� ���� ū ���� M�� ����
		if (n >= M * k) {
			M = M * k;
		}
		else {
			break;
		}
	}

	printf("%d�� %d���� ��ȯ �� : ", n, k);
	result = trans(n, k, M);  // ����Լ� ����
}