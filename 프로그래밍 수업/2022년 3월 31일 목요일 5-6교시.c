//#include<stdio.h>
//int main(void) {
//	printf("--<<���� ���α׷�>>--\n\n");
//	printf("A. ����  B. ���  C. �ܰ� Ȯ��\n");
//	char Bank;
//	int a, b, c;
//	int Blance = 10000;
//	printf("���Ͻô� �޴��� �����ϼ��� : ");
//	scanf("%c", &Bank);
//
//	switch (Bank)
//	{
//	case 'a':
//	case 'A':
//		printf("\n�󸶸� �Ա��Ͻðڽ��ϱ�?");
//		scanf("%d", &a);
//		printf("���� �ܾ� : %d\n", Blance + a);
//		break;
//	case 'b':
//	case 'B':
//		printf("\n�󸶸� ����Ͻðڽ��ϱ�?");
//		scanf("%d", &b);
//		if (Blance - b >= 0)
//			printf("���� �ܾ� : %d\n", Blance - b);
//		else printf("�� �ܾ׺����Դϴ�\n");
//		break;
//	case 'c':
//	case 'C':
//		printf("\n���� �ܾ� : %d\n", Blance);
//		break;
//	default:
//		printf("\n�߸��� �޴��Դϴ�\n");
//		break;
//	}
//	return 0;
//}

//#include<stdio.h>
//int main(void) {
//	printf("--<<���� ��� ���α׷�>>--\n\n");
//	int a, b, c, d;
//	printf(">> ���� �ð�(�ð� ��) ex. 2 20: ");
//	scanf("%d %d", &a, &b);
//	printf(">> ���� �ð�(�ð� ��) ex. 3 30: ");
//	scanf("%d %d", &c, &d);
//	int x;
//	x = 60 * (c - a) + (d - b);
//	printf(">> ���� �ð�(��) : %d\n\n", x);
//
//	if (x <= 30)
//		printf("���� ����� %d�� �Դϴ�.\n", 2000);
//	else if (x > 30 && x <= 120 && x % 10 == 0)
//		printf("���� ����� %d�� �Դϴ�.\n", 500 * ((x - 30) / 10 ) + 2000);
//	else if (x > 30 && x <= 120 && x % 10 != 0)
//		printf("���� ����� %d�� �Դϴ�.\n", 500 * ((x - 30) / 10 + 1) + 2000);
//	else if (x > 120 && x % 10 == 0)
//		printf("���� ����� %d�� �Դϴ�.\n", 400 * ((x - 30) / 10 ) + 2000);
//	else if (x > 120 && x % 10 != 0)
//		printf("���� ����� %d�� �Դϴ�.\n", 400 * ((x - 30) / 10 + 1) + 2000);
//
//	return 0;
//}