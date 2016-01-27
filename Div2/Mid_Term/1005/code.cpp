#include<stdio.h>
//给定一个年月日，计算这一年已经过的天数
bool Year (int y) {
    if(((y % 4 == 0) && (y % 100 != 0)) || (y % 400) == 0)
        return true;
    else
        return false;
}

int total_day(int year, int month, int day)
{
    int sum = 0;
    switch (month)
    {
    case 1:
        sum = day;
        break;
    case 2:
        sum = 31 + day;
        break;
    case 3:
        sum = 59 + day;
        break;
    case 4:
        sum = 90 + day;
        break;
    case 5:
        sum = 120 + day;
        break;
    case 6:
        sum = 151 + day;
        break;
    case 7:
        sum = 181 + day;
        break;
    case 8:
        sum = 212 + day;
        break;
    case 9:
        sum = 243 + day;
        break;
    case 10:
        sum = 273 + day;
        break;
    case 11:
        sum = 304 + day;
        break;
    case 12:
        sum = 334 + day;
        break;
  //  default:
  //      printf("输入的月份有错误\n");
        break;
    }
    if (month > 2)
    {
        if (Year(year))
        {
            sum = sum + 1;
        }
    }
    return sum;
}

// 年与年相差的天数
int total_year_day(int year1, int year2)
{

    int sum_year_day = 0;
    int i = 0;
    sum_year_day = (year2 - year1) * 365;
    for (i = year1; i < year2; i++)
    {
        if (Year(i))
        {
            sum_year_day = sum_year_day + 1;
        }
    }
    return sum_year_day;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("in.in", "r", stdin);
    freopen("out.out", "w", stdout);
#endif
    int year1 , month1 , day1 ;
    int year2 , month2 , day2 ;
    int sum = 0;
    int t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d/%d/%d", &year1, &month1, &day1);
        scanf("%d/%d/%d", &year2, &month2, &day2);
        sum =total_year_day(year1, year2) - total_day(year1, month1, day1) + total_day(year2, month2,day2);
        printf("%d\n", sum);
    }

    return 0;
}
