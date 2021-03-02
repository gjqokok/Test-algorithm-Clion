#include<stdio.h>
int insert_sort(int li[],int length){
	for(int i=1;i<length;i++){//i是摸到牌的下标
        int j,temp;
		j=i-1;//j指的的是手里牌的下标
        temp =li[i];//temp是摸到牌的值
		while(j>-1&&li[j]>temp){
			li[j+1]=li[j];//手中最右一个牌比摸到牌大就向右移动一位
			j--;//手中牌依次向左比较
		}
		li[j+1]=temp;
    }
    return 0;
}
int main() {
	int k;
	int li[] = { 9,5,6,2,7,1,7,4 };
	int length = sizeof(li) / sizeof(int);
	insert_sort(li, length);
	for (k = 0; k < length; k++) {
		printf("%d ", li[k]);
	}
	printf("\n");
	return 0;
}