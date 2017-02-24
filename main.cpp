
#include <unistd.h>
#include <stdio.h>
#include <string.h>


int main(void)
{




}

/*

int main(void)
{
	int num = 7;
	int prev, curr, next;

	prev = 0;
	curr = 1;
	num -= 2;
	while (num--)
	{
		next = prev + curr;
		prev = curr;
		curr = next;
	}
	printf("%d", curr);
}

int main(void)
{
    int M = 100;
    int N = 1000;
    long long sum = 0;
    long i = 0;

    while (i != M && i != N) {
        sum += ((M - i) * (N - i)) * (i++ == 0 ? 1 : 2);
        printf("%lld\n", sum);
    }
    printf("%lld", sum);

}

int main(void) {
    int i;
    int j = 0;
    int tmp;
    int a[7] = {18, 10, 15, 20, 20, 10, 3};

    while (j < 6) {
        i = 0;
        while (i < 6) {
            if (a[i] > a[i + 1]) {
                tmp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = tmp;
            }
            i++;
        }
        j++;
    }
    printf("%d, %d", a[0], a[1]);
}*/