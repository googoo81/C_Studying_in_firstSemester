//#include<stdio.h>
//int main(void) {
//
//	printf("����� �ߴ� �츮�� ����\n");
//	printf("**********************************\n");
//
//	printf("������ ���� �߾��� ���\n");
//	printf("**********************************\n");
//
//	printf("������ ��ε��, ������ �ḻ\n");
//	printf("**********************************\n");
//
//	printf("�װŸ� ���, �� ����ߴ�\n");
//	printf("**********************************\n");
//
//	return 0;
//}

//#include<stdio.h>
//void star();
//
//int main(void) {
//	printf("����� �ߴ� �츮�� ����\n");
//	star();
//	printf("������ ���� �߾��� ���\n");
//	star();
//	printf("������ ��ε��, ������ �ḻ\n");
//	star();
//	printf("�װŸ� ���, �� ����ߴ�\n");
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
//	printf("����� �ߴ� �츮�� ����\n");
//	love = star(1);
//	printf("%d", love);
//
//	printf("������ ���� �߾��� ���\n");
//	love = star(0);
//	printf("%d", love);
//
//	printf("������ ��ε��, ������ �ḻ\n");
//	love = star(0);
//	printf("%d", love);
//
//	printf("�װŸ� ���, �� ����ߴ�\n");
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
//		printf("����������������������������������\n");
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
//	printf("��ġ �Է� : ");
//	scanf("%f", &input);
//
//	Exchange(input);
//	return 0;
//}
//
//void Exchange(float input) {
//	printf("���� ȯ�� : %.2f inch�� %.2f cm", input, input * 2.54);
//	return;
//}

//#include<stdio.h>
//char Alpha();
//
//int main() {
//	char show;
//	printf("<<����� ���� �Լ����� �Է��� ���ĺ� ����>>\n");
//	show = Alpha();
//
//	printf("\n<<main�Լ� ����>>\n");
//	printf("���޹��� ���ĺ� : %c\n", show);
//	printf("�ƽ�Ű �ڵ� �� : %d\n", show);
//	return 0;
//}
//
//char Alpha() {
//	char x;
//	printf("���ĺ� ���� : ");
//	scanf("%c", &x);
//	return x;
//}

//#include<stdio.h>
//int Power(int x, int y);
//
//int main() {
//	int result;
//	result = Power(2, 10);
//	printf("��� = %d\n", result);
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
//	printf("���� �Է� : ");
//	scanf("%d", &input);
//	result = SUM(input);
//	printf("1���� %d���� �� = %d\n", input, result);
//
//	printf("���� �Է� : ");
//	scanf("%d", &input);
//	printf("1���� %d������ �� = %d\n", input, SUM(input));
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