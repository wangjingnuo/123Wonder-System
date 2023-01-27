#include<iostream>
#include<ctime>
#include<windows.h>
using namespace std;
#define random(x)(rand()%x)
int slowc(string b)
{
	for(int j=0;j<b.size();j++)
	{
		cout<<b[j];
		Sleep(30);//30
	}
	Sleep(300);//300
	return 0;
}
int main()
{
	SetConsoleTitle("Start - 123Wonder");
	while(1)
	{
		slowc("Do you want to..");cout<<endl;slowc("1.Hear the rules  2.Start straightly");cout<<endl<<endl;
		//cout<<random(3)<<endl;//0-2
		int choice1;
		cin>>choice1;
		if(choice1==1)
		{
			slowc("It's a game, or rather a learning game. You can recite poems in it.");cout<<endl;
			slowc("We use 0 for rock, 1 for scissors, and 2 for paper. 0 beats 1, 1 beats 2, 2 beats 0.");cout<<endl;
			slowc("The computer matches player.");cout<<endl;
			slowc("If the computer wins, the player reads or recites the poem he needs to memorize.");cout<<endl;
			slowc("If the player wins, the computer opens a page, and the player uses Microsoft Edge's 'read aloud' feature to tell the computer to read it.");cout<<endl;
			slowc("Cycle continues like that.");cout<<endl;
			slowc("If you feel you have memorized the poem or you are bored, type 100 to end the game. ");cout<<endl;
			slowc("I wish you a happy trip and academic success!");cout<<endl<<endl;
			cout<<"                                                                                                     ";slowc(" -- Copyright 2023 LubsWang Team");cout<<endl<<endl;
		}
		else if(choice1==2)
		{
			slowc("Ok, start!");
			break;
		}
		else
		{
			slowc("Please select one of the two options and enter the serial number!");cout<<endl<<endl;
		}
	}
	system("cls");
	SetConsoleTitle("Use - 123Wonder");
	while(1)
	{
		srand((int)time(0));
		slowc("Enter your number.(From 0,1,2)");
		cout<<endl<<endl;
		slowc("Your number: ");
		int num;
		cin>>num;
		if(num==100)
		{
			break;
		}
		int computer_num;
		computer_num=random(3);
		slowc("Computer number: ");cout<<computer_num;
		cout<<endl<<endl;
		if((computer_num==0 && num==1) || (computer_num==1 && num==2) || (computer_num==2 && num==0))//computer win
		{
			slowc("#Computer win.#");cout<<endl<<endl;
			slowc("Please read or memorize the poem you need to memorize.");cout<<endl;
			system("pause");
			cout<<endl;
			slowc("Finished? Ok, let's continue.");
			cout<<endl<<"-------------------------------------------------"<<endl;
		}
		else if((computer_num==0 && num==0) || (computer_num==1 && num==1) || (computer_num==2 && num==2))
		{
			slowc("#The same.#");cout<<endl<<endl;slowc("Continue.");cout<<endl<<"----------------------------------------"<<endl;
		}
		else if((num==0 && computer_num==1) || (num==1 && computer_num==2) || (num==2 && computer_num==0))
		{
			slowc("#You win.#");cout<<endl<<endl;
			slowc("Computer will open a website and you can let the computer read it.");cout<<endl;
			system("start read://https_so.gushiwen.cn/?url=https%3A%2F%2Fso.gushiwen.cn%2Fshiwenv_2e3bc3aa2f6b.aspx%3F3739a18c-0c68-43cc-a4cb-b8b99e9bfd72%3Dfbc4c297-d97a-42de-98bd-bb26eeac3fca");
			system("pause");cout<<endl;
			slowc("Finished? Ok, let's continue.");
			cout<<endl;
			cout<<"----------------------------------------"<<endl;
		}
	}
	cout<<endl<<endl;
	slowc("I wish you a happy trip and academic success!");cout<<endl;
	slowc("123Wonder Creator -- LubsWang");
	return 0;
}
