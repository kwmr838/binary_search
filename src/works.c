#include <stdio.h>
//課題４
int n;
int k;
int A[100000];

int p(int m){
    int i;
    int x = 0;
    int t = 0;
    for(i = 0;i < n; i++){
        if (m < A[i]){
            t = k;
            break;
        }
        if (x + A[i] > m){
            x = A[i];
            t += 1;
        }
        else {
            x += A[i];
        }
    }
    if (t + 1 > k){
        return 0;
    }
    else {
        return 1;
    }
}

int main(){
  int i, lb, ub;
    lb = 1;
    ub = 10000;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }
    while(ub - lb > 1){
        if(p(lb)){
            ub = (ub + lb)/2;
        }
        if(!p(lb) && p((ub + lb)/2)){
            ub = (ub + lb)/2;
        }
        if(!p(lb) && !p((ub + lb)/2)){
            lb = (ub + lb)/2;
        }
       
       }
    if(p(lb)){
        printf("%d\n",lb);
    }
    else{
        printf("%d\n",ub);
    }
    
    

  return 0;
}
