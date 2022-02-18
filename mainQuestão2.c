#include <stdio.h>
#include <stdlib.h>

int main()
{   char palavra[20];
    int i;
    int minuscula, maiuscula, especial;
    int len,resto;
    printf("Digite a senha: ");
    gets(palavra);

  minuscula = 0;
	maiuscula = 0;
	especial = 0;

  len=strlen(palavra);
    if (strlen(palavra)<6){
       resto=abs(6-len);
       printf("\nFaltam %i caracteres\n",resto);
      }
      else
      {
      printf("\nEsta senha apresenta %i caracteres\n",len);
       }
    for(int i=0;palavra[i]!='\0';i++)
    {

      if((palavra[i]>='A' && palavra[i]<='Z') || (palavra[i]>='a' && palavra[i]<='z'))
        {
            if((palavra[i]>='A' && palavra[i]<='Z'))
            {
                maiuscula++;
            }
            else
            {
                minuscula++;
            }
        }
        else
        {
            especial++;
        }
    }
      return 0;
}

