#include<stdio.h>
#include<string.h>
int main()
{
    printf("enter the string : ");
    char str[100];
    scanf("%[^\n]s",str);

    int ar[26];
    for(int i =0;i<26;i++)ar[i] = 0;
    int maxInd = 0;
    int max = 0;
    for(int i =0;str[i]!='\0';i++){
        char ch = str[i];
        ar[ch-'a']++;
        if(max < ar[ch-'a']){
            max = ar[ch-'a'];
            maxInd = ch-'a';
        }
    }
    printf("%c occurs max about %d times",(char)maxInd+'a',max);
    return 0;
}                        