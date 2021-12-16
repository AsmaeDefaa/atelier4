#include<iostream>
using namespace std;
class com {                //déclarer une classe mére com
public:
	int rel;
	int img;

public:
	com() {};                
	com(int r, int i) {        //déclarer une constrecteur pour la classe mére
		img = i;
		rel = r;


	}
	com operator +(com s2) {   //surcharge d'operateur pour l'addition

		int fre = rel + s2.rel;
		int fim = img+ s2.img;
		com s4;
		s4.img= fim;
		s4.rel = fre;
		return s4;




	}
	com operator -(com s2) {     //surcharge d'operateur pour la soustraction

		int fre = rel - s2.rel;
		int fim = img - s2.img;
		com s4;
		s4.img= fim;
		s4.rel = fre;
		return s4;




	}
	com operator *(com s2) {   //surcharge d'operateur pour la multiplication

		int fre = rel * s2.rel;
		int fim = img * s2.img;
		com s4;
		s4.img = fim;
		s4.rel = fre;
		return s4;
	}
		com operator / (com s2){  //surcharge d'operateur pour la division
			int fre=rel/s2.rel;
			int fim=img/s2.img;
			com s4;
			s4.img=fim;
			s4.rel=fre;
			return s4;
		}
	
    
};
int main() {                 
	int x;      //déclarer les variables pour entrer la partier réel et imaginaire 
	int y;
	int z;
	int w;
	string o;
	cout << "entrer la partier img 1:";
	cin >>x;
	cout << "entrer la partier img 2:";
	cin >>y;
	cout << "entrer la partie reel 1:";
	cin >>z;
	cout << "entrer la partie reel 2:";
	cin >> w;
	com c1(z, x);        //déclare des objets pour la classe com
	com s2(w, y);
	com c3 = c1 + s2;   //faire les operations
	com c5 = c1 - s2;
	com c6 = c1 * s2;
	com c7 = c1 / s2;
	
	cout << "quelle votre operation? (somme,soustraction ,multiplication,devision)"; 
	cin >> o;
	if(o=="somme"){                                      
	
	cout <<c3.rel<< "+ i" << c3.img << endl;
	}
	else if (o=="soustraction"){
	cout << c5.rel << "+ i" << c5.img << endl;
	}
	else if (o=="multiplication"){
	cout << c6.rel << "+ i" << c6.img << endl;
	}
	else if(o=="divesion") {
			cout << c7.rel << "+ i" << c7.img << endl;
	}

	return 0;
}
