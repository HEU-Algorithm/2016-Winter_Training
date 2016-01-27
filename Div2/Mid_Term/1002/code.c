#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student
{
	char name[25];
	int average, score[15];
}st[105];

int cmp(const void *a, const void *b) /*定义比较方式*/
{
	if ((*(struct student *)b).average - (*(struct student *)a).average)
		return (*(struct student *)b).average - (*(struct student *)a).average;
	else
		return strcmp((*(struct student *)a).name, (*(struct student *)b).name);
}

int main()
{
	int n, m, i, j, tot, subject[15];
	while(scanf("%d%d", &n, &m) != EOF)
	{
		tot = 0;
		for(i = 0; i < 105; i++) /*每次循环初始化为0*/
		{
			st[i].average = 0;
			memset(st[i].name, 0, sizeof(st[i].name));
			memset(st[i].score, 0, sizeof(st[i].score));
		}
		for(i = 0; i < n; i++)
			scanf("%d", &subject[i]), tot += subject[i];
		for(i = 0; i < m; i++)
		{
			scanf("%s", st[i].name);
			for(j = 0; j < n; j++)
			{
				scanf("%d", &st[i].score[j]);
				st[i].average += st[i].score[j] * subject[j];
			}
			st[i].average /= tot;
		}
		qsort(st, m, sizeof(struct student), cmp);
		for(i = 0; i < m; i++)
			printf("%s %d\n", st[i].name, st[i].average);
	}
	return 0;
}
