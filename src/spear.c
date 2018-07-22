#include <stdio.h>
//課題３
//済
int n;
int k;
int A[100000];

int p(int m){
    //1 作れる 0　作れない
    int i;
    int l = 0;
    for(i = 0;i < n; i++){
        l += A[i]/m;
        
    }
    return l >= k;
}

int main(){
  int i, lb, ub;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }
    lb = 0;
    ub = 1000000001;
    while (ub - lb > 1){
        int m = (ub + lb)/2;
        if(p(m)){
            lb = m;
        }
        else {
            ub = m;
        }
    }
    printf("%d\n",lb);


  return 0;
}
