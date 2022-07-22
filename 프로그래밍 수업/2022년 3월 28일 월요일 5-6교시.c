//#include<stdio.h>
//int main(void) {
//	int x;
//	printf("정수 입력 : ");
//	scanf("%d", &x);
//
//	if (x > 10)
//		printf("x는 10보다 크다\n");
//
//	printf("종료");
//	return 0;
//}

//#include<stdio.h>
//int main(void) {
//	int x;
//	printf("정수 입력 : ");
//	scanf("%d", &x);
//
//	if (x == 10)
//		printf("정답!!\n");
//	
//	printf("종료\n");
//	return 0;
//}

//#include<stdio.h>
//int main(void) {
//	int x;
//	printf("정수 입력 : ");
//	scanf("%d", &x);
//
//	if (x < 0)
//		x = -x;
//
//	printf("절대값은 %d입니다.", x);
//	return 0;
//}

//#include<stdio.h>
//int main(void) {
//	int a, b, c, sum;
//	printf("3개의 정수 입력 : ");
//	scanf("%d %d %d", &a, &b, &c);
//
//	sum = a + b + c;
//
//	if (((sum % 5) == 0) || ((sum % 10) > 5)) {
//		printf("sum = %d\n", sum);
//		printf("종료\n");
//	}
//
//	return 0;
//}

//#include<stdio.h>
//int main(void) {
//	int x;
//	printf("정수 입력 : ");
//	scanf("%d", &x);
//
//	if (x % 2 == 0) {
//		printf("%d는 \"짝수\"입니다.\n", x);
//	}
//
//	else printf("%d는 \"홀수\"입니다.\n", x);
//}

//#include<stdio.h>
//int main(void) {
//	int x, y;
//	printf("분자, 분모를 차례대로 입력하시오 :  ");
//	scanf("%d %d", &x, &y);
//
//	if (y == 0) {
//		printf("0으로 나눌 수 없습니다.\n");
//	}
//
//	else printf("결과는 %d입니다.\n", x / y);
//	return 0;
//}

//#include<stdio.h>
//int main(void) {
//	int grade;
//	printf("성적을 입력하시오 : ");
//	scanf("%d", &grade);
//
//	if (100 < grade || grade < 0)
//		printf("점수 허용 구간이 아닙니다. 다시 시작하세요.");
//		
//	else {
//		if (grade >= 90)
//			printf("A학점\n");
//
//		else if (grade >= 80)
//			printf("B학점\n");
//
//		else if (grade >= 70)
//			printf("C학점\n");
//
//		else if (grade >= 60)
//			printf("D학점\n");
//
//		else printf("F학점\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main(void) {
//	int x, y;
//	char op;
//	printf("수식을 입력하시오(예 : 2 + 5) : ");
//	scanf("%d %c %d", &x, &op, &y);
//
//	if (op == '/' || op == '*' || op == '-' || op == '+' || op == '%') {
//		printf("계산 결과\n");
//		if (op == '/')
//			printf("%d %c %d = %d", x, op, y, x / y);
//		else if (op == '*')
//			printf("%d %c %d = %d", x, op, y, x * y);
//		else if (op == '-')
//			printf("%d %c %d = %d", x, op, y, x - y);
//		else if (op == '+')
//			printf("%d %c %d = %d", x, op, y, x + y);
//		else if (op == '%')
//			printf("%d %c %d = %d", x, op, y, x % y);
//		else printf("지원되지 않는 연산자입니다.\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main(void) {
//	char w;
//	printf("문자를 입력하시오 : ");
//	scanf("%c", &w);
//	if ('A' <= w && w <= 'Z')
//		printf("%c는 대문자\n", w);
//	else if ('a' <= w && w <= 'b')
//		printf("%c는 소문자\n", w);
//	else if ('0' <= w && w <= '9')
//		printf("%c는 숫자\n", w);
//	else printf("%c는 기타문자입니다\n", w);
//	return 0;
//
//}