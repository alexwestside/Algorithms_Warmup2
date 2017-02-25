
#include <unistd.h>
#include <stdio.h>
#include <string.h>


int main(void)
{




}


//* Plus Minus *///////////////////////////////////////////////////////////////////////////////////
/*
int main(void)
{
    int N = 0;
    int x = 0;
    double p = 0;
    double n = 0;
    double z = 0;
    int i = 0;

    scanf("%d", &N);
    while(i < N)
    {
        scanf("%d", &x);
        x < 0 ? n++ : 0;
        x > 0 ? p++ : 0;
        x == 0 ? z++ : 0;
        i++;
    }
    printf("%f\n", p / N);
    printf("%f\n", n / N);
    printf("%f", z / N);
}
*/
//* Diagonal Difference *///////////////////////////////////////////////////////////////////////////////////
/*
int main(void)
{
	int N = 0;
	int n = 0;
	int i = 0;
	int a = 0;
	int b = 0;

	scanf("%d", &N);

	while(i < N * N)
	{
		scanf("%d", &n);
		if (!(i % (N + 1)))
			a += n;
		//printf("%d\t", a);
		if (!(i % (N - 1)) && i >= N - 1 && i != N * N - 1)
			b += n;
		//printf("%d\n", b);
		i++;
	}
	printf("%d", (int) fabs(a - b));
}
*/
//* A Very Big Sum *///////////////////////////////////////////////////////////////////////////////////
/*
int main(void)
{
    int N = 0;
    long long int res = 0;
    long long int num = 0;

    scanf("%d", &N);
    while(N--)
    {
        scanf("%lli", &num);
        res += num;
    }
    printf("%lli", res);
}
*/
//* Compare the Triplets *//////////////////////////////////////////////////////////////////////////////////
/*
int main(void)
{
    int A[4];
    int B[4];
    int i;
    int j;

    i = 0;
    j = 0;
    while(i < 3)
        {
            scanf("%d", &A[i]);
            i++;
        }

    while(j < 3)
    {

        scanf("%d", &B[j]);
        j++;
    }
    i = 0;
    A[3] = 0;
    B[3] = 0;
    while (i < 3)
    {
        A[i] > B[i] ? A[3] += 1 : 0;
        A[i] < B[i] ? B[3] += 1 : 0;
        i++;
    }
    printf("%d %d", A[3], B[3]);
}
*/
//* Simple Array Sum *///////////////////////////////////////////////////////////////////////////////////
/*
int main(void)
{
    int i = 0;
    int n = 0;
    int sum = 0;
    scanf("%d", &i);

    while(i--)
    {
        scanf("%d", &n);
        sum += n;
    }
    printf("%d", sum);
    return (0);
}
*/
//* Solve Me First *///////////////////////////////////////////////////////////////////////////////////
/*
int main(void)
{
    int a = 0;
    int b = 0;
    int res = 0;

    scanf("%d", &a);
    scanf("%d", &b);
    res = a + b;
    printf("%d", res);
}
*/
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
}
*/