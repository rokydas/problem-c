// 2017 -> 4(b)
#include<stdio.h>
int main()
{
    int i=60;
    for(i=-1;i<50;i++)
    {
        if(i%5 == 0) continue;
        printf("%d\n", i);
    }
}

// here, those numbers are divided by 5 from -1 to 50
// will not be printed

// the output:
/* -1
1
2
3
4
6
7
8
9
11
12
13
14
16
17
18
19
21
22
23
24
26
27
28
29
31
32
33
34
36
37
38
39
41
42
43
44
46
47
48
49 */
