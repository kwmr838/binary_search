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
    
    lb = 1;
    ub = 100000000;
    while (ub - lb > 1){
        if (p(lb) && p(ub) && p((lb + ub)/2)){
            ub = (lb + ub)/2;
        }
        else if(p(lb) && p(ub) && !p((lb + ub)/2)){
            lb = (lb + ub)/2;
        }
        else if(!p(lb) && p(ub) && p((lb + ub)/2)){
            ub = (lb + ub)/2;
        }
        else if(!p(lb) && p(ub) && !p((lb + ub)/2)){
            lb = (lb + ub)/2;
        }
        else if (p(lb) && !p(ub)){
            ub = (lb + ub)/2;
        }
    
    }
    if (p(ub) && p(lb)){
        printf("%d\n",lb);
    }
    else {
        printf("%d\n",ub);
    }

   
  return 0;
}
