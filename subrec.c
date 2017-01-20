#include <stdio.h>
#include <stdlib.h>
#include <math.h>
  void findSubsets(int *value, int n, int i) 
  {
        int j;
        if (i < 0)
        return;
        printf("{");
        for (j = 0; j < n; j++)
		 {
                if (i & (1 << j)) {
                        printf("%d ", value[j]);
                }
        }
        printf("}\n");
        findSubsets(value, n, i - 1);
        return;
  }
  int main() 
  {
        int i, j, count, n, *value;
        printf("Enter the number of elements:");
        scanf("%d", &n);
        value = (int *)malloc(sizeof(int) * n);
        for (i = 0; i < n; i++) {
                printf("Data[%d]: ",i);
                scanf("%d", &value[i]);
        }
        count = pow(2, n);
        findSubsets(value, n, count - 1);
        return 0;
  }
