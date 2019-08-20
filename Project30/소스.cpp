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

	printf("현재 지갑에 있는 금액 : 100000원\n\n");
	printf("오복반점에 오신 것을 환영합니다.\n");
	printf("몇분이서 방문하셨습니까? : ");
	scanf_s("%d", &customer);
	printf("\n%d명이서 오셨군요 \n", customer);
	printf("메뉴판을 보고 주문하실 메뉴를 결정해주세요. \n\n");
	printf("   메뉴판    \n");
	printf("1.짜장면 :3000원");
	puts("");
	printf("2. 간짜장: 4000원");
	puts("");
	printf("3. 짬뽕: 5000원");
	puts("");
	printf("4. 짬짜면: 5000원");
	puts("");
	printf("5. 탕수육: 15000원");
	puts("");
	printf("6. 유산슬: 30000원");
	puts("");
	printf("7. 음료수: 1500원");
	puts("");

	for (a = 1; a <= customer; a++) {
		total = 0;
		printf("%d번 손님 주문 받겠습니다.\n", a);
		printf("몇가지 메뉴를 주문하시겠습니까?");
		scanf_s("%d", &menu);
		printf("\n%d번 손님 주문 받겠습니다.\n", a, menu);
		printf("원하시는 메뉴의 번호를 입력해 주십시오.\n");
		printf("주문 취소를 원하신다면 메뉴 이외의 번호를 입력해주십시오.\n\n");

		for (b = 1; b <= menu; b++) {
			d = 0;
			printf("어떤 메뉴를 주문하시겠습니까? :");
			scanf_s("%d", &c);

			if (c == 1) {
				printf("짜장면을 주문하셨습니다. \n\n");
				d = 3000;
			}

			else if (c == 2) {
				printf("간짜장을 주문하셨습니다. \n\n");
				d = 4000;
			}

			else if (c == 3) {
				printf("짬뽕을 주문하셨습니다. \n\n");
				d = 5000;
			}

			else if (c == 4) {
				printf("짬짜면을 주문하셨습니다. \n\n");
				d = 5000;
			}

			else if (c == 5) {
				printf("탕수육을 주문하셨습니다. \n\n");
				d = 15000;
			}

			else if (c == 6) {
				printf("유산슬을 주문하셨습니다. \n\n");
				d = 30000;
			}

			else if (c == 7) {
				printf("음료수를 주문하셨습니다. \n\n");
				d = 1500;
			}

			total += d;
		}
		printf("%d번 손님 주문하신 음식값의 가격은 %d원 입니다. \n\n", a, total);
		total2 += total;
	}
	printf("\n 주문받은 음식값의 총합은 %d원 입니다.\n", total2);
	printf("계산 도와드리겠습니다.\n\n");
	if (total2 <= money);

	printf("%d원 결제 도와드리겠습니다.\n\n", total2);
	printf("현재 남은 금액은 %d원 입니다.", money - total2);
	if (total2 <= money);
}

