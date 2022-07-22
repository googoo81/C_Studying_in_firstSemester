//#include<stdio.h>
//int main(void) {
//
//	printf("사랑을 했다 우리가 만나\n");
//	printf("**********************************\n");
//
//	printf("지우지 못랄 추억이 됬다\n");
//	printf("**********************************\n");
//
//	printf("볼만한 멜로드라마, 괜찮은 결말\n");
//	printf("**********************************\n");
//
//	printf("그거면 됬다, 널 사랑했다\n");
//	printf("**********************************\n");
//
//	return 0;
//}

//#include<stdio.h>
//void star();
//
//int main(void) {
//	printf("사랑을 했다 우리가 만나\n");
//	star();
//	printf("지우지 못할 추억이 됬다\n");
//	star();
//	printf("볼만한 멜로드라마, 괜찮은 결말\n");
//	star();
//	printf("그거면 됬다, 널 사랑했다\n");
//	star();
//
//	return 0;
//}
//
//void star() {
//	printf("**********************************\n");
//	return;
//}

//#include<stdio.h>
//int star(int num);
//
//int main() {
//	int love;
//	printf("사랑을 했다 우리가 만나\n");
//	love = star(1);
//	printf("%d", love);
//
//	printf("지우지 못할 추억이 됬다\n");
//	love = star(0);
//	printf("%d", love);
//
//	printf("볼만한 멜로드라마, 괜찮은 결말\n");
//	love = star(0);
//	printf("%d", love);
//
//	printf("그거면 됬다, 널 사랑했다\n");
//	love = star(1);
//	printf("%d", love);
//}
//
//int star(int num) {
//	if (num == 0)
//	{
//		printf("**********************************\n");
//		return 100;
//	}
//	else if (num == 1) {
//		printf("♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥\n");
//		return 50;
//	}
//	else {
//		printf("----------------------------------\n");
//		return 0;
//	}
//}

//#include<stdio.h>
//void Exchange(float input);
//
//int main() {
//	float input;
//	printf("인치 입력 : ");
//	scanf("%f", &input);
//
//	Exchange(input);
//	return 0;
//}
//
//void Exchange(float input) {
//	printf("단위 환산 : %.2f inch는 %.2f cm", input, input * 2.54);
//	return;
//}

//#include<stdio.h>
//char Alpha();
//
//int main() {
//	char show;
//	printf("<<사용자 정의 함수에서 입력한 알파벳 전달>>\n");
//	show = Alpha();
//
//	printf("\n<<main함수 영역>>\n");
//	printf("전달받은 알파벳 : %c\n", show);
//	printf("아스키 코드 값 : %d\n", show);
//	return 0;
//}
//
//char Alpha() {
//	char x;
//	printf("알파벳 전달 : ");
//	scanf("%c", &x);
//	return x;
//}

//#include<stdio.h>
//int Power(int x, int y);
//
//int main() {
//	int result;
//	result = Power(2, 10);
//	printf("결과 = %d\n", result);
//	return 0;
//}
//
//int Power(int x, int y) {
//	int i;
//	int result = 1;
//	for (i = 0; i < y; i++)
//	{
//		result *= x;
//	}
//	return result;
//}

//#include<stdio.h>
//int SUM(int x);
//
//int main() {
//	int input, result = 0;
//	printf("정수 입력 : ");
//	scanf("%d", &input);
//	result = SUM(input);
//	printf("1부터 %d까지 합 = %d\n", input, result);
//
//	printf("정수 입력 : ");
//	scanf("%d", &input);
//	printf("1부터 %d까지의 합 = %d\n", input, SUM(input));
//	return 0;
//}
//
//int SUM(int x) {
//	int i, sum = 0;
//	for (i = 1; i <= x; i++)
//	{
//		sum += i;
//	}
//	return sum;
//}