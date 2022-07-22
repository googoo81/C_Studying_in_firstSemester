//#include<stdio.h>
//void credit(int cash);
//
//int main(void) {
//	int cnt, cash = 0;
//	for (cnt = 1; cnt <= 3; cnt++) {
//		printf("<%d회 실행>\n", cnt);
//		printf("현금 : ");
//		scanf("%d", &cash);
//
//		printf("입금\t출금\t잔액\n");
//		credit(cash);
//	}
//}
//void credit(int cash) {
//	static int money;
//	money += cash;
//	if (cash < 0) {
//		printf("\t %d \t %d", cash, money);
//	}
//	else if (cash >= 0) {
//		printf("%d \t \t %d", cash, money);
//	}
//}

//#include<stdio.h>
//#define SIZE 5
//int main(void) {
//	int s[SIZE] = { 0 };
//	for (int i = 0; i < SIZE; i++)
//	{
//		printf("%d\n", s[i]);
//	}
//}

//#include<stdio.h>
//int main(void) {
//	int a[5];
//
//	//0번째 방에 10 대입
//	a[0] = 10;
//
//	//1번째 방에 20 대입
//	a[1] = 20;
//
//	printf("%d %d", a[0], a[1]);
//	return 0;
//}

//#include<stdio.h>
//int main(void) {
//	int a[5];
//
//	//0번째 방에 10 대입
//	a[0] = 10;
//
//	//1번째 방에 20 대입
//	a[1] = 20;
//
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d", a[i]);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main(void) {
//	int a[3] = { 1,2,3 };
//
//	for (int i = 0; i < 3; i++)
//	{
//		printf("%d", a[i]);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main(void) {
//	int a[5] = { 10,20,30 };
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d", a[i]);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main(void) {
//	int a[] = { 1,2,3,4,5 };
//
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d", a[i]);
//	}
//	return 0;
//}

//#include<stdio.h>
//#define SIZE 5
//int main(void) {
//	int a[SIZE] = { 10 };
//
//	for (int i = 0; i < SIZE; i++)
//	{
//		printf("%d", a[i]);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main(void) {
//	int arr[3] = { 0 };
//	int cnt = 0;
//
//	//for문 사용해서 배열 값 대입하기
//	for (int i = 0; i < 3; i++)
//	{
//		cnt += 5;
//		arr[i] = cnt;
//	}
//
//	//for문 사용해서 배열 값 출력하기
//	for (int i = 0; i < 3; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}

//#include