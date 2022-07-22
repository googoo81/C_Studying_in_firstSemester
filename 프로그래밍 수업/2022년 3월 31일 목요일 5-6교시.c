//#include<stdio.h>
//int main(void) {
//	printf("--<<은행 프로그램>>--\n\n");
//	printf("A. 예금  B. 출금  C. 잔고 확인\n");
//	char Bank;
//	int a, b, c;
//	int Blance = 10000;
//	printf("원하시는 메뉴를 선택하세요 : ");
//	scanf("%c", &Bank);
//
//	switch (Bank)
//	{
//	case 'a':
//	case 'A':
//		printf("\n얼마를 입금하시겠습니까?");
//		scanf("%d", &a);
//		printf("현재 잔액 : %d\n", Blance + a);
//		break;
//	case 'b':
//	case 'B':
//		printf("\n얼마를 출금하시겠습니까?");
//		scanf("%d", &b);
//		if (Blance - b >= 0)
//			printf("현재 잔액 : %d\n", Blance - b);
//		else printf("삑 잔액부족입니다\n");
//		break;
//	case 'c':
//	case 'C':
//		printf("\n현재 잔액 : %d\n", Blance);
//		break;
//	default:
//		printf("\n잘못된 메뉴입니다\n");
//		break;
//	}
//	return 0;
//}

//#include<stdio.h>
//int main(void) {
//	printf("--<<주차 요금 프로그램>>--\n\n");
//	int a, b, c, d;
//	printf(">> 입차 시간(시간 분) ex. 2 20: ");
//	scanf("%d %d", &a, &b);
//	printf(">> 출차 시간(시간 분) ex. 3 30: ");
//	scanf("%d %d", &c, &d);
//	int x;
//	x = 60 * (c - a) + (d - b);
//	printf(">> 주차 시간(분) : %d\n\n", x);
//
//	if (x <= 30)
//		printf("주차 요금은 %d원 입니다.\n", 2000);
//	else if (x > 30 && x <= 120 && x % 10 == 0)
//		printf("주차 요금은 %d원 입니다.\n", 500 * ((x - 30) / 10 ) + 2000);
//	else if (x > 30 && x <= 120 && x % 10 != 0)
//		printf("주차 요금은 %d원 입니다.\n", 500 * ((x - 30) / 10 + 1) + 2000);
//	else if (x > 120 && x % 10 == 0)
//		printf("주차 요금은 %d원 입니다.\n", 400 * ((x - 30) / 10 ) + 2000);
//	else if (x > 120 && x % 10 != 0)
//		printf("주차 요금은 %d원 입니다.\n", 400 * ((x - 30) / 10 + 1) + 2000);
//
//	return 0;
//}