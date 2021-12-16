#include <iostream>
#include <list>
#include <iterator>
#include<algorithm>
using namespace std;

int main(){
	list<string>L; //déclarer la liste
	L.push_back("defaa,asmae,20"); //insérer les valeurs dans la liste
	L.push_back("taibi,nezha,23");
	L.push_back("mansori,ayoub,23");
L.sort();  //faire la fonction sort pour trie la liste
cout<<"la liste trie est :"<<endl;
	list <string> :: iterator it;  //définir l'iterator pour afficher la lise avec l'ordre alphabétique
for(it=L.begin();it !=L.end();++it){	
cout<<"\t" <<*it;    //afficher la liste
}
return 0;
}

