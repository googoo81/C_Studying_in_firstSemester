//#include<stdio.h>
//int main(void) {
//	int x;
//	printf("���� �Է� : ");
//	scanf("%d", &x);
//
//	if (x > 10)
//		printf("x�� 10���� ũ��\n");
//
//	printf("����");
//	return 0;
//}

//#include<stdio.h>
//int main(void) {
//	int x;
//	printf("���� �Է� : ");
//	scanf("%d", &x);
//
//	if (x == 10)
//		printf("����!!\n");
//	
//	printf("����\n");
//	return 0;
//}

//#include<stdio.h>
//int main(void) {
//	int x;
//	printf("���� �Է� : ");
//	scanf("%d", &x);
//
//	if (x < 0)
//		x = -x;
//
//	printf("���밪�� %d�Դϴ�.", x);
//	return 0;
//}

//#include<stdio.h>
//int main(void) {
//	int a, b, c, sum;
//	printf("3���� ���� �Է� : ");
//	scanf("%d %d %d", &a, &b, &c);
//
//	sum = a + b + c;
//
//	if (((sum % 5) == 0) || ((sum % 10) > 5)) {
//		printf("sum = %d\n", sum);
//		printf("����\n");
//	}
//
//	return 0;
//}

//#include<stdio.h>
//int main(void) {
//	int x;
//	printf("���� �Է� : ");
//	scanf("%d", &x);
//
//	if (x % 2 == 0) {
//		printf("%d�� \"¦��\"�Դϴ�.\n", x);
//	}
//
//	else printf("%d�� \"Ȧ��\"�Դϴ�.\n", x);
//}

//#include<stdio.h>
//int main(void) {
//	int x, y;
//	printf("����, �и� ���ʴ�� �Է��Ͻÿ� :  ");
//	scanf("%d %d", &x, &y);
//
//	if (y == 0) {
//		printf("0���� ���� �� �����ϴ�.\n");
//	}
//
//	else printf("����� %d�Դϴ�.\n", x / y);
//	return 0;
//}

//#include<stdio.h>
//int main(void) {
//	int grade;
//	printf("������ �Է��Ͻÿ� : ");
//	scanf("%d", &grade);
//
//	if (100 < grade || grade < 0)
//		printf("���� ��� ������ �ƴմϴ�. �ٽ� �����ϼ���.");
//		
//	else {
//		if (grade >= 90)
//			printf("A����\n");
//
//		else if (grade >= 80)
//			printf("B����\n");
//
//		else if (grade >= 70)
//			printf("C����\n");
//
//		else if (grade >= 60)
//			printf("D����\n");
//
//		else printf("F����\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main(void) {
//	int x, y;
//	char op;
//	printf("������ �Է��Ͻÿ�(�� : 2 + 5) : ");
//	scanf("%d %c %d", &x, &op, &y);
//
//	if (op == '/' || op == '*' || op == '-' || op == '+' || op == '%') {
//		printf("��� ���\n");
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
//		else printf("�������� �ʴ� �������Դϴ�.\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main(void) {
//	char w;
//	printf("���ڸ� �Է��Ͻÿ� : ");
//	scanf("%c", &w);
//	if ('A' <= w && w <= 'Z')
//		printf("%c�� �빮��\n", w);
//	else if ('a' <= w && w <= 'b')
//		printf("%c�� �ҹ���\n", w);
//	else if ('0' <= w && w <= '9')
//		printf("%c�� ����\n", w);
//	else printf("%c�� ��Ÿ�����Դϴ�\n", w);
//	return 0;
//
//}