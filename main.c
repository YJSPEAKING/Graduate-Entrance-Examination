#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
/*
int main()//显示RuntimeError
{
    int i;//输入的整数
    int j = 0;//整数的位数
    scanf("%d", &i);
    int x = i;
    while (x != 0) {//得到整数的位数
        j++;
        x = x / 10;
    }
    int k = j / 2;
    int l = k;
    int p = 1;
    int m, n;//m,n分别表示高低位
    int q, r;//为了%可以正常运行
    if (j == 2 * k) {//位数为偶数
        while (l) {
            q = i / pow(10, k + l - 1);
            m = q % 10;
            r = pow(10, p);
            n = ((i % r) / pow(10, p - 1));
            if (m != n) {
                printf("no");
                return -1;
            }
            p++;
            l--;
        }
        printf("yes");
    }
    else{//位数为奇数
        while (l >= 0) {
            q = i / pow(10, k + l);
            m = q % 10;
            r = pow(10, p);
            n = ((i % r) / pow(10, p - 1));
            if (m != n) {
                printf("no");
                return -1;
            }
            p++;
            l--;
        }
        printf("yes");
    }
    return 0;
}
*/
int main(void) {//将所输入的数据转换为反向顺序，然后再在后面的条件语句判断两组数据是否吻合
    int sum, k, m;
    scanf("%d", &k);
    sum = 0;
    m = k;
    while (m) {
        sum = sum * 10 + m % 10;
        m /= 10;
    }
    if (sum == k) {
        printf("yes");
    }
    else {
        printf("no");
    }
}