#include <stdio.h>
int bubble_sort(int li[],int length){
	int i,j;
	for( i = 0;i<length-1;i++){
		for( j = 0;j<length-1-i;j++){
			if(li[j]>li[j+1]){
				int temp = 0;
				temp = li[j];
				li[j]=li[j+1];
				li[j+1]=temp;
			}
		}
	}
	return 0;
}
int main(){
	int k;
	int li[]={2,5,6,8,7,8,7,5};
	int length = sizeof(li)/sizeof(int);
	bubble_sort(li,length);
	for( k=0; k<length; k++){
        printf("%d ", li[k]);
    }
    printf("\n");
	return 0;
} 

