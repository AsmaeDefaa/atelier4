#include<iostream>
#include <list>
#include<iterator>

using namespace std ;
void showlist(list<int> l){ //d�finir une fonction pour afficher les �l�ments de la liste
list <int> :: iterator it;
for(it=l.begin();it !=l.end();++it)
cout<<"\t" <<*it;
cout<<"\n" ;
}
int main(){
	list<int>llist; //d�clarer la liste
	int n;         //d�clarer le variable pour le nombre des chiffres dans la liste
	int j;         //d�clarer un variable pour entrer les �l�mentents de la liste
	cout<<"entrer le nombre de chifre dans la liste:";
	cin>>n;       //danner la valeur de n
	for (int i=0;i<n;i++){     //boucle for pour parcourir la liste
		cout<<"entrer chaque element de la liste:";
		cin>>j;        //donner la valeur de j
		llist.push_back(j); //d�clarer une fonction qui peut permetre d'insert les �l�ment de la liste
	}
cout<<"l'ancienne liste est:";
showlist(llist); //afficher la liste qu'on a cr��
cout<<"liste trie est:";
llist.sort();  //faire la fonction sort pour trie la liste
showlist(llist); //afficher la version finale de la liste
return 0;
}
