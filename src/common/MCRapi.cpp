#include<thread>
namespace MCR{
	void start_line(void (*)() fun){
		std::thread(fun);
	}