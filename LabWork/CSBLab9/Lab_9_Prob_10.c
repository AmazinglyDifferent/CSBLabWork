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

  printf("Plural form is: %s\n", word);
}

int main()
{
  for( int i=0; i<9; i++){
    printf("Singular form: ");
    char noun[20];   
    scanf("%s", noun);
    printf("%s",noun);
    printf("\n");
    pluralize (noun);
  }
  return 0;
}
