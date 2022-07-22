//#include<stdio.h>
//#define STUDENT 5
//
//void SCANF(int score[]);
//int SUM(int score[]);
//int CHECK(int score[]);
//
//int main(void) {
//	int score[STUDENT];
//	SCANF(score);
//
//	float result = (float)SUM(score) / STUDENT;
//	printf("평균 = %.2f\n\n", result);
//
//	int x = 100;
//	int key = CHECK(x, score);
//	if (key == 1)
//	{
//		printf("배열안에 %d이 존재", x);
//	}
//	else {
//		printf("배열 안에 %d이 없음", x);
//	}
//	return 0;
//}
//
//void SCANF(int score[]) {
//	for (int i = 0; i < STUDENT; i++)
//	{
//		scanf("%d", &score[i]);
//	}
//}
//
//int SUM(int score[]) {
//	int sum = 0;
//	for (int i = 0; i < STUDENT; i++)
//	{
//		sum += score[i];
//	}
//	return sum;
//}
//
//int CHECK(int x, int score[]) {
//	int i = 0;
//	for (int i = 0; i < STUDENT; i++)
//	{
//		if (score[i] == x)
//		{
//			return 1;
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//void print_car(int car[]);
//
//int main(void) {
//	int car[10] = { 0 };
//	int k;
//	char answer;
//	while (1)
//	{
//		printf(">> 자동차 모델을 선택하시겠습니까? (Y/N) : ");
//		scanf("%c", &answer);
//		if (answer == 'y' || answer == 'Y')
//		{
//			print_car(car);
//			int n;
//			printf("자동차 모델 선택 : ");
//			scanf("%d", &n);
//			if (n >= 1 && n <= 10)
//			{
//				if (car[n - 1] = 1)
//				{
//					printf("%d 모델은 이미 선택된 모델입니다.\n", n);
//				}
//				else
//				{
//					car[n - 1] = 1;
//					printf("예약 완료 되었습니다.\n");
//				}
//			}
//			else
//			{
//				printf("예약 범위가 아닙니다. 다시 입력해주십시오.\n");
//			}
//		}
//		else if (answer == 'n' || answer == 'N') {
//			printf("자동차 모델 No.");
//			for (int i = 0; i < 10; i++)
//			{
//				if (car[i] = 1);
//				{
//					printf("[%d]", i);
//				}
//			}
//			printf(" 예약 완료 후 프로그램 종료\n");
//			break;
//		}
//		else {
//
//			printf("알파벳 입력 오류입니다.\n");
//			printf("알파벳은 대소문자 구별 없이 Y 또는 N만 허용합니다\n");
//			printf("알파벳을 다시 입력하세요.\n");
//		}
//	}
//}
//
//void print_car(int car[]) {
//	printf("자동차 모델 번호 : \t1\t2	3\t4\t5\t6\t7\t8\t9\t10\n");
//	printf("자동차 모델 현황 : ");
//	for (int i = 0; i < 10; i++)
//	{
//		printf("\t%d", car[i]);
//	}
//	printf("\n");
//}