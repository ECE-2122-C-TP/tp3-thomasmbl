#include <stdio.h>
// TP3 Mabille Thomas
int exercice1() {
    int a=0, b=0;
    printf("Saisir deux entier\n");
    scanf(" %d%d",&a,&b);
    if(a<=b) {
        printf("%d est le plus grand", b);
    }
    else if(a>b) {
        printf("%d est le plus grand", a);
    }

}

int exercice2() {
    int longueur=0, largeur=0;
    printf("entrez la longueur\n");
    scanf(" %d", &longueur);
    printf("entrez la largeur\n");
    scanf(" %d", &largeur);
    printf("Le perimetre de votre rectangle vaut %d m et l'air est de %d m2", 2*longueur+2*largeur, longueur*largeur );

}

int exercice3() {
    int entier=0;
    const int constanteModulo = 3;
    printf("Saisir un entier\n");
    scanf(" %d", &entier);
    if(entier%constanteModulo==0, entier>=10) {
        printf("%d est multiple de %d et est superieur a 10\n", entier, constanteModulo);
    }
    else {
        printf("Erreur, %d n'est pas multiple de %d ou n'est pas superieur ou egal a 10\n", entier, constanteModulo);
    }
}

#define AGE_MAX_TARIF_ENFANT 12
#define AGE_MAX_TARIF_JEUNE 17
#define AGE_MAX_TARIF_ETUDIANT 27
#define AGE_MIN_TARIF_SENIOR 65

int exercice4() {
    int ageClient=0;
    int etudiant=0;
    int tarifEnfant=4, tarifJeune=6,tarifSenior=6, tarifPlein=9;
    printf("Saisir votre age\n");
    scanf(" %d", &ageClient);
    printf("Etes vous etudiant (1=oui,0=non)?\n");
    scanf(" %d", &etudiant);
    if(ageClient<AGE_MAX_TARIF_ENFANT) {
        printf("Vous beneficiez du tarif enfant de %d euros",tarifEnfant);
    }
    else if((ageClient >= AGE_MAX_TARIF_ENFANT && ageClient<=AGE_MAX_TARIF_JEUNE) || (ageClient>=AGE_MAX_TARIF_ENFANT && ageClient<=AGE_MAX_TARIF_ETUDIANT && etudiant == 1)) {
        printf("Vous beneficiez du tarif jeune de %d euros", tarifJeune);
    }
    else if(ageClient >= AGE_MIN_TARIF_SENIOR) {
        printf("Vous beneficiez du tarif senior de %d euros", tarifSenior);
    }
    else {
        printf("Vous beneficiez du tarif plein de %d euros", tarifPlein);
    }

}

int exercice5() {
    int choixClient=0;
    printf("Entrez le numero de la boisson correspondante\n");
    scanf(" %d", &choixClient);
    switch(choixClient) {
        case 1: {
            printf("Vous avez choisi du Coca\n");
            break;
        }
        case 2: {
            printf("Vous avez choisi du Fanta\n");
            break;
        }
        case 3: {
            printf("Vous avez choisi  de l'eau\n");
            break;
        }
        case 10: {
            printf("Vous avez choisi un cafe\n");
            break;
        }
        case 11: {
            printf("Vous avez choisi du chocolat chaud\n");
            break;
        }
        default: {
            printf("Le numero choisi ne correspond a aucune boisson\n");
            break;
        }

    }

}

int exercice6() {
    float note1=0, note2=0, note3=0;
    float moyenne=0;
    printf("Entrez vos 3 notes sur 20\n");
    scanf(" %f%f%f", &note1 , &note2 , &note3 );
    while (note1<0 || note1>20) {
        printf("note1 non valide, entrez une valeur entre 0 et 20\n");
        scanf(" %f", &note1);
    }
    while (note2<0 || note2>20) {
        printf("note2 non valide, entrez une valeur entre 0 et 20\n");
        scanf(" %f", &note2);
    }
    while (note3<0 || note3>20) {
        printf("note3 non valide, entrez une valeur entre 0 et 20\n");
        scanf(" %f", &note3);
    }
    moyenne = (float) ( note1 + note2 + note3 ) / (float) 3;
    printf("La moyenne de vos 3 notes est de %.2f/20", moyenne );

}

int exercice7() {
    int nbClasse=0, eleves=0, totalEleves=0, i=0;
    printf("Combien y a t-il de classe ouverte?\n");
    scanf(" %d", &nbClasse);
    for(i=1;i<nbClasse+1;i++) {
        printf("Entrez le nombre d'eleve dans la classe %d\n", i);
        scanf(" %d", &eleves);
        totalEleves += eleves;
    }
    printf("Le nombres totales d'eleves est de %d\n", totalEleves);

}

int exercice8() {
    int entier=0;
    printf("Saisissez un nombre entier\n");
    scanf(" %d", &entier);
    while( entier % 7 != 0 || entier % 2 != 0 ) {
        printf("%d n'est pas multiple de 7 ou multiple de 2, reessayer\n", entier);
        scanf(" %d", &entier);
    }
    printf("%d est multiple de 7 et de 2\n", entier);
}

int exercice9() {
    int nbPierre=0, somme=0, i=0;
    printf("Entrez votre nombre de pierre\n");
    scanf(" %d", &nbPierre);
    while(nbPierre > somme ) {
        i++;
        somme += i*i;
        if(nbPierre<somme+(i+1)*(i+1))
            break;
    }
    printf("pierres dispo: %d, pour %d etages\n", somme, i);
}

int exercice10() {
    int entier=0, somme=0, nbEntier=0;
    float moyenne=0;
    while(entier>=0) {
        printf("Saisir un nombre entier\n");
        scanf(" %d", &entier);
        if(entier<0)
            break;
        somme += entier;
        nbEntier +=1;
    }
    if(nbEntier>0) {
        moyenne = (float) somme / (float) nbEntier;
        printf("La moyenne de vos %d nombres positifs est de %.2f\n", nbEntier, moyenne);
    }

}


int main() {
    //exercice1();
    //exercice2();
    //exercice3();
    //exercice4();
    //exercice5();
    //exercice6();
    //exercice7();
    //exercice8();
    //exercice9();
    //exercice10();
    return 0;
}
