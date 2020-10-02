#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int search(char*,char*);
int main()
{
    char txt[]="MY NAME IS ALI SUN ZARA MANCHALI";
    char pat[] = "MANCHALI";
    int pos=search(pat,txt);
    if(pos !=-1)
    {
        printf("\nPATTERN FOUND AT INDEX %d",pos+1);
    }
    else
    {
        printf("\nNO MATCH\n");
    }
    return 0;
}
int search(char*pat,char*txt)
{
    int p=strlen(pat);
    int t=strlen(txt);
    int *d=(int *)malloc(p*sizeof(int));
    d[0]=0;
    for(int i=0,j=0;i<p;i++)
    {
        while(j>0 && pat[j]!=pat[i])
        {
            j=d[j-1];
        }
        if(pat[j]==pat[i])
        {
            j++;
            d[i]=j;
        }
    }
    for(int i=0,j=0;i<t;i++)
    {
        while(j<0 && pat[j]!=txt[i])
        {
            j=d[j-1];
        }
        if(pat[j]==txt[i])
        {
            j++;
        }
        if(j==p)
        {
            free(d);
            return i-j+1;
        }
    }
    free(d);
    return -1;
}
