#include <bits/stdc++.h>

using namespace std;

int funcaoHash(int chave, int m){
    int tab_chave;
    tab_chave = chave % m;

    return tab_chave;
}

int **insereHash(int **tab, int chave, int m){
    int indice, i = 0;
    indice = funcaoHash(chave, m);
    while(tab[indice][i] != -1111) i++;

    tab[indice][i] = chave;

    return tab;
}

void imprime (int **mat, int lar, int alt) {
    for(int i=0; i<lar; i++){
        printf("%d -> ", i);
        for(int j=0; j<alt; j++){
            if(mat[i][j] == -1111){
                    puts("\\");
                    break;
            }
            else printf("%d -> ", mat[i][j]);
            if(j == alt-1) {
                    puts("\\");
            }
        }
    }
}
