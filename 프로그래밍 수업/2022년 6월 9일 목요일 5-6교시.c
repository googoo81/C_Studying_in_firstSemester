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
//	struct student s = { 20070001,"ȫ�浿",4.3 };
//	struct student* p;
//
//	p = &s;
//
//	printf("�й�: %d, �̸�: %s, ����: %f \n", s.number, s.name, s.grade);
//	printf("�й�: %d, �̸�: %s, ����: %f \n", (*p).number, (*p).name, (*p).grade);
//	printf("�й�: %d, �̸�: %s, ����: %f \n", p->number, p->name, p->grade);
//}

//#include<stdio.h>
//struct date
//{
//	int month;
//	int day;
//	int year;
//};
//struct student
//{
//	int number;
//	char name[20];
//	double grade;
//	struct date* dob;
//};
//int main(void){
//	struct date d = { 3,20,1980 };
//	struct student s = { 20190001,"Kim",4.3 };
//
//	s.dob = &d;
//
//	printf("�й�: %d\n", s.number);
//	printf("�̸�: %s\n", s.name);
//	printf("����: %f\n", s.grade);
//	printf("�������: %d�� %d�� %d��\n", s.dob->year, s.dob->month, s.dob->day);
//
//	return 0;
//}

//#include<stdio.h>
//union example
//{
//	int i;
//	char c;
//};
//int main(void) {
//	union example v;
//	v.c = 'A';
//	printf("v.c: %c\tv.i: %i\n", v.c, v.i);
//	v.i = 10000;
//	printf("v.c: %c\tv.i: %i\n", v.c, v.i);
//}