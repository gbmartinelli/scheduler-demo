#include <stdio.h>

int main() {
int a[5];
int n;
int nao_exec = 0; 

  scanf("%d %d %d %d %d %d", &(a[0]), &(a[1]), &(a[2]), &(a[3]), &(a[4]), &n);

  for (int i=1; i<=n; i++) {
   
	if(i%a[0] == 0) {
		printf("0");
	} else { nao_exec++; }
 	if(i%a[1] == 0) {
                printf("1");
        } else { nao_exec++; }
	if(i%a[2] == 0) {
                printf("2");
        } else { nao_exec++; }
	if(i%a[3] == 0) {
                printf("3");
        } else { nao_exec++; }
	if(i%a[4] == 0) {
                printf("4");
        } else { nao_exec++; }

	if(nao_exec == 5) {
		printf("-");
	}
	printf("\n");
	nao_exec=0;
 }

  return 0;
}
