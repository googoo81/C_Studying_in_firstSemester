//#include<stdio.h>
//int Fact(int n);
//
//int main(void) {
//	int input, result;
//
//	printf("정수 입력 : ");
//	scanf("%d", &input);
//
//	result = Fact(input);
//	printf("\n>> 결과 %d! = %d\n", input, result);
//}
//
//int Fact(int n) {
//	
//	if (n <= 1) {
//		return 1;
//	}
//	else
//	{
//		printf(">> 수행 %d! : %d * (%d - 1)\n", n, n, n);
//		return n * Fact(n - 1);
//	}
//}

//#include<stdio.h>
//int sum(int input);
//
//int main(void) {
//	int input, result;
//	printf("정수 입력 : ");
//	scanf("%d", &input);
//	
//	result = sum(input);
//	printf("결과 = %d\n", result);
//}
//
//int sum(int input) {
//	if (input <= 1) {
//		return 1;
//	}
//	else {
//		return input * input * input + sum(input - 1);
//	}
//}

//#include<stdio.h>
//void show_digit(int i);
//
//int main(void) {
//	int input;
//	printf("정수 입력 : ");
//	scanf("%d", &input);
//	printf("\n각 자릿수 출력\n");
//
//	show_digit(input);
//	printf("\n");
//}
//
//void show_digit(int i) {
//	if (i <= 0) {
//		return 1;
//	}
//	else {
//		show_digit(i / 10);
//	}
//	printf(" %d ", i % 10);
//}

//#include<stdio.h>
//int power(int n, int m);
//
//int main(void) {
//	int result;
//	result = power(2, 5);
//	printf("result = %d\n", result);
//	return 0;
//}
//int power(int n, int m) {
//	if (m <= 0) {
//		return 1;
//	}
//	else {
//		return n *= power(n, m - 1);
//	}
//}