#include<stdio.h>
int parttion(int li[],int left,int right){//归位一个中间值
	int temp = li[left];//用一个变量暂存归位值
	while(left<right){
		while(li[right]>=temp){
			right--;
		}
		li[left]=li[right];
		while(left<right&&li[left]<=temp){//注意此时若left=right时此循环不用执行left不用加1
			left++;
		}
		li[right]=li[left];
	}
	li[left]=temp;
	return left;
}
int quick_sort(int li[],int left,int right){
	if(left<right){
	int mid=parttion(li,left,right);
	quick_sort(li,left,mid-1);//递归排序mid左边
	quick_sort(li,mid+1,right);//递归排序mid右边
}

}
int main() {
	int k;
	int li[] = { 5,7,4,6,3,1,2,9,8 };
	int length = sizeof(li) / sizeof(int);
	//parttion(li, 0,length-1);
	quick_sort(li,0,length-1);
	for (k = 0; k < length; k++) {
		printf("%d ", li[k]);
	}
	printf("\n");
	return 0;
}
/*算法时间复杂度为O(nlogn).
快速排序的问题：
1：递归深度问题
2最坏情况
*/