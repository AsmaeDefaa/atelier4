#include<iostream>
using namespace std;
void afficherdate(const string& s){    //creation d'une fonction pour afficher le résultat
	if(s.length() != 12)               //la vérification du nombre des chiffres
	cout<<"la date est incorrecte"<<endl;
	else  {
        cout << "Date  : " << s.substr(0,2) << "/" << s.substr(2,2) << "/" << s.substr(4,4) << endl;//afficher la date
        cout << "Heure : " << s.substr(8,2) << "h" << s.substr(10,2) << endl;//afficher l'heure
    }
}
int main (){
	string d("010920091123");//donner la valeur du string
	afficherdate(d);//afficher le résultat final
}
