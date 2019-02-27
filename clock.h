#include<ctime>
using namespace std;

class CK{
	public:
		CK();
		CK(clock_t);
		void setTime(clock_t);
		void start();
		double GetDiffTime();
	private:
		clock_t ts;};
