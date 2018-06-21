#include <stdio.h>

int main() {
  int f, m, r;
  
  while (1){
    scanf("%d%d%d", &m, &f, &r);

    if ( m==-1 && f==-1 && r==-1) break;
    
    if ( f==-1 || m==-1 ) printf("F\n");
    else if ( f+m >= 80 ) printf("A\n");
    else if ( f+m >= 65 ) printf("B\n");
    else if ( f+m >= 50 ) printf("C\n");
    else if ( f+m >= 30 ) {
      if ( r >= 50 ) printf("C\n");
      else printf("D\n");
    }
    else printf("F\n");
  }
  
  return 0;
}
