//#include<stdio.h>
//int main(void) {
//	char* p = "uneducatdkid";
//	printf("%s狼 农扁 : %d, 林家 : %d\n", p, sizeof(p), p);
//
//
//	for (int i = 0; p[i] != '\0'; i++)
//	{
//		printf("%c	", p[i]);
//	}
//	printf("\n");
//
//	p = "UNEDUCATDKID";
//	printf("%s狼 农扁 : %d, 林家 : %d\n", p, sizeof(p), p);
//}

//#include<stdio.h>
//#include<string.h>
//
//int main(void) {
//	char a[] = "elephant";
//	printf("%s狼 农扁 : %d, 林家 : %d\n", a, sizeof(a), a);
//
//	strcpy(a, "monkey");
//	printf("%s狼 农扁 : %d, 林家 : %d\n", a, sizeof(a), a);
//	
//	char* p = "where are you";
//	printf("%s狼 农扁 : %d, 林家 : %d\n", p, sizeof(p), p);
//
//	p = "I visit ZOO";
//	printf("%s狼 农扁 : %d, 林家 : %d\n", p, sizeof(p), p);
//}

//#include<stdio.h>
//int main() {
//	int* p[5];
//	int a = 10, b = 20, c = 30, d = 40, e = 50;
//	p[0] = &a;
//	p[1] = &b;
//	p[2] = &c;
//	p[3] = &d;
//	p[4] = &e;
//
//	printf("林家 : %d, 蔼 : %d\n", &a, a);
//	printf("林家 : %d, 蔼 : %d\n", &b, b);
//	printf("林家 : %d, 蔼 : %d\n", &c, c);
//	printf("林家 : %d, 蔼 : %d\n", &d, d);
//	printf("林家 : %d, 蔼 : %d\n", &e, e);
//
//	printf("\n");
//
//	for (int i = 0; i < 5; i++)
//	{
//		printf("林家 : %d, 蔼 : %d\n", p[i], *p[i]);
//	}
//}

//#include<stdio.h>
//int main(void) {
//	char fruits[][30] = { "banana", "watermelon", "strawberry", "mango" };
//	for (int i = 0; i < 4; i++)
//	{
//		printf("%s\n", fruits[i]);
//	}
//
//	char* p[] = { "banana", "watermelon", "strawberry", "mango" };
//	for (int i = 0; i < 4; i++)
//	{
//		printf("%s\n", p[i]);
//	}
//}

//#include<stdio.h>
//void merge(int* A, int* B, int* C, int size);
//
//int main(void) {
//	int A[] = { 2,5,7,8 };
//	int B[] = { 1,3,4,6 };
//	int C[8] = { 0 };
//	int size = sizeof(C);
//	merge(A, B, C, size);
//}
//void merge(int* A, int* B, int* C, int size) {
//	for (int i = 0; i < size / 2; i++)
//	{
//		*(C + i) = *(A + i);
//	}
//	for (int i = 4; i < size; i++)
//	{
//		*(C + i) = *(B + i - 4);
//	}
//	for (int i = 0; i < size; i++)
//	{
//		printf("%d	", *(C + i));
//	}
//}

//#include<stdio.h>
//void merge(int* A, int* B, int* C, int size) {
//    int tmp;
//    for (int i = 0; i < size; i++)
//    {
//        if (i < 4)
//            (C + i) = (A + i);
//        else
//            (C + i) = (B + i - 4);
//    }
//    for (int i = 0; i < size; i++) {
//        for (int j = i; j < size - 1; j++)
//            if (C[i] > C[j + 1])
//            {
//                tmp = C[j + 1];
//                C[j + 1] = C[i];
//                C[i] = tmp;
//            }
//    }
//}
//int main() {
//    int A[] = { 2,5,7,8 };
//    int B[] = { 1,3,4,6 };
//    int C[8];
//    merge(A, B, C, 8);
//    for (int i = 0; i < 8; i++)
//        printf("%d ", C[i]);
//}