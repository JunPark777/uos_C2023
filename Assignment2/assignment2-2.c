# include <stdio.h>
# include "assignment2-2_header.h"  // �Լ����� ����Ǿ��ִ� ��� include

int main(void) {
	int a, b;
	int i = 1;
	
	printf("ù��° ���� �Է��ϼ��� : ");
	scanf_s("%d", &a);
	printf("�ι�° ���� �Է��ϼ��� : ");
	scanf_s("%d", &b);

	// parameter ���
	LSM(a, b);
	GCM(a, b);
	is_prime(a);
	is_prime(b);

	// scanf�� ���� �Է�
	scan_LSM();
	scan_GCM();
	scan_is_prime();
}