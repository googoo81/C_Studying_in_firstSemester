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
//	printf("��� = %.2f\n\n", result);
//
//	int x = 100;
//	int key = CHECK(x, score);
//	if (key == 1)
//	{
//		printf("�迭�ȿ� %d�� ����", x);
//	}
//	else {
//		printf("�迭 �ȿ� %d�� ����", x);
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
//		printf(">> �ڵ��� ���� �����Ͻðڽ��ϱ�? (Y/N) : ");
//		scanf("%c", &answer);
//		if (answer == 'y' || answer == 'Y')
//		{
//			print_car(car);
//			int n;
//			printf("�ڵ��� �� ���� : ");
//			scanf("%d", &n);
//			if (n >= 1 && n <= 10)
//			{
//				if (car[n - 1] = 1)
//				{
//					printf("%d ���� �̹� ���õ� ���Դϴ�.\n", n);
//				}
//				else
//				{
//					car[n - 1] = 1;
//					printf("���� �Ϸ� �Ǿ����ϴ�.\n");
//				}
//			}
//			else
//			{
//				printf("���� ������ �ƴմϴ�. �ٽ� �Է����ֽʽÿ�.\n");
//			}
//		}
//		else if (answer == 'n' || answer == 'N') {
//			printf("�ڵ��� �� No.");
//			for (int i = 0; i < 10; i++)
//			{
//				if (car[i] = 1);
//				{
//					printf("[%d]", i);
//				}
//			}
//			printf(" ���� �Ϸ� �� ���α׷� ����\n");
//			break;
//		}
//		else {
//
//			printf("���ĺ� �Է� �����Դϴ�.\n");
//			printf("���ĺ��� ��ҹ��� ���� ���� Y �Ǵ� N�� ����մϴ�\n");
//			printf("���ĺ��� �ٽ� �Է��ϼ���.\n");
//		}
//	}
//}
//
//void print_car(int car[]) {
//	printf("�ڵ��� �� ��ȣ : \t1\t2	3\t4\t5\t6\t7\t8\t9\t10\n");
//	printf("�ڵ��� �� ��Ȳ : ");
//	for (int i = 0; i < 10; i++)
//	{
//		printf("\t%d", car[i]);
//	}
//	printf("\n");
//}