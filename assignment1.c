# include <stdio.h>

int main(void) {

	char name[15], birth[15], num[15], major[15];  // �� �迭�� size�� 15�� ����
	
	printf("�̸� �Է� : ");
	scanf_s("%s", name, sizeof(name));  // �̸��� name�� ����
	printf("������� �Է� : ");
	scanf_s("%s", birth, sizeof(birth));  // ������ ���� birth�� ����
	printf("�й� �Է� : ");
	scanf_s("%s", num, sizeof(num));  // �й��� ���� num�� ����
	printf("�а��� �Է� : ");
	scanf_s("%s", major, sizeof(major));  // �а����� ���� major�� ����

	printf("\n�̸� : %s\n", name);  // ���� name�� ����ִ� �̸� ���
	printf("������� : %s\n", birth);  // ���� birth�� ����ִ� ������� ���
	printf("�й� : %s\n", num);  // ���� num�� ����ִ� �й� ���
	printf("�а��� : %s\n", major);  // ���� major�� ����ִ� �а��� ���
}