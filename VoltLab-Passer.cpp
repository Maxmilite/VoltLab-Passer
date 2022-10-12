#include <cstdio>
#include <algorithm>
using namespace std;
int a[5], ans;
struct node
{
    int num, val;
    bool operator< (const node &x)
    {return num < x.num;}
}   b[5];
int main()
{
    printf ("---------------- Grand Theft Auto 5 VoltLab Passer ----------------\n");
    printf ("请输入破解界面左边的三个数字，由上到下依次用空格隔开 回车停止输入:\n");
    for (int i(1); i <= 3; ++i)
	scanf ("%d", &a[i]);
    printf ("请输入破解界面右边符号所对应的三个数字\n");
    printf ("对应规则为 X表示10 ≠表示2 中表示1\n");
    printf ("由上到下依次用空格隔开 回车停止输入:\n");
    for (int i(1); i <= 3; ++i)
    {
	scanf ("%d", &b[i].val);
	b[i].num = i;
    }
    printf ("请输入目标数值 回车停止输入:\n");
    	scanf ("%d", &ans);
    // std::sort (b + 1, b + 4);
    do
    {
	int tmp = 0;
	for (int i(1); i <= 3; ++i)
	    tmp += a[i] * b[i].val;
	if (tmp == ans)
	{
	    printf ("一种连接方法已找到\n");
	    for (int i(1); i <= 3; ++i)
		printf ("%d 号节点 %d -------> %d 号节点 %d\n", i, a[i], b[i].num, b[i].val);
	    printf ("满足 %d * %d + %d * %d + %d * %d = %d\n", a[1], b[1].val, a[2], b[2].val, a[3], b[3].val, ans);
	    system("pause");
	    return 0;
	}
    }
    while (std::next_permutation(b + 1, b + 4));
    printf ("输入数据无效，程序即将自动退出");
    system("pause");
    return 0;
}
