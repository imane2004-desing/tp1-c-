#include <iostream>
using namespace std;

void calculerSommesLignes(int** tableau, int lignes, int* tailles) {
    for (int i = 0; i < lignes; i++) {
        int somme = 0;
        for (int j = 0; j < tailles[i]; j++) {
            somme += tableau[i][j];
        }
        cout << "Somme de la ligne " << (i + 1) << " : " << somme << endl;
    }
}

void afficherTableau(int** tableau, int lignes, int* tailles) {
    for (int i = 0; i < lignes; i++) {
        cout << "[";
        for (int j = 0; j < tailles[i]; j++) {
            cout << tableau[i][j];
            if (j < tailles[i] - 1) {
                cout << " ";
            }
        }
        cout << "]" << endl;
    }
}

int main() {
    int lignes = 3;
    
  
    int tailles[] = {3, 2, 4};
    
    
    int** tableauIrregulier = new int*[lignes];
    tableauIrregulier[0] = new int[3] {1, 2, 3};
    tableauIrregulier[1] = new int[2] {4, 5};
    tableauIrregulier[2] = new int[4] {6, 7, 8, 9};
    
    cout << "Entrée :" << endl;
    afficherTableau(tableauIrregulier, lignes, tailles);

    cout << "\nSortie :" << endl;
    calculerSommesLignes(tableauIrregulier, lignes, tailles);

   
    for (int i = 0; i < lignes; i++) {
        delete[] tableauIrregulier[i]; 
    }
    delete[] tableauIrregulier; 
    
    return 0;
}
