#include <stdio.h>
//課題２
//済
int n;
int k;
int A[100000];

int p(int m){
    int i;
    int l = 0;
    for(i = 0;i < n; i++){
        if (A[i]%m  != 0){
        l += (A[i]/m) + 1;
        }
        else {
            l += A[i]/m;
        }
    }
    return l <= k;
}


int main(){
  int i, lb, ub;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }
    
    lb = 0;
    ub = 1000000000;
    while (ub - lb > 1){
        int m = (ub + lb)/2;
        if(p(m)){
            ub = m;
        }
        else {
            lb = m;
        }
    }
        printf("%d\n",ub);
    
   
  return 0;
}
    
