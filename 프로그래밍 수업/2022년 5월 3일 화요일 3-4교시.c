//#include<stdio.h>
//int main(void) {
//	int arr[5][5] = { 
//		{1, 2, 3}, 
//		{ 10,11,12,13,14 }, 
//		{ 1,1,1,1,1 }, 
//		{ 0,0,0,0,0 }, 
//		{ 2,2,2,2,2 }
//	};
//	
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			printf("yamistick %d\t", arr[j][i]);
//		}
//		printf("\n\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main(void) {
//	int x;
//	printf("배열 크기 입력 : ");
//	scanf("%d", &x);
//	int b[50][50] = { 0 };
//	int cnt = 0;
//	for (int i = 0; i < x; i++)
//	{
//		for (int j = 0; j < x; j++)
//		{
//			cnt++;
//			b[i][j] = cnt;
//		}
//	}
//	
//	for (int i = 0; i < x; i++)
//	{
//		for (int j = 0; j < x; j++)
//		{
//			printf("\t%d", b[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//#include<stdio.h>
//int main(void) {
//	int x;
//	printf("배열 크기 입력 : ");
//	scanf("%d", &x);
//	int b[50][50] = { 0 };
//	int cnt = 0;
//	for (int i = 0; i < x; i++)
//	{
//		for (int j = 0; j < x; j++)
//		{
//			cnt++;
//			b[i][j] = cnt;
//		}
//	}
//
//	for (int i = 0; i < x; i++)
//	{
//		for (int j = 0; j < x; j++)
//		{
//			printf("\t%d", b[j][i]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//#include<stdio.h>
//#define SIZE 5
//int main(void) {
//	int b[SIZE][SIZE] = { 0 };
//	int cnt = 0;
//
//	for (int i = 0; i < SIZE; i++)
//	{
//		if (i % 2 == 0)
//		{
//			for (int j = 0; j < SIZE; j++)
//			{
//				cnt++;
//				b[i][j] = cnt;
//			}
//		}
//		else if (i % 2 != 0)
//		{
//			for (int j = SIZE; j > 0; j--)
//			{
//				cnt++;
//				b[i][j - 1] = cnt;
//			}
//		}
//	}
//
//	for (int i = 0; i < SIZE; i++)
//	{
//		for (int j = 0; j < SIZE; j++)
//		{
//			printf("\t%d", b[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//#define SIZE 5
//int main(void) {
//	int b[SIZE][SIZE] = { 0 };
//	int cnt = 0;
//
//	for (int i = 0; i < SIZE; i++)
//	{
//		if (i % 2 == 0)
//		{
//			for (int j = 0; j < SIZE; j++)
//			{
//				cnt++;
//				b[j][i] = cnt;
//			}
//		}
//		else if (i % 2 != 0)
//		{
//			for (int j = SIZE; j > 0; j--)
//			{
//				cnt++;
//				b[j - 1][i] = cnt;
//			}
//		}
//	}
//
//	for (int i = 0; i < SIZE; i++)
//	{
//		for (int j = 0; j < SIZE; j++)
//		{
//			printf("\t%d", b[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main(void) {
//	int A[3][3] = {
//		{ 1,2,3 },
//		{ 4,5,6 },
//		{ 7,8,9 }
//	};
//	int B[3][3] = {
//		{ 9,8,7 },
//		{ 6,5,4 },
//		{ 3,2,1 }
//	};
//	int cnt = 0;
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			printf("\t%d", A[i][j] + B[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main(void) {
//	int grade[3][5] = { 0 };
//	int sub_sum = 0, sum = 0;
//
//	for (int i = 0; i < 3; i++)
//	{
//		printf("학급 %d 성적 입력(5명) : ", i + 1);
//		sub_sum = 0;
//		for (int j = 0; j < 5; j++)
//		{
//			scanf("%d", &grade[i][j]);
//			sub_sum += grade[i][j];
//		}
//		printf("학급 %d 성적 평균 : %.2f\n\n", i + 1, sub_sum / 5.0);
//		sum += sub_sum;
//	}
//
//	printf("\n전체 성적 평균 : %.2f\n", sum / 15.0);
//}