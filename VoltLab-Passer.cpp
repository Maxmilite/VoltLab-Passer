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
    printf ("�������ƽ������ߵ��������֣����ϵ��������ÿո���� �س�ֹͣ����:\n");
    for (int i(1); i <= 3; ++i)
	scanf ("%d", &a[i]);
    printf ("�������ƽ�����ұ߷�������Ӧ����������\n");
    printf ("��Ӧ����Ϊ X��ʾ10 �ٱ�ʾ2 �б�ʾ1\n");
    printf ("���ϵ��������ÿո���� �س�ֹͣ����:\n");
    for (int i(1); i <= 3; ++i)
    {
	scanf ("%d", &b[i].val);
	b[i].num = i;
    }
    printf ("������Ŀ����ֵ �س�ֹͣ����:\n");
    	scanf ("%d", &ans);
    // std::sort (b + 1, b + 4);
    do
    {
	int tmp = 0;
	for (int i(1); i <= 3; ++i)
	    tmp += a[i] * b[i].val;
	if (tmp == ans)
	{
	    printf ("һ�����ӷ������ҵ�\n");
	    for (int i(1); i <= 3; ++i)
		printf ("%d �Žڵ� %d -------> %d �Žڵ� %d\n", i, a[i], b[i].num, b[i].val);
	    printf ("���� %d * %d + %d * %d + %d * %d = %d\n", a[1], b[1].val, a[2], b[2].val, a[3], b[3].val, ans);
	    system("pause");
	    return 0;
	}
    }
    while (std::next_permutation(b + 1, b + 4));
    printf ("����������Ч�����򼴽��Զ��˳�");
    system("pause");
    return 0;
}
