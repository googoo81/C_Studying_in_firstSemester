//#include<stdio.h>
//int main(void) {
//	char a[] = { 'a','p','p','l','e','\0' };
//	char arr1[] = "apple";
//	char arr2[] = "apple banana";
//	char arr3[] = "apple\0 banana";
//
//	printf("%s狼 农扁 : %d, 林家 : %d\n", a, sizeof(a), a);
//	printf("%s狼 农扁 : %d, 林家 : %d\n", arr1, sizeof(arr1), arr1);
//	printf("%s狼 农扁 : %d, 林家 : %d\n", arr2, sizeof(arr2), arr2);
//	printf("%s狼 农扁 : %d, 林家 : %d\n", arr3, sizeof(arr3), arr3);
//
//	arr1[0] = 'h';
//	arr1[1] = 'e';
//	arr1[2] = 'l';
//	arr1[3] = 'l';
//	arr1[4] = 'o';
//	printf("%s狼 农扁 : %d, 林家 : %d\n", arr1, sizeof(arr1), arr1);
//}

//#include<stdio.h>
//#include<string.h>
//
//int main(void) {
//	char a[] = "apple";
//	char b[10];
//	
//	strcpy(a, "hello");
//	printf("%s\n", a);
//	strcpy(b, a);
//	printf("%s\n", b);
//
//	char c[] = "ice cream";
//	printf("%d\n", strlen(c));
//
//	char d[] = "abcd";
//	char e[] = "abcd";
//	printf("%d\n", strcmp(d, e));
//
//	char f[10] = "ice";
//	char g[] = "cream";
//	strcat(f, g);
//	printf("%s\n", f);
//}