#include<iostream>
#include <list>
#include<iterator>

using namespace std ;
void showlist(list<int> l){ //définir une fonction pour afficher les éléments de la liste
list <int> :: iterator it;
for(it=l.begin();it !=l.end();++it)
cout<<"\t" <<*it;
cout<<"\n" ;
}
int main(){
	list<int>llist; //déclarer la liste
	int n;         //déclarer le variable pour le nombre des chiffres dans la liste
	int j;         //déclarer un variable pour entrer les élémentents de la liste
	cout<<"entrer le nombre de chifre dans la liste:";
	cin>>n;       //danner la valeur de n
	for (int i=0;i<n;i++){     //boucle for pour parcourir la liste
		cout<<"entrer chaque element de la liste:";
		cin>>j;        //donner la valeur de j
		llist.push_back(j); //déclarer une fonction qui peut permetre d'insert les élément de la liste
	}
cout<<"l'ancienne liste est:";
showlist(llist); //afficher la liste qu'on a créé
cout<<"liste trie est:";
llist.sort();  //faire la fonction sort pour trie la liste
showlist(llist); //afficher la version finale de la liste
return 0;
}
