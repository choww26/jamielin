#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d%d", &a, &b);
    int c=a%b;

    printf("a�j��%d b����%d c�p��%d\n", a, b, c);
    ///while(c!=0){
    while(1){
        if(c==0) break;///���}�j��
        a=b;
        b=c;
        c=a%b;
        printf("a�j��%d b����%d c�p��%d\n", a, b, c);
    }
    printf("�]��c�O0�A���}�j��A�ӥB���׬O������b\n", b);
    printf("%d", b);
}
