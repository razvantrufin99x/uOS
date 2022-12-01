// uOS.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <conio.h>



using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{

	 string command = "";
		
				
		std::cout<<"Enter something:";
		std::cout<<"\n";

		while(command != "REBOOT_SYSTEM"){
			std::cin>>command;
		   

			if( command == "dir" )
			{
				std::cout<<"dir\n";

			}
			else if( command == "mkdir" )
			{
				std::cout<<"mkdir\n";

			}
			else if(command == "REBOOT_SYSTEM" || command == "reboot_system")
			{
				std::cout<<" \nEXITING SYSTEM\n";
				
				getche();

				command = "REBOOT_SYSTEM";
			}
			 //std::cout<<"\n";
			
		};

	return 0;
}

