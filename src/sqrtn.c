#include <stdio.h>

int n;

int p(int m){
  return (long long int) m * m >= n;
}

int main(){
  int lb, ub;
  scanf("%d", &n);
  lb = 0;
  ub = n;
  while(ub - lb > 1) {
    int m = (lb + ub) / 2;
    if(p(m)){
      ub = m;
    }
    else {
      lb = m;
    }
  }
  printf("%d\n", ub);
  return 0;
}
