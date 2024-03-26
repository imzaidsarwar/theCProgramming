/*
    Exercise 4-1
    Write a function strrindex(s,t), which returns the position of the
    rightmost occurence of t in s, or -1 if there is none 
*/
#include<stdio.h>
#include<string.h>
int strrindex(char s[], char t[])
{
    int i = 0;
    int j = 0;
    int position = 0;
    int result = -1;
    for(i=0; s[i]!='\0'; i++)
    {
        for(j=i,position=0; t[position]!='\0' && s[j]==t[position];
        j++,position++)
        {
            ;
        }
        if(position>0 && t[position] == '\0')
            result =  i;
    }
    return result;
}
int main()
{
    char s[] = "abcdedfabcde";
    char t[] = "abc";
    printf("%d",strrindex(s,t));
    return 0;
}