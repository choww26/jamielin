#include <stdio.h>
int main()
{///��²�檺��¦�� �q��
    for(int i=0; i<4; i++){
        printf("i:%d\n",i);
    }///�]�|��:0123

    ///��²�檺��¦�� �H���ƼƦr
    for(int i=1; i<=4; i++){
        printf("�H�����ƪk:%d\n",i);
    }///�]�|��:1234

    for(int i=0; i<=4; i++){
        printf("�ǩǪ�.. %d\n",i);
    }///�ǩǪ��A�i�H�q��¦�����L��
}