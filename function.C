#include <stdio.h>
int calc_zh (int a, int b, int c)
{
    int p = (a + b + c) / 3;//平均值
    int f = ((p - a) * (p - a) + (p - b) * (p - b) + (p - c) * (p - c)) / 3;//方差
    int zh = 3 * p - f / 3;//综合成绩
    return zh;
}
void sort_print(int zh1, int zh2, int zh3) 
{
  if (zh1 >= zh2 && zh2 >= zh3) {
      printf("小明 > 小强 > 小林");
  } else if (zh1 >= zh3 && zh3 >= zh2) {
      printf("小明 > 小林 > 小强");
  } else if (zh2 >= zh1 && zh1 >= zh3) {
      printf("小强 > 小明 > 小林");
  } else if (zh2 >= zh3 && zh3 >= zh1) {
      printf("小强 > 小林 > 小明");
  } else if (zh3 >= zh1 && zh1 >= zh2) {
      printf("小林 > 小明 > 小强");
  } else { // zh3 >= zh2 && zh2 >= zh1
      printf("小林 > 小强 > 小明");
  }
}
int main()
{
    int x1, x2, x3;//小明成绩
    int y1, y2, y3;//小强成绩
    int z1, z2, z3;//小林成绩

  printf("请输入小明的三项成绩(顺序为A B C,以一个空格为间隔）：");
  scanf("%d %d %d", &x1, &x2, &x3);
  printf("请输入小强的三项成绩(顺序为A B C,以一个空格为间隔）：");
  scanf("%d %d %d", &y1, &y2, &y3);
  printf("请输入小林的三项成绩(顺序为A B C,以一个空格为间隔）：");
  scanf("%d %d %d", &z1, &z2, &z3);

   int zh1 = calc_zh(x1, x2, x3);
   int zh2 = calc_zh(y1, y2, y3);
   int zh3 = calc_zh(z1, z2, z3);


   sort_print(zh1, zh2, zh3);
   return 0;
}