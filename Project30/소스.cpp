#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main() {

	int customer;
	int menu;
	int a;
	int b;
	int c;
	int total;
	int total2 = 0;
	int d;
	int money = 100000;

	printf("���� ������ �ִ� �ݾ� : 100000��\n\n");
	printf("���������� ���� ���� ȯ���մϴ�.\n");
	printf("����̼� �湮�ϼ̽��ϱ�? : ");
	scanf_s("%d", &customer);
	printf("\n%d���̼� ���̱��� \n", customer);
	printf("�޴����� ���� �ֹ��Ͻ� �޴��� �������ּ���. \n\n");
	printf("   �޴���    \n");
	printf("1.¥��� :3000��");
	puts("");
	printf("2. ��¥��: 4000��");
	puts("");
	printf("3. «��: 5000��");
	puts("");
	printf("4. «¥��: 5000��");
	puts("");
	printf("5. ������: 15000��");
	puts("");
	printf("6. ���꽽: 30000��");
	puts("");
	printf("7. �����: 1500��");
	puts("");

	for (a = 1; a <= customer; a++) {
		total = 0;
		printf("%d�� �մ� �ֹ� �ްڽ��ϴ�.\n", a);
		printf("��� �޴��� �ֹ��Ͻðڽ��ϱ�?");
		scanf_s("%d", &menu);
		printf("\n%d�� �մ� �ֹ� �ްڽ��ϴ�.\n", a, menu);
		printf("���Ͻô� �޴��� ��ȣ�� �Է��� �ֽʽÿ�.\n");
		printf("�ֹ� ��Ҹ� ���ϽŴٸ� �޴� �̿��� ��ȣ�� �Է����ֽʽÿ�.\n\n");

		for (b = 1; b <= menu; b++) {
			d = 0;
			printf("� �޴��� �ֹ��Ͻðڽ��ϱ�? :");
			scanf_s("%d", &c);

			if (c == 1) {
				printf("¥����� �ֹ��ϼ̽��ϴ�. \n\n");
				d = 3000;
			}

			else if (c == 2) {
				printf("��¥���� �ֹ��ϼ̽��ϴ�. \n\n");
				d = 4000;
			}

			else if (c == 3) {
				printf("«���� �ֹ��ϼ̽��ϴ�. \n\n");
				d = 5000;
			}

			else if (c == 4) {
				printf("«¥���� �ֹ��ϼ̽��ϴ�. \n\n");
				d = 5000;
			}

			else if (c == 5) {
				printf("�������� �ֹ��ϼ̽��ϴ�. \n\n");
				d = 15000;
			}

			else if (c == 6) {
				printf("���꽽�� �ֹ��ϼ̽��ϴ�. \n\n");
				d = 30000;
			}

			else if (c == 7) {
				printf("������� �ֹ��ϼ̽��ϴ�. \n\n");
				d = 1500;
			}

			total += d;
		}
		printf("%d�� �մ� �ֹ��Ͻ� ���İ��� ������ %d�� �Դϴ�. \n\n", a, total);
		total2 += total;
	}
	printf("\n �ֹ����� ���İ��� ������ %d�� �Դϴ�.\n", total2);
	printf("��� ���͵帮�ڽ��ϴ�.\n\n");
	if (total2 <= money);

	printf("%d�� ���� ���͵帮�ڽ��ϴ�.\n\n", total2);
	printf("���� ���� �ݾ��� %d�� �Դϴ�.", money - total2);
	if (total2 <= money);
}

