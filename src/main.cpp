#include<iostream>
#include<string.h>
using namespace std;
class Player{
public:
	string getName() {
	return name;
	}
	virtual void attack()=0;
	virtual void defense()=0;
	Player(string name){
		this->name = name;
	}
	Player(){

	}
	virtual ~Player(){

	}
protected:
	string name;
};
class Forwards :public Player{
public:
	virtual void attack(){
		cout<<"Forward attack "<<name<<endl;
	}
	virtual void defense(){
		cout<<"Forward defense "<<name<<endl;
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
	virtual void attack(){
		cout<<"Center attack "<<name<<endl;
	}
	virtual void defense(){
		cout<<"Center defense "<<name<<endl;
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

	void setName(string name){
		this->name = name;
	}
	string getName(){
		return name;
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
	Translator(string name){
		fc = new ForeignCenter(name);
	}
	Translator(){

	}
	virtual void attack(){
		fc->foreignCenterAttack();
	}
	virtual void defense(){
		fc->foreignCenterDefense();
	}
	virtual ~Translator(){

	}
private:
	ForeignCenter* fc;
};
