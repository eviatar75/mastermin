//
//  main.c
//  MasterMind
//
//  Created by Eviatar Houri on 16/09/2019.
//  Copyright © 2019 Eviatar Houri. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, const char * argv[]) {
    printf("bienvenue dans cette nouvelle partie de master mind !\n");
    int typeOfGame,drapeau;
    drapeau=0;
    int combinaison[5];
    int essai[5];
    printf("dans le cas ou vous voudriez jouer face a une ia, tapez 1 sinon tapez un autre chiffre\n");
    scanf("%i",&typeOfGame);
    if (typeOfGame==1)
    {
        for (int i=0; i<5; i++)
        {
            combinaison[i]=rand()%5;
        }
    }
    else
    {
        int i=0;
        while (i<5)
        {
            int tmp=0;
            printf("entrez un nombre entre 1 et 5 \n");
            scanf("%i",&tmp);
            if (tmp<=5 && tmp>0)
            {
                combinaison[i]=tmp;
                i=i+1;
            }
            else
            {
                printf("votre nombre n'est pas compris en 1 et 5 recommencez\n");
            }
        }
        /*int valeur=0;
        for (int i=0; i<5; i++)
        {
            int b=0;
            do {
                printf("entrez un nombre entre un 1 et 5\n");
                scanf("%i",&valeur);
                if (valeur<=5 && valeur>0)
                    {
                        combinaison[i]=valeur;
                        b=1;
                    }
                
                } while (b==0);
        }*/
    }
int finDePartie=0;
do {
    int i = 0;
    int tmp = 0;
    int step = 1;
    int resultat[5];
    finDePartie=1;
    while (i<5)
    {
        printf("entrez un nombre entre 1 et 5 \n");
        scanf("%i",&tmp);
        if (tmp<=5 && tmp>0)
        {
            essai[i]=tmp;
            i=i+1;
        }
        else
        {
            printf("votre nombre n'est pas compris en 1 et 5 recommencez\n");
        }
    }
    for (int j=0; j<5; j++)
    {
        int a=0;
        if (essai[j]==combinaison[j])
        {
            resultat[j]=2;
        }
        else
        {
            for (int k=0; k<5; k++)
            {
            
            if (essai[j]==combinaison[k] && k!=j)
            {
                resultat[j]=1;
            }
            if (essai[j]!=combinaison[k])
            {
                a++;
            }
        }
        }
        if (a==5) {
            resultat[j]=0;
        }
        
    printf("\n");
    }
    for (int j=0; j<5; j++) {
        printf("%i",resultat[j]);
    }
    for (int j=0; i<5; j++)
    {
        if (resultat[j]==2) {
            finDePartie=finDePartie+1;
        }
    }
    step=step+1;
}while (finDePartie!=5);
   
   return 0;
}
