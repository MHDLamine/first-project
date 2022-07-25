#include <stdlib.h>
#include <stdio.h>


int motdepasse [] = {2000, 1999, 1998, 1997};
int tailleTab = 4;
int i = 0;
char valeursaisie [10] ;
int valeursaisieNBR;
int tentative = 2;
/*******************************************************************************************************
 * 
 *                                      CREATION DES FONCTIONS
 * 
 * *****************************************************************************************************/
//VERIFICATION si l'utilisateur à saisie un nombre
 int verifyNBR()
 {
        while ( ((valeursaisieNBR=atoi(valeursaisie)) == 0) && (tentative != 0) )
        {
        printf("Veuiller saisir le mot de passe en nombre, %d essai restante:\n",tentative);
        scanf("%s", valeursaisie);
        tentative--;

        }
        if((valeursaisieNBR=atoi(valeursaisie)) != 0)
        {
            return valeursaisieNBR;
        }
 }
//Fonction de vérification du valeur saisie
void verification()
       {
      i = 0;
       while ((i < tailleTab ) && (valeursaisieNBR  != motdepasse[i]))
       {
           i++;
       }
       }

void valide()
    {
        if (valeursaisieNBR == motdepasse[i])
             {
                printf("Mot de passe valide");
             }

    }
 /*******************************************************************************************************
 * 
 *                                      PROGRAMME PRINCIPAL
 * 
 * *****************************************************************************************************/
int main ()
   { 
    printf("Veuiller saisir le mot de passe :\n");
    scanf("%s", valeursaisie); 
    verifyNBR();
    verification();
    valide();
    while ((valeursaisieNBR != motdepasse[i]) && (tentative != 0))
            {
            printf("le code secret saisi est incorrect %d tentative restante\n",tentative);
            scanf("%s",valeursaisie);
            tentative--;
            verifyNBR();
            verification();
            valide();
            }
    if ((valeursaisieNBR != motdepasse[i]) && (tentative == 0))
                       {
                         printf("FIN des tentatives compte bloqué \n");
                       }
  return 0;
}