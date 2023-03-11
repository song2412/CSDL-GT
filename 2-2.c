#include<stdio.h>
#include<conio.h>

long giaithua(int n)
{
    if(n == 0)
    return 1;
    return giaithua(n - 1) * n;
}
int main()
{
    int n, S;
    printf (" \n Nhap n = "); 
    scanf("%d", &n);
    S = giaithua(n);
    printf("S = %d", S);
    getch();
    return 0;
}