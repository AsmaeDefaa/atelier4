#include<iostream>
#include<set>
#include <iterator>
#include<algorithm>
using namespace std;
int main(){
set<int> s;  //déclarer une liste
int n;
for(int i=0;i<100;i++){  //utilisisation de la boucle for pour parcourire la liste
s.insert(100-i);       
}
for(set<int>::iterator it=s.begin();it!=s.end();it++){ //utilisisation de l'iterator pour afficher tous les éléments de la liste
	cout<<*it<<endl;
	
}
cout<<"entrer un nombre";
cin>>n;
cout<<s.count(n)<<endl;  //fonction pour indiquer si un éléments existe ou pas

return 0;
}
