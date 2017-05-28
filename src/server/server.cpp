#include<vector>
#include<string>
#include<iostream
#include<./../MCRapi.hpp>
namespace SCR{
	class Server{
	private:
		void debug_screen();
		void block_update();
		std::vector<std::string> debug_info;
	public:
		Server(){
			start_line(debug_screen);
			start_line(block_update);
		}
		void debug_screen(){
			cout<<"**************************"<<endl;
			cout<<"*MineCreating starting...*"<<endl;
			cout<<"**************************"<<endl;
		}
	}
};