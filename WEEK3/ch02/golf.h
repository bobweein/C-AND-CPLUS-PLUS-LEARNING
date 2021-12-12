#ifndef  _GOLF_H
#define _GOLF_H
class Golf
{private:
	static const int Len = 40;
	std::string fullname;
	int handicap;
public:
	Golf(){};
	Golf ( const std::string , int hc );
	
	void Handicap(int hc);
	void Showgolf() const;
	~Golf() { /*std::cout << "bye  "<<fullname<<std::endl;*/ };
};
void Setgolf();
#endif
