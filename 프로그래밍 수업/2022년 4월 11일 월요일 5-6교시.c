//#include<stdio.h>
//int main(void) {
//    int 반감기 = 0, 마지막 = 0;
//    float 방사능물질 = 100;
//    printf("반감기를 입력하시오(년) :");
//    scanf_s("%d", &반감기);
//    while (방사능물질 > 10)
//    {
//        방사능물질 = 방사능물질 / 2;
//        마지막 = 마지막 + 반감기;
//        printf("%d년 후에 남은 양 : %f\n", 마지막, 방사능물질);
//    }
//    printf("1/10이하로 되기 까지 걸린 시간 %d년", 마지막);
//    return 0;
//}

//#include<stdio.h>
//int main(void) {
//	int number, sum = 0;
//	do
//	{
//		printf("정수를 입력하십시오 : ");
//		scanf("%d", &number);
//		sum += number;
//	} while (number != 0);
//
//	printf("숫자들의 합 = %d\n", sum);
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
//		printf("정답을 추측하여 보십시오: ");
//		scanf("%d", &x);
//		if (random < x)
//		{
//			i++;
//			printf("제시한 정수가 높습니다.\n");
//			
//		}
//		else if (random > x)
//		{
//			i++;
//			printf("제시한 정수가 낮습니다.\n");
//			
//		}
//		else if (random == x)
//		{
//			i++;
//			printf("축하합니다. 시도횟수 = %d\n", i);
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
//	printf("1부터 10까지의 정수의 합 = %d\n", sum);
//
//	return 0;
//}

//#include<stdio.h>
//int main(void) {
//	int i, n;
//	int sum = 1;
//	printf("정수를 입력하시오: ");
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
//	printf("정수를 입력하시오: ");
//	scanf("%d", &n);
//	while (i <= n)
//	{
//		fact = fact * i;
//		i++;
//	}
//	printf("%d!은 %d입니다.", n, fact);
//	return 0;
//}