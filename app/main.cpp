
#include <iostream>
#include <stdlib.h>
#include <ctime>

bool showStatus(char blocks[])
{
  std::cout<<"\n  "<<*(blocks)<<" | "<<*(blocks + 1)<<" | "<<*(blocks + 2)<<std::endl;
  std::cout<<" ------------ "<<std::endl;
  std::cout<<"  "<<*(blocks + 3)<<" | "<<*(blocks + 4)<<" | "<<*(blocks + 5)<<std::endl;
  std::cout<<" ------------ "<<std::endl;
  std::cout<<"  "<<*(blocks + 6)<<" | "<<*(blocks + 7)<<" | "<<*(blocks + 8)<<std::endl;
  return 0 ;
}
int main()
{
  srand( time(0) );

  bool play = true;
  while(play)
  {
    int input = 0;
    std::cout<<"Enter your choice : 1)play 2)quit"<<std::endl;
    std::cin>>input;
    if(input == 2)
    {
      play = false;
      break;
    }
    //imagin that 0 shows the Os turn and 1 shows the Xs turn
    //first we choose a starter for the game with random function
    int turn = rand() % 2;
    //defining rows and columns => r stands for row , c stands for column
    char* blocks = new char[9];
    for(int i = 0; i< 9 ; i++)
      //we use this '0' to convert int to char
      blocks[i] = '0' + (i+1);

    for(int i = 0 ; i<9 ; i++)
    {
      if(turn)
      {
        int choice = 0;
        showStatus(blocks);
        std::cout<<"\n It is Xs turn"<<std::endl;
        std::cout<<"\nEnter the Number of your choice : ";
        std::cin>>choice;
        switch(choice)
        {
          case 1 :
          if(blocks[0] == 'O' || blocks[0] == 'X')
          {
            std::cout<<"Wrong Input!"<<std::endl;
            turn = !turn;
          }
          else
            blocks[0] = 'X';
          break;
          case 2 :
          if(blocks[1] == 'O' || blocks[1] == 'X')
          {
            std::cout<<"Wrong Input!"<<std::endl;
            turn = !turn;
          }
          else
            blocks[1] = 'X';
          break;
          case 3 :
          if(blocks[2] == 'O' || blocks[2] == 'X')
          {
            std::cout<<"Wrong Input!"<<std::endl;
            turn = !turn;
          }
          else
            blocks[2] = 'X';
          break;
          case 4 :
          if(blocks[3] == 'O' || blocks[3] == 'X')
          {
            std::cout<<"Wrong Input!"<<std::endl;
            turn = !turn;
          }
          else
            blocks[3] = 'X';
          break;
          case 5 :
          if(blocks[4] == 'O' || blocks[4] == 'X')
          {
            std::cout<<"Wrong Input!"<<std::endl;
            turn = !turn;
          }
          else
            blocks[4] = 'X';
          break;
          case 6 :
          if(blocks[5] == 'O' || blocks[5] == 'X')
          {
            std::cout<<"Wrong Input!"<<std::endl;
            turn = !turn;
          }
          else
            blocks[5] = 'X';
          break;
          case 7 :
          if(blocks[6] == 'O' || blocks[6] == 'X')
          {
            std::cout<<"Wrong Input!"<<std::endl;
            turn = !turn;
          }
          else
            blocks[6] = 'X';
          break;
          case 8 :
          if(blocks[7] == 'O' || blocks[7] == 'X')
          {
            std::cout<<"Wrong Input!"<<std::endl;
            turn = !turn;
          }
          else
            blocks[7] = 'X';
          break;
          case 9 :
          if(blocks[8] == 'O' || blocks[8] == 'X')
          {
            std::cout<<"Wrong Input!"<<std::endl;
            turn = !turn;
          }
          else
            blocks[8] = 'X';
          break;
        }
        //check if the player has won or not
        if((blocks[0] == blocks[1] && blocks[1] == blocks[2]) || (blocks[0] == blocks[4] && blocks[4] == blocks[8]) || (blocks[3] == blocks[4] && blocks[4] == blocks[5]) || (blocks[6] == blocks[7] && blocks[7] == blocks[8]) || (blocks[0] == blocks[3] && blocks[3] == blocks[6]) || (blocks[1] == blocks[4] && blocks[4] == blocks[7]) || (blocks[2] == blocks[5] && blocks[5] == blocks[8]) || (blocks[2] == blocks[4] && blocks[4] == blocks[6]))
        {
          showStatus(blocks);
          std::cout<<"X Won!"<<std::endl;
          break;
        }
        turn = !turn;
        continue;
      }
      else
      {
        int choice = 0;
        showStatus(blocks);
        std::cout<<"\n It is Os turn"<<std::endl;
        std::cout<<"\nEnter the Number of your choice : ";
        std::cin>>choice;
        switch(choice)
        {
          case 1 :
          if(blocks[0] == 'O' || blocks[0] == 'X')
          {
            std::cout<<"Wrong Input!"<<std::endl;
            turn = !turn;
          }
          else
            blocks[0] = 'O';
          break;
          case 2 :
          if(blocks[1] == 'O' || blocks[1] == 'X')
          {
            std::cout<<"Wrong Input!"<<std::endl;
            turn = !turn;
          }
          else
            blocks[1] = 'O';
          break;
          case 3 :
          if(blocks[2] == 'O' || blocks[2] == 'X')
          {
            std::cout<<"Wrong Input!"<<std::endl;
            turn = !turn;
          }
          else
            blocks[2] = 'O';
          break;
          case 4 :
          if(blocks[3] == 'O' || blocks[3] == 'X')
          {
            std::cout<<"Wrong Input!"<<std::endl;
            turn = !turn;
          }
          else
            blocks[3] = 'O';
          break;
          case 5 :
          if(blocks[4] == 'O' || blocks[4] == 'X')
          {
            std::cout<<"Wrong Input!"<<std::endl;
            turn = !turn;
          }
          else
            blocks[4] = 'O';
          break;
          case 6 :
          if(blocks[5] == 'O' || blocks[5] == 'X')
          {
            std::cout<<"Wrong Input!"<<std::endl;
            turn = !turn;
          }
          else
            blocks[5] = 'O';
          break;
          case 7 :
          if(blocks[6] == 'O' || blocks[6] == 'X')
          {
            std::cout<<"Wrong Input!"<<std::endl;
            turn = !turn;
          }
          else
            blocks[6] = 'O';
          break;
          case 8 :
          if(blocks[7] == 'O' || blocks[7] == 'X')
          {
            std::cout<<"Wrong Input!"<<std::endl;
            turn = !turn;
          }
          else
            blocks[7] = 'O';
          break;
          case 9 :
          if(blocks[8] == 'O' || blocks[8] == 'X')
          {
            std::cout<<"Wrong Input!"<<std::endl;
            turn = !turn;
          }
          else
            blocks[8] = 'O';
          break;
        }
        if((blocks[0] == blocks[1] && blocks[1] == blocks[2]) || (blocks[0] == blocks[4] && blocks[4] == blocks[8]) || (blocks[3] == blocks[4] && blocks[4] == blocks[5]) || (blocks[6] == blocks[7] && blocks[7] == blocks[8]) || (blocks[0] == blocks[3] && blocks[3] == blocks[6]) || (blocks[1] == blocks[4] && blocks[4] == blocks[7]) || (blocks[2] == blocks[5] && blocks[5] == blocks[8]) || (blocks[2] == blocks[4] && blocks[4] == blocks[6]))
        {
          showStatus(blocks);
          std::cout<<"O Won!"<<std::endl;
          break;
        }
        turn = !turn;
        continue;
      }
    }

    delete[] blocks;
    blocks = 0;
  }

  return 0;
}
