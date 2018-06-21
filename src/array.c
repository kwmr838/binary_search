#include <stdio.h>
// 課題１
// 済
int n;
int k;
int A[100000];


int main(){
  int i, lb, ub;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }
    lb = 0;
    ub = n-1;
    while(ub - lb > 1){
        int m = (ub + lb)/2;
        if(A[m] >= k){
            ub = m;
        }
        else {
            lb = m;
        }
    }
    if (A[lb] >= k){
        printf("%d/n", lb);
    }
    else if(A[ub] >= k){
            printf("%d\n",ub);
        }
     
    else {
        printf ("%d\n",n);
    }
        

  return 0;
}
