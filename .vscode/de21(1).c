#include<stdio.h>
#include<math.h>
// int Input()
// {
//     int x;
//     printf("Enter a number: "); scanf("%d",&x);
//     return x;
// }
// float F(int x, int n)
// {
//     float value = 0;
//     if (n > 1)
//     {
//         for(int i = 1; i <= n; i++)
//         {
//             value = (float)(x - n) / (n + n);
//         }
//			value += 1;
//     }
//     else {
//         value = sqrt(n) + 2016 * n;
//     }
//     return value;
// }
// int main()
// {
//     int y, m;
//     y = Input();
//     m = Input();
//     float value;
//     value = F(y, m);
//     printf("We have: %.1f", value);
// }
int main ()
{
    int n, a[30];
    printf ("Enter a value of N: "); scanf("%d", &n);
    printf("\t\t\tInput Array\n");
    int i;
    for(i = 1; i <= n; i++)
    {
        printf("A[%d] = ",i); scanf("%d", &a[i]);
    }
    printf("\t\t\tOutput Array\n");
    for(i = 1; i <= n; i++)
    {
        printf("%d   ", a[i]); 
    }
    printf("\n\t\t\tArrange the Array\n");
	int j,temp;
	for(i = 1 ; i < n ; i ++){
		for(j = i + 1 ; j <= n ; j ++){
			if(a[i] > a[j]){
				temp = a[j];
				a[j] = a[i];
				a[i] = temp;
			}
		}
	}
        printf("New Array:   ");
        for(i = 1; i <= n; i++)
    {
        printf("%d   ", a[i]); 
    }
    printf("\n\t\t\tA litlle X\n");
    int x;
    printf("Enter a X: "); scanf("%d",&x);
    int place = -1;
    for (i = 1; i <= n; i++)
    {
        if( a[i] >= x)
        {
            place = i;
            break;
        }
    }
    if (place == -1)
    {
    	a[n + 1] = x;
	}
	else
	{
		for(i = n; i >= place; i--)
		{
			a[i+1] = a[i];
		}
		a[place] = x;
	}
	for(i = 1; i <= n + 1; i++)
    {
        printf("%d   ", a[i]); 
    }
}