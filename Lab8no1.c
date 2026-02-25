#include <stdio.h>

int findMax(int num[],int size);
void printAr(int myAr[],int size);
void addthree(int number[], int pos[4][2],int psize);

int main() {
	int number[5] = {20,50,100,99,9};
	int max,numsize = sizeof(number)/sizeof(number[0]);
	int pos[4][2] = {{1,10},{2,20},{3,30},{4,40}};
	int psize = sizeof(pos)/(sizeof(pos[0][0])*2);
	printf("Before Add:\n");
	printAr(number,numsize);
	addthree(number,pos,psize);
	printf("After Add:\n");
	printAr(number,numsize);
}

int findMax(int num[],int size) {
	int maximum,i=0;
	maximum = num[i];

	for(i=0;i<size;i++) {
		if(num[i] > maximum)
			maximum = num[i];
	}
	return maximum;
}
void printAr(int myAr[],int size){
	int max = findMax(myAr,size);
	for(int i=0;i<size;i++){
		printf("number[%d] : %d\n",i+1,myAr[i]);
	}
	printf("Maximum of these number is %d\n",max);
}

void addthree(int number[], int pos[4][2],int psize){
	for(int i=0;i<psize;i++){
		number[pos[i][0]] += pos[i][1];
	}
}

