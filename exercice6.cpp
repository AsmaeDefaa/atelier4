#include <iostream>
using namespace std;
class Test{
public:
static int tableau[] ;
public :
static int division(int indice, int diviseur){
return tableau[indice]/diviseur;
}
};
int Test::tableau[] = {17, 12, 15, 38, 29, 157, 89, -22, 0, 5} ;
int main()
{
int x, y;
cout << "Entrez l'indice de l'entier a diviser: " << endl;
try{      //code protégé
cin >> x ;
if(x<0)          //condition de vérification
throw"error,negative index";   //déclarer un message de l'erreur
if(x>=10)
throw x;    //permeter de créer une erreur

}

catch(const char*str){ //pour gérer l'exception str
	cout<<"exception:"<<str<<endl;
}
catch(int e){     //pour gérer l'exception e
	
	cout<<"exception:";
	cout<<"index "<<e<<" is out of range"<<endl; //afficher le message d'erreur
}
cout << "Entrez le diviseur: " << endl;

try{     //code protégé
cin >> y ;
if(y==0)
throw"that's imposible";
}catch (const char*str1){  //pour gérer l'exception str1
	cout<<"exceptoin:"<<str1<<endl;
}
cout << "Le resultat de la division est: "<< endl;
cout <<Test::division(x,y) << endl;
return 0;
}
