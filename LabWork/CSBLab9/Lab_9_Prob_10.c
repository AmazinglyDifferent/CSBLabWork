#include<stdio.h>
#include<string.h>

void pluralize (char word[])
{
  int i;
  i = strlen(word);

  if (word[i - 1] == 'y') 
  {  
    word[i - 1] = 'i';
    word[i] = 'e';
    word[i + 1] = 's';
    word[i + 2] = '\0';  
  }
  else if ((word[i - 1] == 's' || (word[i- 2] == 'c' && word[i - 1] == 'h')) ||(word[i - 2] == 's' && word[i - 1] == 'h'))
  {  
    strcat(word, "es");
  }
  else
  {  
    strcat(word, "s");
  }

  printf("New word is: %s", word);
}

int main()
{
  char noun[20];   
  printf("Enter a noun in singular form: ");
  scanf("%s", noun);

  pluralize (noun);
  return 0;
}
