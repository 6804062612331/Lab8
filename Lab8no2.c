#include <stdio.h>
int checkscore(char std[],char K[],int CA[]);
int Compare(int CA[]);
int main() {
    int i,j,count[10] = {0,0,0,0,0,0,0,0,0,0};
    char ans[8][10]={
        {'A','B','A','C','C','D','E','E','A','D'},//7
		{'D','B','A','B','C','A','E','E','A','D'},//6
		{'E','D','D','A','C','B','E','E','A','D'},//5
		{'C','B','A','E','D','C','E','E','A','D'},//4
		{'A','B','D','C','C','D','E','E','A','D'},//8
		{'B','B','E','C','C','D','E','E','A','D'},//7
		{'B','B','A','C','C','D','E','E','A','D'},//7
		{'E','B','E','C','C','D','E','E','A','D'}};//7

	char keys[10]={'D','B','D','C','C','D','A','E','A','D'};
	for(i=0;i<8;i++){
    	printf("std %d => %d\n", (i+1), checkscore(ans[i],keys,count));
	}
    printf("the hardest no. = no.%d\n",Compare(count));
}
int checkscore(char std[],char K[],int CA[]){
	int result=0;
	for(int i=0;i<10;i++){
		if(std[i]==K[i]){
			result +=1;
            CA[i]++;
		}
	}
	return result;
}

int Compare(int CA[]){
    int min = 99,index;
    for(int i =0;i<10;i++){
        if(min>CA[i]){
            min = CA[i];
            index = i+1;
        }
    }
    return index;
}
