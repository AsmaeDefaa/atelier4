#include <iostream>
#include <list>
#include <iterator>
#include <string>
using namespace std ;

class Chat ;
class Repas ;
 class Elements ;
class Chat {

    private:
    string type;
    list<Repas> listRepas;
    public :
    Chat(string type){
        this->type = type;
    }
    void setType(string type){
        this->type = type;
    }
    string getType(){
        return this->type;
    }
    void setListRepas(list<Repas> listRp){
        this->listRepas = listRp ;
    }
    list<Repas> getListRepas(){
        return this->listRepas ;
    }
    void sauter(){
        return 0;
    }
};


class Repas {
	 private:
	  string nom ;
	  int heure;
	   string description;
	    Chat chat ;
	  list<Elements > *lise ; 
	  public : 
		  Repas(String nom, int heure, String description){
        this->nom = nom;
        this->heure = heure;
        this->description = description;
	  liste = new list<Elements>();
} 
void setNom(string nom){
this->nom = nom ; }
string getNom(){
return this->nom ; }

void setHeure(int heure ){
this->heure= heure ; }
int  getHeure(){
return this->heure; }

void setDescription(string description){
this->description = description ; }
string getDescription(){
return this->description ; }
void setListElements(list<Elements> *liste){
this->lise = lise ; }
list<Elements>* getListElements(){ return this->liste; }

void setChat(Chat c){
        this->chat = c ;
    }
    Chat getChat(){
        return this->chat ;
    }
~Repas (){ 
delete this->liste ; cout << "call dist of Repas" << endl ;
}
};
class Elements {
	 private:
	  string nom;
	  string type;
	   Repas r ;
public :
 void setNom(string nom){
this->nom = nom ; }
string getNom(){
return this->nom ; }
void setType(string type){
this->type = type; }
string getType(){
return this->type ; }

void setRepas( Repas r){
this->r = r; }
Repas getRepas(){
return this->r ; }
~Elements(){ cout << "call dist of Elements " << endl ;
} };

class Animal ; class Chien ;class Race;
class Animal {
protected :
string nom ;
int age;
string genre ;
public:
Animal (){};
Animal (string n,int a,string g){
	nom=n;
	age=a;
	genre =g;
}
void afficher(){
	cout << "nom:"<<nom<<"age:"<<age<<"genre :"<<genre<<endl;
}
void setNom(string nom){

	this->nom=nom;
}
string  getNom(){

	return this->nom;
}
void setAge(int age ){

	this->age=age;
}
int  getAge( ){

	 return this->age;
}
void setGenre(string genre){

	this->genre=genre;
}
string  getGenre(){

	return this->genre;
}

};
class Chat : public Animal {
	private:
	string type ;
	public:
	Chat (string n,int a,string g,string t):Animal (n,a,g){
		type=t;
	}

	void setType(string type){

	this->type=type;
    }
     string  getType(){

	return this->type;
    }
	void sauter(){
		 cout<<"Le type est : "<< type <<endl;

	}
};
class Race{
	protected :
	string specificite ;
	
	public:
		string test1;
    Race (){};
	Race (string s){
		specificite=s;

	}
	void setSpecificite(string specificite){

	this->specificite=specificite;
    }
     string  getSpecificite(){

	return this->specificite;
    }
	 bool isracehybride (){
	if (specificite==test1){
		return true ;}
		else {
	return false;
	}}	

};

class Chien;
class Entraineur;
class Composition;

class Chien :public Animal,public Race{
private:
String taille;
list<Entraineur> listEntraineur;
public :
Chien (string n,int a, string g, string s, string t) : public Animal ( n, a, g),public Race( s){
    this->taille = taille ;
}
void setTaille(String taille){
    this->taille = taille ;
}
String getTaille(){
    return this->taille;
}
void getListEntraineur(list<Entraineur> listEnt){
    this->listEntraineur = listEnt;
}
list<Entraineur> getListEntraineur(){
    return this->listEntraineur;
}
bool ischass3(){
    return true;
}
};

class Entraineur {
private:
String nom;
String description;
list<Chien> listChien;
public :
Entraineur(String nom, String description){
    this->nom = nom;
    this->description = description;
}
void setNom(String nom){
this->nom = nom;
}
String getNom(){
return this->attb ;
}
void setdescription(String description){
this->description = description;
}
String getdescription(){
return this->description ;
}
void setListChien(list<Chien> listChien){
this->listChien = listChien;
}
list<Chien> getListChien(){
return this->listChien ;
}
};

class Composition{
private :
String date;
String nom;
Entraineur e;
Chien c;
public :
int ordre;
Composition(String date, String nom, int ordre){
    this->nom = nom;
    this->date = date;
    this->ordre = ordre;
}
void setNom(String nom){
this->nom = nom;
}
String getNom(){
    return this->nom ;
}
void setDate(String date){
    this->date = date;
}
String getDate(){
    return this->date ;
}
void setOrdre(String ordre){
    this->ordre = ordre;
}
String getOrdre(){
    return this->ordre ;
}
void setChien(Chien c){
this->c = c ;
}
Chien getChien(){
return this->c ;
}
void setEntraineur(Entraineur e){
this->e = e;
}
Entraineur getEntraineur(){
return this->e ;
}
};
