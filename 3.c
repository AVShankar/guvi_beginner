#include<stdio.h>
int main()
{
char ch;
scanf("%c", &ch);
if( (ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
{
  if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
  printf("Vowel");
  else 
  printf("Consonant");
}
else
printf("invalid");
return 0;
}
