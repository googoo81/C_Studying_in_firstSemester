//#include<stdio.h>
//int main(void) {
//	int a = 5;
//	char b = 'a';
//	double c = 2.5;
//
//	printf("a�� �� : %d\n", a); //10 ~ 13���� --> 10���� ��ȯ
//	printf("b�� �� : %c\n", b);
//	printf("c�� �� : %.2lf\n\n", c);
//
//	// & : ampersand, �ּ� ���� ������ --> ���� �ּ� �� ��ȯ.
//	// �ּ� ��� : %d, %u, %p, %x
//	printf("a�� �ּ� : %p\n", &a);
//	printf("b�� �ּ� : %p\n", &b);
//	printf("c�� �ּ� : %p\n\n", &c);
//
//	// pointer: �ּҸ� �����ϴ� ����
//	// �޸𸮿� ���� �����ؼ� ���� 
//	// --> �ڷᱸ��, ���� �Ҵ�, �Լ�(call by reference)
//
//	// *: asterisk
//	// 1. ������ ���� ����
//	// 2. ���� ���� ������
//
//	int* ap = NULL; //�ּ� 0�� ����
//	ap = &a;
//	char* bp = &b;
//	double* cp = &c;
//
//	printf("������ ������ a�� �ּ� : %p\n", ap); //10
//	printf("������ ������ b�� �ּ� : %p\n", bp); //20
//	printf("������ ������ c�� �ּ� : %p\n\n", cp); //30
//	
//	// *: ���� ���� ������
//	printf("������ ������ a�� �� : %d\n", *ap); //10 ~ 13����
//	printf("������ ������ b�� �� : %c\n", *bp); //20����
//	printf("������ ������ c�� �� : %.2lf\n", *cp); //30 ~ 37����
//	return 0;
//}


//#include<stdio.h>
//void swap(int a, int b); //call by value
//void swap2(int* ap, int* bp); //call by value
//
//int main(void) {
//	int x = 10, y = 20;
//	printf("��ȯ �� x = %d, y = %d\n\n", x, y);
//	swap(x, y);
//	printf("��ȯ �� x = %d, y = %d\n\n", x, y);
//	swap2(&x, &y);
//	printf("��ȯ �� x = %d, y = %d\n\n", x, y);
//	return 0;
//}
//
//void swap(int a, int b) {
//	int temp;
//	temp = a;
//	a = b;
//	b = temp;
//}
//
//void swap2(int* ap, int* bp) {
//	int temp;
//	temp = *ap;
//	*ap = *bp;
//	*bp = temp;
//}

//#include<stdio.h>
//void get_sum_diff(int x, int y, int* p_sum, int* p_diff);
//
//int main(void) {
//	int sum = 0, diff = 0;
//	get_sum_diff(100, 200, &sum, &diff);
//	printf("�� = %d\n", sum);
//	printf("�� = %d\n", diff);
//	return 0;
//}
//
//void get_sum_diff(int x, int y, int* p_sum, int* p_diff) {
//	*p_sum = x + y;
//	*p_diff = x - y;
//}


//#include<stdio.h>
//void get_int(int* px, int* py);
//
//int main(void) {
//	int x, y;
//	get_int(&x, &y);
//	printf("������ ���� %d \n", x + y);
//	return 0;
//}
//
//void get_int(int* px, int* py) {
//	scanf("%d %d", px, py);
//}