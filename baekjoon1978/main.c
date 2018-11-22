//
//  main.c
//  baekjoon1978
//
//  Created by 이승섭 on 2018. 11. 15..
//  Copyright © 2018년 이승섭. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    int N, i;
    int arr[1000];
    int count = 0;
    int j, k = 0;
    
    scanf("%d", &N);
    
    if (0 <= N && N <= 100)
    {
        for(i = 0; i < N; i++)
            scanf("%d", &arr[i]);
    }
    for(i = 0; i < N; i++)
    {
        if(arr[i] == 0 || arr[i] == 1)
            continue;
        
        else
        {
            for(j = arr[i]; j > 0; j--)
            {
                if(arr[i] % j == 0)
                    k++;
            }
        }
        if(k == 2)
            count++;
        k = 0;
    }
    
    printf("%d \n", count);
    
    return 0;
}
