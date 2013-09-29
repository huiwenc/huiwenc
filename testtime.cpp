#include<cstdio>
#include<cstdlib>
#include<iostream>
using namespace std;
int main()
{
    double time = clock();
    int sum = 0;
    for( int i = 0;i < 1000000000;i++) sum+=i;
    printf("Time %.5lf %d\n",(double)(clock()-time)/CLOCKS_PER_SEC,sum);
    system("pause");
    return 0;
}
