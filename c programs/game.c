#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int game(char user, char computer){
	
	if (user==computer){
		return -1;
	}
	
	if(user=='s' && computer=='p'){
		return 0;
	}else if(user=='p' && computer=='s'){
		return 1;
	}
	
	if (user=='x' && computer=='s'){
		return 0;
	}else if(user=='s' && computer=='x'){
		return 1;
	}
	
	if(user=='p' && computer=='x'){
		return 0;
	}else if(user=='x' && computer=='p'){
		return 1;
	}
}

int main(){
	int i,value,result;
	char computer,user;
	
	srand(time(NULL));
	value = rand()%100;
	if (value<=33){
		computer = 's';
	}else if(value>33 && value<=66){
		computer = 'x';
	}else{
		computer = 'p';
	}
	
	printf("\t s for stone and x for scissors and p for paper\n");
	printf("choose your choice \t");
	scanf("%c",&user);
	
	result=game(user,computer);
	if (result == -1) {
        printf("\nGame Draw!\n");
    }
    else if (result == 1) {
        printf("Wow! You have won the game!\n");
    }
    else { 
        printf("Oh! You have lost the game!\n");
    }
        printf("\tYou choose : %c and Computer choose : %c\n",user, computer);
 
    return 0;
}

