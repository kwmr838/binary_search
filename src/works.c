#include <stdio.h>
//課題４
int n;
int k;
int A[100000];

int p(int m){
    int i;
    int x = 0;
    int t = 1;
    for(i = 0;i < n; i++){
        if (m < A[i]){
            return 0;
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
    if (t > k){
        return 0;
    }
    else {
        return 1;
    }
}

int main(){
  int i, lb, ub;
    lb = 0;
    ub = 1000000000;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }
    while(ub - lb > 1){
        int m = (ub + lb)/2;
        if(p(m)){
            ub = m;
        }
        else {
            lb = m;
        }
    }
    printf("%d/n",ub);
    
  return 0;
}
