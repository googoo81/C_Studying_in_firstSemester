//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//
//int main(void) {
//	int a;
//	printf(">>> 숫자 맞추기 게임 <<<\n");
//	printf("1부터 10까지 숫자를 입력하세요 : ");
//	scanf("%d", &a);
//	srand(time(NULL));
//	int x = rand() % 10 + 1;
//	if (a == x)
//		printf("정답입니다.");
//	else printf("틀렸습니다. 정답은 %d 입니다.", x);
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//
//int main(void) {
//	int n;
//	printf(">>> 가위바위보 게임 시작 <<<\n\n");
//	printf("\n3가지 중 선택하세요.\n");
//	printf("(1. 가위_ 2. 바위_ 3. 보 ).\n");
//	printf("사용자 입력 : ");
//	scanf("%d", &n);
//	srand(time(NULL));
//	int x = rand() % 3 + 1;
//
//	if (n == x)
//		printf("\n>> 비겼습니다! 컴퓨터는 %d를 냈습니다.", x);
//	else if ((n == 1 && x == 3) || (n == 2 && x == 3) || (n == 3 && x == 1))
//		printf("\n>> 이겼습니다. 컴퓨터는 %d를 냈습니다.", x);
//	else printf("\n>> 졌습니다. 컴퓨터는 %d를 냈습니다.\n", x);
//
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//
//int main(void) {
//	int n;
//	int a, b, c;
//	a = b = c = 0;
//	int x = rand() % 3 + 1;
//	while (1) {
//		printf(">>> 가위바위보 게임 시작 <<<\n\n");
//		printf("\n3가지 중 선택하세요.\n");
//		printf("(1. 가위_ 2. 바위_ 3. 보_ 0. 종료).\n");
//		printf("사용자 입력 : ");
//		scanf("%d", &n);
//		srand(time(NULL));
//
//		if (n == x) {
//			printf("\n>> 비겼습니다! 컴퓨터는 %d를 냈습니다.", x);
//			a++;
//		}
//		else if ((n == 1 && x == 3) || (n == 2 && x == 3) || (n == 3 && x == 1)) {
//			printf("\n>> 이겼습니다. 컴퓨터는 %d를 냈습니다.", x);
//			b++;
//		}
//		else if (n == 0) {
//			printf("게임을 종료합니다. %d판 %d승 %d패 %d무 하셨습니다.", a + b + c, b, a, c);
//			break;
//		}
//		else if (n > 3)
//			printf("잘못 입력했습니다. 번호를 다시 입력하세요");
//		else {
//			printf("\n>> 졌습니다. 컴퓨터는 %d를 냈습니다.\n", x);
//			c++;
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//int main(void) {
//	int number;
//	scanf("%d", &number);
//	switch (number) 
//	{
//	case 0:
//		printf("없음\n");
//		break;
//	case 1:
//		printf("하나\n");
//		break;
//	case 2:
//		printf("둘\n");
//		break;
//	default:
//		printf("많음\n");
//		break;
//	}
//}

//#include<stdio.h>
//int main(void) {
//	int x;
//	printf("정수 입력 : ");
//	scanf("%d", &x);
//	switch (x % 3)
//	{
//	case 0:
//		printf("%d는 3의 배수입니다.", x);
//		break;
//	default:
//		printf("%d는 3의 배수가 아닙니다.", x);
//		break;
//	}
//	return 0;
//}

//#include<stdio.h>
//int main(void) {
//	int m;
//	printf("달 입력 : ");
//	scanf("%d", &m);
//	switch (m)
//	{
//	case 4:
//	case 6:
//	case 9:
//	case 11:
//		printf("%d의 일수는 30입니다.", m);
//		break;
//	case 2:
//		printf(" %d의 일수는 28입니다.", m);
//		break;
//	default:
//		printf("%d의 일수는 31입니다.", m);
//		break;
//	}
//	return 0;
//}

//#include<stdio.h>
//int main(void) {
//	int x, y;
//	char op;
//	printf("수식을 입력하시오(예 : 2 + 5) : ");
//	scanf("%d %c %d", &x, &op, &y);
//
//	switch (op)
//	{
//	case '+':
//		printf("\n계산 결과\n%d %c %d = %d\n", x, op, y, x + y);
//		break;
//	case '-':
//		printf("\n계산 결과\n%d %c %d = %d\n", x, op, y, x - y);
//		break;
//	case '*':
//		printf("\n계산 결과\n%d %c %d = %d\n", x, op, y, x * y);
//		break;
//	case '/':
//		printf("\n계산 결과\n%d %c %d = %d\n", x, op, y, x / y);
//		break;
//	case '%':
//		printf("\n계산 결과\n%d %c %d = %d\n", x, op, y, x % y);
//		break;
//	default:
//		printf("지원되지 않는 연산자 입니다.\n");
//		break;
//	}
//	return 0;
//}

//#include<stdio.h>
//int main(void) {
//	int g;
//	printf("성적을 입력하시오 : ");
//	scanf("%d", &g);
//
//	if (g <= 100 && g >= 0)
//	{
//		switch (g / 10)
//		{
//		case 10:
//		case 9:
//			printf("A학점\n");
//			break;
//		case 8:
//			printf("B학점\n");
//			break;
//		case 7:
//			printf("C학점\n");
//			break;
//		case 6:
//			printf("D학점\n");
//			break;
//		default:
//			printf("F학점\n");
//			break;
//	}
//	}
//	else printf("점수 허용 구간이 아닙니다. 다시 시작하세요.\n");
//	return 0;
//}