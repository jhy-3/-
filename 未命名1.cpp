#include <cstdio>
#include <cstring>
char flag[31];
char code[]={
0x9c,0x91,0x8c,0x8c,0x84,0x88,0xcc,0x93,0x9c,0xcf,
0x92,0x9a,0xa0,0xc8,0x90,0xa0,0x8d,0xcc,0x89,0xcc,
0x8d,0xca,0x9a,0xa0,0x88,0xcf,0x8d,0xce,0x9b,0x82};
int main()
{
    scanf("%30s",flag);
    if (strlen(flag)!=30) return 0;
    for (int i=0;i<30;i++) if (~flag[i]!=code[i]) return 0;
    printf("Congratulation.");
    return 0;
}
