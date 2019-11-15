    #include <stdio.h>
     
    #define n 4
     
    int main(void) {
        int i, min_i = 0, a[n] = {4, 2, 3, 5};
        
        for (i = 0; i < n; ++i)
            printf("%d ", a[i]);
        printf("\n");
     
        for (i = 0; i != n; ++i)
        {
            if (a[min_i] > a[i])  min_i = i;
        }
     
        for (i = min_i; i < n - 1; ++i)
            a[i] = a[i+1];
        a[n - 1] = 0;
        
        for (i = 0; i < n; ++i)
            printf("%d ", a[i]);
        printf("\n");
        
        return 0;
    }
