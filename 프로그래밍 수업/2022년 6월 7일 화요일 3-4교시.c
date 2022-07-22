//#include<stdio.h>
//
//struct student
//{
//	int number;
//	char name[10];
//	double grade;
//};
//int main(void) {
//	struct student s;
//
//	s.number = 20190001;
//	strcpy(s.name, "홍길동");
//	s.grade = 4.3;
//
//	printf("학번 : %d\n", s.number);
//	printf("이름 : %s\n", s.name);
//	printf("학점 : %f\n", s.grade);
//	return 0;
//}

//#include<stdio.h>
//struct student
//{
//	int number;
//	char name[10];
//	double grade;
//};
//
//int main(void) {
//	struct student s;
//	
//	printf("학번을 입력하시오 : ");
//	scanf("%d", &s.number);
//
//	printf("이름을 입력하시오 : ");
//	scanf("%s", &s.name);
//
//	printf("학점을 입력하시오(실수) : ");
//	scanf("%lf", &s.grade);
//
//	printf("학번 : %d\n", s.number);
//	printf("이름 : %s\n", s.name);
//	printf("학점 : %f\n", s.grade);
//	return 0;
//}

//#include<stdio.h>
//#include <math.h>
//struct Coordinates
//{
//	int XCoordinates1;
//	int YCoordinates1;
//	int XCoordinates2;
//	int YCoordinates2;
//};
//int main(void){
//	struct Coordinates s;
//
//	printf("점의 좌표를 입력하시오(x y) : ");
//	scanf("%d %d", &s.XCoordinates1, &s.YCoordinates1);
//	printf("점의 좌표를 입력하시오(x y) : ");
//	scanf("%d %d", &s.XCoordinates2, &s.YCoordinates2);
//
//	double distance;
//	distance = sqrt(((s.XCoordinates1 - s.XCoordinates2) * (s.XCoordinates1 - s.XCoordinates2)) + ((s.YCoordinates1 - s.YCoordinates2) * (s.YCoordinates1 - s.YCoordinates2)));
//	printf("거리는 %lf입니다.", distance);
//}

//#include<stdio.h>
//struct point
//{
//	int x;
//	int y;
//};
//int main(void)
//{
//	struct point p1 = { 10,20 };
//	struct point p2 = { 30,40 };
//
//	p2 = p1;
//
//	//if (p1 == p2)
//	//{
//	//	printf("p1와 p2이 같습니다.");
//	//}
//	if ((p1.x == p2.x) && (p1.y == p2.y))
//	{
//		printf("p1와 p2이 같습니다.");
//	}
//}

//#include<stdio.h>
//enum days { SUN, MON, TUE, WED, THU, FRI, SAT };
//char* days_name[] = {
//	"sunday", "monday","tuesday","wednesday","thursday","friday","saturday" 
//};
//int main(void) {
//	enum dats d;
//	d = WED;
//	printf("%d번째 요일은 %s입니다\n", d, days_name[d]);
//	return 0;
//}

//#include<stdio.h>
//#define SIZE 3
//
//struct student
//{
//	int number;
//	char name[20];
//	double grade;
//};
//int main(void) {
//	struct student ump[SIZE];
//	for (int i = 0; i < SIZE; i++)
//	{
//		printf("학번을 입력하시오 : ");
//		scanf("%d", &ump[i].number);
//		printf("이름을 입력하시오 : ");
//		scanf("%s", ump[i].name);
//		printf("학점을 입력하시오(실수) : ");
//		scanf("%lf", &ump[i].grade);
//	}
//	for (int i = 0; i < SIZE; i++)
//	{
//		printf("학번 : %d, 이름 : %s, 학점 : %f\n", ump[i].number, ump[i].name, ump[i].grade);
//	}
//	return 0;
//}