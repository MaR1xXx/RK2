#include<iostream>
#include<string.h>
using namespace std;
class Player{
public:
	string name;
public:
	virtual string attack()=0;
	virtual string defense()=0;
	Player(string name){
		this->name = name;
	}
	Player(){

	}
	virtual ~Player(){

	}
};
class Forwards :public Player{
public:

	virtual string attack(){
		cout<<"Forward attack "<<name<<endl;
		return name;
	}
	virtual string defense(){
		cout<<"Forward defense "<<name<<endl;
		return name;
	}
	Forwards():Player(){

	}
	Forwards(string name_s){
		name = name_s;
	}
	virtual ~Forwards(){

	}
private:
	string name;
};
class Center: public Player{
public:
	string getName() {
	return name;
	}
	virtual string attack(){
		cout<<"Center attack "<<name<<endl;
		return name;
	}
	virtual string defense(){
		cout<<"Center defense "<<name<<endl;
		return name;
	}
	Center(string name){
		this->name = name;
	}
	Center(){

	}
	virtual ~Center(){

	}
private:
	string name;
};
class ForeignCenter
{
public:
	string getName() {
	return name;
	}

	void setName(string name){
		this->name = name;
	}
	void foreignCenterAttack(){
		cout<<"Foreign Center attack "<<name<<endl;
	}
	void foreignCenterDefense(){
		cout<<"Foreign Center defense "<<name<<endl;
	}
	ForeignCenter(string name){
		this->name = name;
	}
	ForeignCenter() {

	};

	~ForeignCenter() {

	};
	
private:
	string name;
};
//adapter
class Translator : public Player{
public:
	string getName() {
	return name;
	}
	Translator(string name){
		fc = new ForeignCenter(name);
	}
	Translator(){

	}
	virtual string attack(){
		fc->foreignCenterAttack();
		return name;
	}
	virtual string defense(){
		fc->foreignCenterDefense();
		return name;
	}
	virtual ~Translator(){

	}
private:
	ForeignCenter* fc;
};


int main(){
  void RunProgramMainLogic(){
	Player* b = new Forwards("James");
	b->attack();
	Player* m = new Center("Maddie");
	m->attack();
	Player* ym = new Translator("YaoMing");
	ym->attack();
	ym->defense();
	delete b;
	delete m;
	delete ym;
}
  return 0;
}
