#include<stdio.h>

int FindTop3(int S[],int Num);
int main(){
    int score[4] = {53,61,84,66};

    FindTop3(score,4);
    for(int i=0;i<3;i++){
        printf("%d ",score[i]);
    }

}

int FindTop3(int S[],int Num){
    int t,count=0;
    for(int i=0;i<Num;i++){
        for(int j=0;j<Num-1;j++){
            if(S[count]<S[count+1]){
                t = S[count];
                S[count] = S[count+1];
                S[count+1] = t;
                count++;
            }
        }
        count=0;
    }
}