#include <stdio.h>
// 課題１
// 済
int n;
int k;
int A[100000];

int p(int m){
    if(A[m] >= k){
        return 1;
    }
    else {
        return 0;
    }
}

int main(){
  int i, lb, ub;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }
    lb = -1;
    ub = n;
    while(ub - lb > 1){
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
