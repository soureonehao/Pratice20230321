#include<stdio.h>
void main() {
	int Odd = 0, Even = 0, i;
	printf("����������1~100������֮�ͼ�ż��֮�ͣ�\n");
	for (i = 1; i <= 100; i++) {
		if (i % 2 != 0) {
			Odd += i;
		}
		else if (i % 2 == 0) {
			Even += i;
		}
	}
	printf("������Ϊ%d,\nż����Ϊ%d��", Odd, Even);
}