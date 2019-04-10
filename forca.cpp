#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    char palavra[30], letra[1],secreta[30];
    int tam,i,chances,acertos;
    bool acerto;

    chances = 6;
    tam = 0;
    i = 0;
    acerto = false;
    acertos = 0;

    cout << "Digite a palavra secreta: ";
    cin >> palavra;
    system("clear");

    while(palavra[i] != '\0'){
        i++;
        tam++;
    }

    for(i=0;i<30;i++){
        secreta[i] = '*';
    }

    while((chances> 0) && (acertos < tam)){
        cout << "Chances: " << chances << endl;
        cout << "Palavra secreta: ";
        for(i=0;i<tam;i++){
            cout << secreta[i];
        }
        cout << "\n\nLetra: ";
        cin >> letra[0];
        for(i=0;i<tam;i++){
            if(palavra[i] == letra[0]){
                acertos++;
                secreta[i]=palavra[i];
                acerto=true;
            }
        }
        if(!acerto){
            chances--;
        }
        acerto=false;
        system("clear");
    }
        if(acertos == tam) {
            cout << "Você venceu.";
        } else {
            cout << "Você perdeu.";
        }
        system("pause");
    return 0;
}
