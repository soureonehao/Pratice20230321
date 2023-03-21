#include<stdio.h>
void main() {
	int Odd = 0, Even = 0, i;
	printf("计算正整数1~100的奇数之和及偶数之和！\n");
	for (i = 1; i <= 100; i++) {
		if (i % 2 != 0) {
			Odd += i;
		}
		else if (i % 2 == 0) {
			Even += i;
		}
	}
	printf("奇数和为%d,\n偶数和为%d。", Odd, Even);
}