#include <stdio.h>

int main(void)
{
  int n;
  
  printf("n = ");
  scanf("%d", &n);
  
  if( ( n & 1 ) == 0 ){//()がなければ 1==0 を先に処理してしまい 条件式の値は常に 0 になってしまい正しく動かないから
    printf("%d は偶数です\n", n);
  }
  return 0;
} 
