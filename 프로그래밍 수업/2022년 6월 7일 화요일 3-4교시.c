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
//	strcpy(s.name, "ȫ�浿");
//	s.grade = 4.3;
//
//	printf("�й� : %d\n", s.number);
//	printf("�̸� : %s\n", s.name);
//	printf("���� : %f\n", s.grade);
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
//	printf("�й��� �Է��Ͻÿ� : ");
//	scanf("%d", &s.number);
//
//	printf("�̸��� �Է��Ͻÿ� : ");
//	scanf("%s", &s.name);
//
//	printf("������ �Է��Ͻÿ�(�Ǽ�) : ");
//	scanf("%lf", &s.grade);
//
//	printf("�й� : %d\n", s.number);
//	printf("�̸� : %s\n", s.name);
//	printf("���� : %f\n", s.grade);
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
//	printf("���� ��ǥ�� �Է��Ͻÿ�(x y) : ");
//	scanf("%d %d", &s.XCoordinates1, &s.YCoordinates1);
//	printf("���� ��ǥ�� �Է��Ͻÿ�(x y) : ");
//	scanf("%d %d", &s.XCoordinates2, &s.YCoordinates2);
//
//	double distance;
//	distance = sqrt(((s.XCoordinates1 - s.XCoordinates2) * (s.XCoordinates1 - s.XCoordinates2)) + ((s.YCoordinates1 - s.YCoordinates2) * (s.YCoordinates1 - s.YCoordinates2)));
//	printf("�Ÿ��� %lf�Դϴ�.", distance);
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
//	//	printf("p1�� p2�� �����ϴ�.");
//	//}
//	if ((p1.x == p2.x) && (p1.y == p2.y))
//	{
//		printf("p1�� p2�� �����ϴ�.");
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
//	printf("%d��° ������ %s�Դϴ�\n", d, days_name[d]);
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
//		printf("�й��� �Է��Ͻÿ� : ");
//		scanf("%d", &ump[i].number);
//		printf("�̸��� �Է��Ͻÿ� : ");
//		scanf("%s", ump[i].name);
//		printf("������ �Է��Ͻÿ�(�Ǽ�) : ");
//		scanf("%lf", &ump[i].grade);
//	}
//	for (int i = 0; i < SIZE; i++)
//	{
//		printf("�й� : %d, �̸� : %s, ���� : %f\n", ump[i].number, ump[i].name, ump[i].grade);
//	}
//	return 0;
//}