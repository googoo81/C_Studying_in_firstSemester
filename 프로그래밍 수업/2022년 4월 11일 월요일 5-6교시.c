//#include<stdio.h>
//int main(void) {
//    int �ݰ��� = 0, ������ = 0;
//    float ���ɹ��� = 100;
//    printf("�ݰ��⸦ �Է��Ͻÿ�(��) :");
//    scanf_s("%d", &�ݰ���);
//    while (���ɹ��� > 10)
//    {
//        ���ɹ��� = ���ɹ��� / 2;
//        ������ = ������ + �ݰ���;
//        printf("%d�� �Ŀ� ���� �� : %f\n", ������, ���ɹ���);
//    }
//    printf("1/10���Ϸ� �Ǳ� ���� �ɸ� �ð� %d��", ������);
//    return 0;
//}

//#include<stdio.h>
//int main(void) {
//	int number, sum = 0;
//	do
//	{
//		printf("������ �Է��Ͻʽÿ� : ");
//		scanf("%d", &number);
//		sum += number;
//	} while (number != 0);
//
//	printf("���ڵ��� �� = %d\n", sum);
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//
//int main(void) {
//	int x, i = 0;
//	srand(time(NULL));
//	int random = rand() % 100 + 1;
//	do
//	{
//		printf("������ �����Ͽ� ���ʽÿ�: ");
//		scanf("%d", &x);
//		if (random < x)
//		{
//			i++;
//			printf("������ ������ �����ϴ�.\n");
//			
//		}
//		else if (random > x)
//		{
//			i++;
//			printf("������ ������ �����ϴ�.\n");
//			
//		}
//		else if (random == x)
//		{
//			i++;
//			printf("�����մϴ�. �õ�Ƚ�� = %d\n", i);
//		}
//	} while (random != x);
//
//	return 0;
//}

//#include<stdio.h>
//int main(void) {
//	int i;
//
//	for (i = 0; i< 5; i++)
//		printf("Hello World!\n");
//
//	return 0;
//}

//#include<stdio.h>
//int main(void) {
//	int i, sum;
//
//	sum = 0;
//	for (i = 1; i <= 0; i++)
//		sum += i;
//
//	printf("1���� 10������ ������ �� = %d\n", sum);
//
//	return 0;
//}

//#include<stdio.h>
//int main(void) {
//	int i, n;
//	int sum = 1;
//	printf("������ �Է��Ͻÿ�: ");
//	scanf("%d", &i);
//	for (n = 1; n <= i; n++)
//		sum = n * sum;
//	printf("%d", sum);
//	return 0;
//}

//#include<stdio.h>
//int main(void) {
//	long fact = 1;
//	int i = 1, n;
//	printf("������ �Է��Ͻÿ�: ");
//	scanf("%d", &n);
//	while (i <= n)
//	{
//		fact = fact * i;
//		i++;
//	}
//	printf("%d!�� %d�Դϴ�.", n, fact);
//	return 0;
//}