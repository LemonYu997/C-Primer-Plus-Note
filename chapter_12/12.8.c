#include <stdio.h>
#include <windows.h>

int *make_array(int elem, int val);
void show_array(const int ar[], int n);

int main(void)
{
    int *pa;
    int size;
    int value;

    printf("Enter the number of elements: ");
    while (scanf("%d", &size) == 1 && size > 0)
    {
        printf("Enter the initialization value: ");
        scanf("%d", &value);
        pa = make_array(size, value);
        if (pa)
        {
            show_array(pa, size);
            free(pa);
        }
        printf("Enter the number of elements (<1 to quit): ");
    }
    printf("Done.\n");

    system("pause");
    return 0;
}

int *make_array(int elem, int val)
{
    int *ar;
    int i;

    ar = malloc(sizeof(int) * elem);
    for (i = 0; i < elem; i++)
        ar[i] = val;

    return ar;
}

void show_array(const int ar[], int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("%d ", ar[i]);
        if (((i + 1) % 8) == 0)                     //一行显示8个数
            printf("\n");
    }
    printf("\n");
}