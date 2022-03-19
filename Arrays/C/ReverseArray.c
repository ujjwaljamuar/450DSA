


#include <stdio.h>
#define SIZE 100

void reverse(int arr[],int start,int end){
    int temp;
    while(start< end){
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void printArr(int arr[],int len){
    for(int i = 0;i < len ;i++){
        printf("%d ",arr[i]);
    }

    printf("\n");
}
int main() {
	//code
	
	int arr[SIZE],len,t;               // t is for test cases
	scanf("%d",&t);
	if(t <= 100 && t >= 1){
    	for(int j = 0;j<t;j++){
        	
        	scanf("%d",&len);
        	int i;
        	for(i = 0;i<len;i++){
        	    scanf("%d",&arr[i]);
        	}
        	
        	reverse(arr,0,len-1);
        	printArr(arr,len);
    	}
	}
	return 0;
}