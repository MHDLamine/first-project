#include <stdio.h>
#include <stdlib.h>
#include <string.h>
    int i,j;
    char name [50];
    int coefmath = 8, coefpc = 8, coefsvt = 6;
    double note [3][2];
    char *matiere []= {"math", "pc", "svt"};
    double notemath, notepc, notesvt,notefinal;

void verification()
{
    while  ((note[i][j] < 0) || (note[i][j] > 20))
    {
        printf("Veuiller saisir la moyenne no: %d de %s\"choisit entre 0 et 20\"\n",j+1,matiere[i]);
        scanf("%lf",&note[i][j]);
    }
    
}
void affiche()
{
    printf("%s ta moyenne est de :%.2lf ce qui est : ",name,notefinal);
}

int main() 
{

   printf("Veuillez saisir ton nom complet \n");
   fgets(name,sizeof(name),stdin);
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("Veuiller saisir la moyenne no: %d de %s \n",j+1,matiere[i]);
            scanf("%lf",&note[i][j]);
            verification();  
        }
    }
    notemath = (note[0][0] + note[1][0]) / 2;
    notepc = (note[0][1] + note[1][1]) / 2;
    notesvt = (note[0][2] + note[1][2]) / 2;
    notefinal =((notemath * coefmath) + (notepc * coefpc) + (notesvt * coefsvt)) / (coefmath + coefpc + coefsvt);

         if (notefinal < 10)
    {
        affiche();printf("MEDIOCRE");
    }
    else if(notefinal == 10)
    {
       affiche();printf("PASSABLE");
    }
    else if((notefinal > 12) && (notefinal <=14.99))
    {
        affiche();printf("A BIEN");
    }
    else
    {
        affiche();printf("EXCELLENT");
    }
    
    
    return 0;
}
