#include <stdio.h>
#include <string.h>

int main(void)
{
    int entre;
    int retire;
    int card;
    char name[32];

    printf("Metez 1 pour entré votre carte dans le distributeur : ");
    scanf("%d", &entre)


    if (entre == 1)
    {
        printf("Combien voulais vous retire ? : ");
        scanf("%d", &retire);
    } else {
        printf("Carte non entré");
        return 1;
    }

    if (retire >= 20)
    {
        printf("Vueillez entre votre code a 4 chiffre : ");
        scanf("%d", &card);

       if (card >= 1000 && card <= 9999)
       {
            printf("Code Bon\n");
            printf("Vueillez entre votre nom : ");
            scanf("%31s", name);

            if (strlen(name) >= 2)
            {
                printf("Merci pour toute ces information je confirme votre retrait...\n");
                printf("Vous avez bien ressu %d euro merci dutilise la banque c industries\n", retire);
            } else {
                printf("Metez votre vrais nom merci");
                return 1;
            }
            
       } else {
        printf("4Chiffre pas plus pas moin !");
        return 1;
       }
                        

    } else {
        printf("Retire minimume 20€");
        return 1;
    }
    return 0;
}
