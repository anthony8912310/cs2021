//
//  main.c
//  sumTest
//
//  Created by admin on 2021/4/4.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int m,n;
    scanf("%d %d",&m,&n);
    long long product,sum=0;
    for(int i=1;i<=n;i++)
    {
        product = 1;
        for (int j=1; j<=m; j++) {
            product*=i;
        }
        sum += product;
    }
    printf("%llu\n",sum);
    return 0;
}
