#include <stdio.h>
void func2(int *ptr){
    for (int  i = 0; i < 4; i++)
    {
        printf("The value at %d is %d\n",i,*(ptr+i));
    }
    // scanf("%d",&*(ptr+2));
    // *(ptr+2)=92;
    
}
int main(int argc, char const *argv[])
{
    int arr[] = {23,13,3,4};
    func2(arr);
    // printf("j");
        func2(arr);

    return 0;
}