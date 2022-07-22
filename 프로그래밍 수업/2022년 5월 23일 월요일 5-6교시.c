//#include<stdio.h>
//int main(void) {
//	int a = 5;
//	char b = 'a';
//	double c = 2.5;
//
//	printf("a의 값 : %d\n", a); //10 ~ 13번지 --> 10번지 반환
//	printf("b의 값 : %c\n", b);
//	printf("c의 값 : %.2lf\n\n", c);
//
//	// & : ampersand, 주소 참조 연산자 --> 시작 주소 값 반환.
//	// 주소 출력 : %d, %u, %p, %x
//	printf("a의 주소 : %p\n", &a);
//	printf("b의 주소 : %p\n", &b);
//	printf("c의 주소 : %p\n\n", &c);
//
//	// pointer: 주소를 저장하는 변수
//	// 메모리에 직접 접근해서 조작 
//	// --> 자료구조, 동적 할당, 함수(call by reference)
//
//	// *: asterisk
//	// 1. 포인터 변수 선언
//	// 2. 간접 참조 연산자
//
//	int* ap = NULL; //주소 0을 저장
//	ap = &a;
//	char* bp = &b;
//	double* cp = &c;
//
//	printf("포인터 변수로 a의 주소 : %p\n", ap); //10
//	printf("포인터 변수로 b의 주소 : %p\n", bp); //20
//	printf("포인터 변수로 c의 주소 : %p\n\n", cp); //30
//	
//	// *: 간접 참조 연산자
//	printf("포인터 변수로 a의 값 : %d\n", *ap); //10 ~ 13번지
//	printf("포인터 변수로 b의 값 : %c\n", *bp); //20번지
//	printf("포인터 변수로 c의 값 : %.2lf\n", *cp); //30 ~ 37번지
//	return 0;
//}


//#include<stdio.h>
//void swap(int a, int b); //call by value
//void swap2(int* ap, int* bp); //call by value
//
//int main(void) {
//	int x = 10, y = 20;
//	printf("교환 전 x = %d, y = %d\n\n", x, y);
//	swap(x, y);
//	printf("교환 후 x = %d, y = %d\n\n", x, y);
//	swap2(&x, &y);
//	printf("교환 후 x = %d, y = %d\n\n", x, y);
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
//	printf("합 = %d\n", sum);
//	printf("차 = %d\n", diff);
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
//	printf("정수의 합은 %d \n", x + y);
//	return 0;
//}
//
//void get_int(int* px, int* py) {
//	scanf("%d %d", px, py);
//}