int main(){
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
  return 0;
}
