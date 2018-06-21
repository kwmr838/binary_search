#include <stdio.h>
//課題３
//済
int n;
int k;
int A[100000];

int p(int m){
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
    lb = 1;
    ub = 100000000;
    while (ub - lb > 1){
        if(p(ub)){
            lb = ub-1; //強制終了
        }
        else if(p(lb) && p((lb+ ub)/2)){
            lb = (lb + ub) / 2;
        }
        else if(p(lb) && !p((lb+ub)/2)){
            ub = (lb + ub) /2;
        }
        else {
            ub = lb + 1; //強制終了
        }
    }
    
    if (p(ub) && p(lb)){
        printf("%d\n",lb);
    }
    else if(!p(ub) && !p(lb)){
        printf("0\n");
    }
    else if(p(ub) && !p(lb)){
        printf("%d\n",ub);
    }
    else {
        printf("%d\n",lb);
    }


  return 0;
}
