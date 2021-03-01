#include <stdio.h>
int select_sort(int li[],int length) {
	for (int i = 0; i < length-1; i++)//总共需要选择n-1趟
	{
		int min =i;
		for ( int j = i+1; j < length; j++)//遍历到数组下标为n-1时为止
		{
			if (li[j]<li[min])
			{
				min = j;
			}
			
		}
		int temp = 0;
		temp = li[i];
		li[i] = li[min];
		li[min] = temp;
		/*
		将无序序列的最小值与第一个值交换。
		*/
	}
	return 0;

}
int main() {
	int k;
	int li[] = { 2,5,6,8,7,8,7,5 };
	int length = sizeof(li) / sizeof(int);
	select_sort(li, length);
	for (k = 0; k < length; k++) {
		printf("%d ", li[k]);
	}
	printf("\n");
	return 0;
}