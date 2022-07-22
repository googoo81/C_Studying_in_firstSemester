//#include<stdio.h>
//#define DT 3
//
//int main(void) {
//	int score[DT];
//	int i, sum = 0;
//	float avg;
//	for (i = 1; i <= 3; i++)
//	{
//		printf("과목 %d 점수: ", i);
//		scanf("%d", &score[DT]);
//		sum += score[DT];
//	}
//	printf("총점: %d\n", sum);;
//	printf("평균: %.2f\n", (float)sum / 3);
//}

//#include<stdio.h>
//int main() {
//    int arr[] = { 1,2,3,4,5 };
//    for (int i = 4; i >= 0; i--) {
//        printf("%d ", arr[i]);
//    }
//}

//#include<stdio.h>
//int main() {
//    int temp = 0;
//    int arr[] = { 11,22,33,44,55 };
//    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]) - 1 - i; i++) {
//
//    temp = arr[4-i];
//        arr[4-i] = arr[i];
//        arr[i] = temp;
//    }
//    for (int i = 0; i < 5; i++) {
//        printf("%d\n", arr[i]);
//    }
//}

//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//int main() {
//    srand(time(NULL));
//    int arr[7] = { rand() % 20 + 5,rand() % 20 + 5,rand() % 20 + 5,rand() % 20 + 5,rand() % 20 + 5,rand() % 20 + 5,rand() % 20 + 5 };
//    for (int i = 0; i < 7; i++) {
//        printf("arr[%d] = %d\n", i, arr[i]);
//    }
//}

//#include<stdio.h>
//#define DT 3
//int main() {
//    int score[DT];
//    int i, sum = 0;
//    float avg;
//    for (int i = 0; i < sizeof(score) / sizeof(score[0]); i++) {
//        printf("과목 %d 점수 : ", i+1);
//        scanf_s("%d", &score[i]);
//    }
//    sum = score[0] + score[1] + score[2];
//    printf("총점 : %d\n", sum);
//    printf("평균 : %.2f\n",(float)sum / DT);
//
//}

//#include<stdio.h>
//int main() {
//    int arr[10] = { 1, 2 };
//    for (int i = 2; i < sizeof(arr) / sizeof(arr[0]); i++) {
//        arr[i] += arr[i - 1] + arr[i - 2];
//    }
//    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
//        printf("%3d", arr[i]);
//    }
//}

//#include<stdio.h>
//#include<limits.h>
//#define STUDENT 5
//int main() {
//    int min = INT_MAX;
//    int arr[STUDENT] = { 0 };
//    printf("성적 입력 : ");
//    for (int i = 0; i < 5; i++) {
//        scanf("%d",&arr[i]);
//        if (arr[i] < min)
//            min = arr[i];
//    }
//    printf("최소값 : %d\n", min);
//}

//#include<stdio.h>
//#define SIZE 11
//int main() {
//    int a;
//    int arr[SIZE] = { 0 };
//    while (1) {
//        printf("0~10까지 숫자 입력(종료는 -1) : ");
//        scanf("%d", &a);
//        if (a == -1) break;
//        arr[a]++;
//    }
//    printf("값\t\t빈도\n");
//    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
//        printf("%d\t\t%d\n",i,arr[i]);
//
//    }
//}