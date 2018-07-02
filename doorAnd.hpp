#ifndef DOORAND_HPP
#define DOORAND_HPP
#include"door.hpp"
class doorAnd:public door{
public:
	doorAnd(int id);
	~doorAnd(){};
	int getType();
	void setInput(vector<bool> in);
	bool getOutput();
	int getId();
	string getName();
	void setStatus(bool s);
	door& operator+=(door& d);
	door& operator=(door& d);
};
#endif