# include <stdio.h>
# include<math.h>

int LSM(int a, int b) {
	int i = 1;
	while (1) {
		if (a * i % b == 0) {  // a�� ��� ��, b�� ����� ���� ã��
			break;
		}
		i++;
	}
	printf("�ּҰ������ %d�Դϴ�.\n", a* i);
	return a * i;
}

int GCM(int a, int b) {
	int M;
	for (int i = 1; i <= a || i <= b; i++) {  // max(a,b) ������ �� �߿��� a�� b�� ����� ���� ã��
		if (a % i == 0 && b % i == 0) {
			M = i;  // i�� �����ϸ鼭 ���ǿ� ������ M�� �����ϱ� ������ �ִ밪�� �����
		}
	}
	printf("�ִ������� %d�Դϴ�.\n", M);
	return M;
}

int is_prime(int n) {
	for (int i = 2; i < (int)(sqrt(n)) + 1; i++) {  // 2���� n�� �����ٺ��� ���� �ڿ������� n�� ����� �ִ��� Ȯ��
		if (n % i == 0) {  // i�� ������ ��� -> �Ҽ� x
			printf("%d��(��) �Ҽ��� �ƴմϴ�.\n", n);
			return 0;
		}
	}
	printf("%d��(��) �Ҽ��Դϴ�.\n", n);  // if���� �ɸ��� �ʾ��� ��� -> �Ҽ�
	return 1;
}


// �Ʒ��� �Լ����� ��� �� �Լ����� scanf�� �߰���

int scan_LSM() {
	int a, b;
	int i = 1;

	printf("\n�ּҰ������ �˷��帳�ϴ�.\n");
	printf("ù��° ���� �Է��ϼ��� : ");
	scanf_s("%d", &a);
	printf("�ι�° ���� �Է��ϼ��� : ");
	scanf_s("%d", &b);

	while (1) {
		if (a * i % b == 0) {
			break;
		}
		i++;
	}
	printf("�ּҰ������ %d�Դϴ�.\n", a * i);
	return a * i;
}

int scan_GCM() {
	int a, b;

	printf("\n�ִ������� �˷��帳�ϴ�.\n");
	printf("ù��° ���� �Է��ϼ��� : ");
	scanf_s("%d", &a);
	printf("�ι�° ���� �Է��ϼ��� : ");
	scanf_s("%d", &b);

	int M;
	for (int i = 1; i <= a || i <= b; i++) {
		if (a % i == 0 && b % i == 0) {
			M = i;
		}
	}
	printf("�ִ������� %d�Դϴ�.\n", M);
	return M;
}

int scan_is_prime() {
	int n;

	printf("\n�Ҽ��� �Ǻ��ص帳�ϴ�.\n");
	printf("�ڿ����� �Է��ϼ��� : ");
	scanf_s("%d", &n);

	for (int i = 2; i < (int)(sqrt(n)) + 1; i++) {
		if (n % i == 0) {
			printf("%d��(��) �Ҽ��� �ƴմϴ�.\n", n);
			return 0;
		}
	}
	printf("%d��(��) �Ҽ��Դϴ�.\n", n);
	return 1;
}