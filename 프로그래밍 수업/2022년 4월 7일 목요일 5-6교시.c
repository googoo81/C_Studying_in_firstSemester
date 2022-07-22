//#include<stdio.h>
//int main(void) {
//	int i = 0;	
// 
//	while (i < 0) {
//		printf("Hello World!\n");
//		i++;
//	}
// 
//	return 0;
//}

//#include<stdio.h>
//int main(void) {
//	int i, n;
//	i = 1;
//	printf("출력하고 싶은 단을 입력하시오 : ");
//	scanf("%d", &n);
//
//	while (i <= 9) {
//		printf("%d * %d = %d\n", n, i, i * n);
//		i++;
//	}
//
//	return 0;
//}

//#include<stdio.h>
//int main(void) {
//	int n = 1;
//	printf("====================\n");
//	printf(" n	n의 제곱\n");
//	printf("====================\n");
//222
//	while (n <= 10) {
//		printf(" %d	%d\n", n, n * n);
//		n++;
//	}
//	
//	return 0;
//}

//#include<stdio.h>
//int main(void) {
//	int n, sum = 0;
//	int i = 1;
//	printf("정수를 입력하시오 : ");
//	scanf("%d", &n);
//
//	while (i <= n + 1)
//	{
//		sum = sum + i;
//		i++;
//	}
//
//	printf("1부터 %d까지의 합은 %d입니다.\n", n, sum);
//	return 0;
//}

//#include<stdio.h>
//int main(void) {
//	int n, i, sum;
//	sum = 0;
//	i = 2;
//	printf("정수를 입력하시오 : ");
//	scanf("%d", &n);
//
//	while (i <= n + 1)
//	{
//		sum = sum + i;
//		i += 2;
//	}
//
//	printf("1부터 %d까지의 짝수의 합은 %d입니다.", n, sum);
//	return 0;
//}

//#include<stdio.h>
//int main(void) {
//	int grade, sum, n;
//	sum = 0;
//	grade = 0;
//	n = 0;
//	printf("성적입력을 종료하려면 음수를 입력하시오.\n");
//
//	while (grade >= 0)
//	{
//		printf("성적을 입력하시오: ");
//		scanf("%d", &grade);
//		sum = sum + grade;
//		n++;
//	}
//
//	sum = sum - grade;
//	n--;
//	printf("성적의 평균은 %f입니다.\n", (float)sum / (float)n);
//	return 0;
//}

//#include<stdio.h>
//#include<limits.h>
//int main(void) {
//	int number, min_value = INT_MAX;
//	printf("정수를 입력하시오\n");
//	printf("종료는 Ctrl+z\n");
//	while (scanf("%d", &number) != EOF)
//	{
//		if (number < min_value)
//			min_value = number;
//	}
//	printf("최소값은 %d", min_value);
//	return 0;
//}

//#include<stdio.h>
//int main(void) {
//	int grade, n;
//	float sum, average;
//
//	//필요한 변수들을 초기화한다.
//	n = 0;
//	sum = 0;
//	grade = 0;
//
//	printf("종료 시 음수 입력");;
//}