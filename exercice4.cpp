#include <iostream>
#include <list>
#include <iterator>
#include<algorithm>
using namespace std;

int main(){
	list<string>L; //d�clarer la liste
	L.push_back("defaa,asmae,20"); //ins�rer les valeurs dans la liste
	L.push_back("taibi,nezha,23");
	L.push_back("mansori,ayoub,23");
L.sort();  //faire la fonction sort pour trie la liste
cout<<"la liste trie est :"<<endl;
	list <string> :: iterator it;  //d�finir l'iterator pour afficher la lise avec l'ordre alphab�tique
for(it=L.begin();it !=L.end();++it){	
cout<<"\t" <<*it;    //afficher la liste
}
return 0;
}

