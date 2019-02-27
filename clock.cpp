#include<ctime>
#include"clock.h"
using namespace std;

CK::CK(){
	setTime(0);}

CK::CK(clock_t s){
	setTime(s);}
		
void CK::setTime(clock_t s){
	ts=(s>0)?s:clock();}

void CK::start(){
	ts=clock();}

double CK::GetDiffTime(){
	return static_cast<double>(clock()-ts)/CLOCKS_PER_SEC;}
