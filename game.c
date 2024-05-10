//contributors

// Paul JR Ngwoke


//Suave714


// Subject 0023

//Dom I.
//Andre J Leos
//Elias Dawarpana

//Patrick Polanco

//Kal M


//AK

#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>
#include <math.h>
void ajlSpace();      
void coinFlip();
void JanKenPon();
void drawStraws();
void numberGuess();
void blackJack();
int cardPull();
void rollTheDice_Highest();
void rollTheDice_Race();

int randomNumRoom41();

void doorChoice();

void FinalArea(int level);
bool trap_d10();
int selectRandom(int lower, int upper, int count);

char* pullLever(int seed);

void processRoom23();

void chooseDoor();
void chooseWeapon();
void chooseKey();
void chooseCake();
void chooseEnding();

// Vars for choices
int doorChoice;
int weaponChoice;
int cakeChoice;
int finalChoice;

// Array to store choices
char choices[5][100];
// Player health
int health = 100;

void generateGold();

int main(int argc, char *argv[])
{
  int choice = 0;
  char name[30] = "bob";

  srand(time(NULL));

  printf("Please enter your name: ");
  scanf("%s",name);

  printf("Hello %s welcome to the RPG Game!\n",name);

  while(choice != 99)
  {
    puts("You find yourself in a dark room and you are not sure how you got here.");
    puts("As you look around you see the room has 55 doors, each labeled with a number.");
    puts("The room starts filling with water and you must choose a door to open or you will likely drown. you may quit anytime by selecting option 99.");
    puts("What door do you choose?");
    scanf("%d",&choice);

		switch(choice)
		{
			case 1:
			{
				puts("room1");
				break;
			}
			case 2:
			{
				puts("room2");
				break;
			}
			case 3:
			{
				puts("room3");
				break;
			}
			case 4:
			{
				puts("room4");
				srand(time(NULL));
int choice;
int napChoice;
int goBack;
char *inventory[4];

puts("You hurry to close the door behind you, in hopes of keeping the water isolated to the previous room.");
puts("For a moment everything looks like a blur from all the commotion; finally, your eyes adjust.");
puts("You look around the room and see an old dresser, a mattress on the floor with papers scattered around it and a wooden desk.");
puts("What would you like to do:\n  1) Search the dresser for clues\n 2) Check the mattress\n 3) Go through the papers");
puts("4) Search the desk for clues\n 5) Go back through the door you came through");
puts("What do you decide?");
scanf("%d", &choice);

while (choice != 0)
	if (choice == 1) {
		puts("You walk across the room to the dresser and hear something scurrying underneath it.");
		puts("You drop to your knees to catch a peek at whatever that was.");
		puts("Staring at me with its beady eyes and little hands, was a raccoon the size of a kaola.");
		puts("It lunges at you from under the dresser and hisses angrily.");
		puts("You raise your arm in defense and get scratched by the raccoon's dirty paws.");
		puts("You jump up and climb on to the dresser. As you sit on the dresser, you check your wound.");
		puts("The raccoon got you pretty good; you're bleeding quite a lot. You begin to rummage through the drawers of the dresser.");
		puts("You find the following items: a rag, a taser, a blanket and a key.");

		inventory[3] = "key";
		inventory[2] = "blanket";
		inventory[1] = "taser";
		inventory[0] = "rag";

		puts("You wrap your arm with the rag that you found. The bleeding seems to have slowed. Though you're feeling a little light headed.");

		inventory[0] = "empty";

		puts("You check to see if the taser is functioning, and with a little bit of luck, it is!");
		puts("You descend from the dresser top, carefully, so as to not trigger the raccoon's wrath.");
		puts("Immediately the raccoon is upon you and you are waving your arms through to defend yourself. The taser!");
		puts("Thus the fight begins between you and the raccoon!");

		int health = 100;

		for (int i = 0; i < 10; i++) {
			int damage = selectRandom(1, 10, 10);

			health -= damage;
		}

		inventory[1] = "empty";

		printf("Your remaining health is: %d\n", health);

		if (health <= 0) {
			puts("You've been badly damaged by the raccoon. You slowly begin to lose consciousness.");
			break;
		}

		puts("Congratulations! You killed the raccoon.");
		puts("What would you like to do?");
		scanf("%d", &choice);
	} else if (choice == 2) {
		puts("You walk across the room to the mattress. Do you want to take a 30 minute nap? 1) Yes \n 2) No \n");
		scanf("%d", &napChoice);

		if (napChoice == 1) {
			puts("*You take a 30 minute nap and your health is restored to 100%*");
			puts("Your health is now 100%.");

			inventory[2] = "empty";
		} else if (napChoice == 2) {
			puts("You skip the nap.");
		}

		puts("You begin to look around the mattress. You observe there is a stain that looks like blood near the head of the mattress.");
		puts("What would you like to do?");
		scanf("%d", &choice);
	} else if (choice == 3) {
		puts("You walk across the room to the search the papers scattered on the bed. You noticed some of the papers have blood on them.");
		puts("You begin to pick up the pieces of paper, scanning them for any information on what's going on.");
		puts("You notice some wrote help me in what seems to be blood. The tips of the page are wet. Did they try to push this message to the previous room you was in?");
		puts("You collect that paper and two other pieces of paper with information about a man named Del on it.");
		inventory[0] = "help";
		inventory[1] = "del";
		inventory[2] = "info";

		puts("What would you like to do?");
		scanf("%d", &choice);
	} else if (choice == 4) {
		puts("You walk across the room to the old wooden desk. There's two drawers and a crack through the writing desk. You look into the crack and notice a piece of paper stuffed inside.");
		puts("You read the note and it tells you that Del was trapped in the room with the raccoon who has rabies. The raccoon wasn't edible because of the rabies so Del slowly wasted away due to malnutrition.");
		puts("The paper also tells you about the key in your inventory. It unlocks the door you came in from. Del kept the door locked because the previous room randomly fills with water.");
		puts("What would you like to do?");
		scanf("%d", &choice);
	} else if (choice == 5) {
		if (strcmp("key", inventory[3]) == 0) {
			puts("You walk across the room to the door you came from. You put your ear to the door. Nothing. Odd. You need to get help for the rabies infection.");
			puts("Do you want to go back? 1) Yes \n 2) No \n");
			scanf("%d", &goBack);

			if (goBack == 1) {
				break;
			} else {
				puts("What would you like to do?");
				scanf("%d", &choice);
				}
		} else {
			puts("Would you like to return to the previous room? 1) Yes \n 2) No \n");
			scanf("%d", &goBack);

			if (goBack == 1) {
				break;
			} else {
					puts("What would you like to do?");
					scanf("%d", &choice);
				}
		}
	}
				break;
			}
			case 5:
			{
				puts("room5");
				break;
			}
			case 6:
			{
				// Intro
                		printf("You enter through the first door you see, there's no logic behind it, just pure panic and instinct taking over.\n");
                		printf("You're shocked by the immediate darkness, the sudden change in lighting catching you off guard. It takes a few seconds for your eyes "
                       "to adjust, but as they do you notice 2 more doors in front of you. \n\n");
                	printf("The left one is a dark, warped metal, with large scratches gouged into it as if some large beast was trying to break its way in.\n\n");
                	printf("The second appears to be marble, though in its current weathered state it's hard to tell. It was likely very ornate at one point "
                       "though, you wonder how long it's been down here for.\n\n");
                	printf("Not sure where to proceed from here but with seemingly no other option, you decide to pick a door and continue forward.\n"
                       " Which door do you choose? (1: Left, 2: Right)\n");

                // First choice
                chooseDoor();

                // Door text
                printf("You walk through the door, afraid of what you'll find, but to your surprise it's simply an altar with 2 ancient-looking "
                       "weapons laying upon it.\n\n");
                printf("On the left is what appears to be a battleaxe, one of great size and seemingly still very sharp despite its age. It has a very"
                       " intricate design, you wouldn't be surprised if it belonged to some sort of Norse royalty. \n\n");
                printf("On the right is a traditional Japanese katana, which also appears to be in very good condition despite its obvious age. You bet "
                       "you could still cleave a person or two in half with that, better be cautious of it.\n\n");
                printf("Once again stuck with a choice with no obvious path forward, you decide to grab a weapon and advance through this maze."
                       "\nWhich do you take? (1: Norse Axe, 2: Japanese Katana) \n");

                // Second choice
                chooseWeapon();

                // Next room text
                printf("Proceeding past the weapons you cross a threshold into a new room, this one containing a wooden chest with a padlock on it. "
                       "There is a simple stone door at the end, though it appears to be locked.\n\n");
                printf("There are 5 keys placed on the floor around this chest, all seemingly identical. Assumedly you are supposed to guess which key"
                       " fits, but why place them all here if only one works? Something isn't adding up, and you begin to worry about what will happen if you get "
                       "it wrong...\n\n");
                printf("And as fate would have it, your suspicions are proven correct. The room immediately starts to flood with a green gas, your vision already "
                       "starting to turn fuzzy. You likely only have enough breath saved up to try a few of the keys before you run out of time, and you don't want to"
                       " think about what happens when that time runs out.\n\n");

                // Third choice
                chooseKey();

                // Cake text
                printf("Leaving the room through the newly unlocked door (you don't know how it unlocked itself but you're too afraid to theorize on "
                       "how it happened), you enter into a seemingly endless stone hallway. \n\n");
                printf("Sitting on the floor is something you never would have expected in a place like this, a piece of pink frosted birthday cake.\n\n");
                printf("Obviously suspicious of something so out of place, you aren't sure how to proceed. You've been down here for who knows how long"
                       " and are famished, but on the other hand this could be another trap, or maybe it's poisoned. \n\n");
                printf("Either way you've got a choice to make, do you eat it, or simply walk past? (1: Eat, 2: Ignore)\n");

                // Fourth choice
                chooseCake();

                // Entering throne room text
                printf("Eventually you begin to see a light in the distance. It's dim, but even that small light gives you hope that your journey might"
                       " soon be over\n\n");
                printf("As you get closer you see it's an open door, and as you finally reach it you realize the scale of the room in front of you. \n\n");
                printf("You've just entered in what appears to be a throne room, one so grand and regal it looks straight out of a castle. The roof rises"
                       " what must be nearly 100 feet into the air, far too large to exist in a place like this. The walls are lined with ornate tapestries and"
                       " suits of armor, and at the very back is a throne so massive it would be fit for a giant straight out of a fantasy novel.\n\n");
                printf("You take your time taking in the sights, but eventually you move deeper into the room. As you approach the throne, an altar appears "
                       "out of nowhere in front of you. Engraved into the stone is a sentence in a foreign language, one you don't recognize. But somehow deep in"
                       " your soul you know exactly what it means.\n\n");
                printf("'Place your weapon here, and receive your gift'\n\n");
                printf("Your journey has been long, and far from easy, but the idea of a gift certainly raises your morale. Maybe this was all worth it"
                       " after all. \n\n");

                // Fifth (final) choice
                chooseEnding();

                // Loop to print user choices
                printf("Congratulations on finishing the journey! Here are all your choices:\n");
                for (int i = 0; i < 5; i++)
                {
                    printf("%s\n", choices[i]);
                }
                // Exit text
                printf("\nSuddenly as soon as it started, your journey is over. You are back where you started, but things are different now. You await going "
                       "back home with baited breath, with both fear and excitement mingling together. Things will be different, only time will tell how though. \n\n");
				break;
			}
			case 7:
			{
				puts("room7");
				break;
			}
			case 8:
			{
				puts("room8");
				break;
			}
			case 9:
			{
				puts("room9");
				int choice = 0;
				char playerName[6];
				srand(time(NULL));
				    
				printf("Please enter your player name: ");
				scanf("%s", playerName);

				printf("\nWelcome %s, to progress the story use the ENTER key during gameplay.\n", playerName);
				doorChoice();
				while(choice != 6)
				{
					puts("\nWhat path do you decide to choose?");
					puts("|Door 1: Straight ahead|Door 2: Left|Door 3: Right|Door 4: Behind you|Door 5: Circular latched door|(6 will quit the game at any point)");
					scanf("%d", &choice);
					switch(choice)
					{
						case 1:
							{
								puts("\n|You decided to go straight ahead and enter Door 1|\n");
								while(getchar() != '\n');

								printf("Once inside, the door you entered from closes leaving you in an identical room.");
								while(getchar() != '\n');

								printf("The voice from before calls out and states You have unfortunately guessed incorrectly and will have to be culled from the experiment.");
								while(getchar() != '\n');

								printf("The floor below you begins to open up from the middle exposing a pool of lava.");
								while(getchar() != '\n');

								printf("Ultimately, you succumb to the lava and perish.");
								while(getchar() != '\n');

								break;
							}
						case 2:
							{
								puts("\n|You decided to go left and enter Door 2|\n");
								while(getchar() != '\n');

								printf("Once inside, the door you entered from closes leaving you in an identical room.");
								while(getchar() != '\n');

								printf("The voice from before calls out and states You have passed the first section of the experiment but must face an adversary to proceed.");
								while(getchar() != '\n');

								printf("The door in front of you opens up and reveals a black bear.");
								while(getchar() != '\n');

								printf("The voice declares that you must fight against the bear in order to proceed to the next room.");
								while(getchar() != '\n');

								printf("Ultimately, you succumb to the bear and perish.");
								while(getchar() != '\n');

								break;
							}
						case 3:
							{
								puts("\n|You decided to go right and enter Door 3|\n");
								while(getchar() != '\n');

								printf("Once inside, the door you entered from closes leaving you in an identical room.");
								while(getchar() != '\n');

								printf("You have a moment of silence with the voice seemingly gone.");
								while(getchar() != '\n');

								printf("Linear cracks start to form on all parts of the walls around the room with a red hue escaping the cracks");
								while(getchar() != '\n');

								printf("The voice continues its abscence but a siren begins to blare in the room.");
								while(getchar() != '\n');

								printf("Laser beams escape through every crack leaving no room to avoid them.");
								while(getchar() != '\n');

								printf("Ultimately, you succumb to the laser beams and perish.");
								while(getchar() != '\n');

								break;
							}
						case 4:
							{
								char *rewardChoice[] = { "|CHOICE 1: $10,000,000|", "|CHOICE 2: 1 of 1 specially crafted Porche|", "|CHOICE 3:Luxury villa of your own|", "|CHOICE 4:Small remote island ownership|", "|CHOICE 5:Connections with influential figures|" };
								int prizeChoice = 0;
								puts("\n|You decided to go behind and enter Door 4|\n");
								while(getchar() != '\n');

								printf("Once inside, the door you entered from closes leaving you in an identical room.");
								while(getchar() != '\n');

								printf("The voice congratulates you and exclaims that you have chosen the correct door.");
								while(getchar() != '\n');

								printf("A shift in the ceiling appears and down comes a giant digital screen extended by a robotic arm.");
								while(getchar() != '\n');

								printf("The Screen projects 5 options to choose from.");
								while(getchar() != '\n');

								printf("The Voice proceeds to explain that a rewards was guaranteed for signing up for the experiment.");
								while(getchar() != '\n');

								printf("you ask the voice of your whereabouts and how you ended up in such a situation in confusion aftering finding out you signed up for this.");
								while(getchar() != '\n');

								printf("The voice explains you signed away your life in exchange for being in an 'experiment' for a chance to win expensive prizes after completion.");
								while(getchar() != '\n');

								printf("your situation was dire and you believed this was your only chance to get out of the crippling debt you've accumulated.");
								while(getchar() != '\n');

								printf("The voice then urges you to pick a prize presented on the digital screen.\n");
								while(getchar() != '\n');

								for(int i = 0; i < 5; i++)
								{
									printf("%s\n", rewardChoice[i]);
								}
								puts("Please pick a reward for completion of the experiment: ");
								scanf("%d", &prizeChoice);
								switch(prizeChoice)
								{
									case 1:
										{
											puts("\nCongratulations you have chosen |CHOICE 1: $10,000,000|.");
											while(getchar() != '\n');
											puts("You may attempt again if you wish to do so to unlock the other endings if not you may quit by inputing 6 at the selection menu.");
											while(getchar() != '\n');
											break;
										}
									case 2:
										{
											puts("\nCongratulations you have chosen |CHOICE 2: 1 of 1 specially crafted Porche|.");
											while(getchar() != '\n');
											puts("You may attempt again if you wish to do so to unlock the other endings if not you may quit by inputing 6 at the selection menu.");
											while(getchar() != '\n');
											break;
										}
									case 3:
										{
											puts("\nCongratulations you have chosen |CHOICE 3:Luxury villa of your own|.");
											while(getchar() != '\n');
											puts("You may attempt again if you wish to do so to unlock the other endings if not you may quit by inputing 6 at the selection menu.");
											while(getchar() != '\n');
											break;
										}
									case 4:
										{
											puts("\nCongratulations you have chosen |CHOICE 4:Small remote island ownership|.");
											while(getchar() != '\n');
											puts("You may attempt again if you wish to do so to unlock the other endings if not you may quit by inputing 6 at the selection menu.");
											while(getchar() != '\n');
											break;
										}
									case 5:
										{
											puts("\nCongratulations you have chosen |CHOICE 5:Connections with influential figures|.");
											while(getchar() != '\n');
											puts("You may attempt again if you wish to do so to unlock the other endings if not you may quit by inputing 6 at the selection menu.");
											while(getchar() != '\n');
											break;
										}
								}
								break;
							}
						case 5:
							{
								int r = rand() % 61;
								puts("\n|You decided to go down and attempt to open Door 5|\n");
								while(getchar() != '\n');

								printf("The door below has 5 latches that need to be taken care of before proceeding.");
								while(getchar() != '\n');

								printf("You manage to get all the latches within %d seconds and fall down to a lower level.", r);
								while(getchar() != '\n');

								printf("Unlike the previous room, you land on a platform in the middle of the room surround by water.");
								while(getchar() != '\n');

								printf("The voice returns and exclaims that you have chosen an incorrect door and will unfortunately become feed for their pets.");
								while(getchar() != '\n');

								printf("The sound of heavy gates opening comes from beneath the water.");
								while(getchar() != '\n');

								printf("Dozens of crocodiles ascend from the depths and begin heading your direction.");
								while(getchar() != '\n');

								printf("Ultimately, you succumb to the crocodiles and perish.");
								while(getchar() != '\n');

								break;
							}
						case 6:
							{
								puts("You have decided to end the game.");
								break;
							}
							           
							 default:
							{
								puts("Invalid input entered.");
							}
					}
				}
				puts("Game End");
				break;
			}
			case 10:
			{
				puts("room10");
				break;
			}
			case 11:
			{
				puts("room11");
				break;
			}
			case 12:
			{
				puts("room12");
				break;
			}
			case 13:
			{
				puts("room13");
				break;
			}
			case 14:
			{
				puts("room14");
				break;
			}
			case 15:
			{
				puts("room15");
				break;
			}
			case 16:
			{
				puts("room16");
				break;
			}
			case 17:
			{
				puts("room17");
				break;
			}
			case 18:
			{
				puts("room18");
				break;
			}
			case 19:
			{
				puts("room19");
				break;
			}
			case 20:
			{
				puts("room20");
				break;
			}
			case 21:
			{
				puts("room21");
				break;
			}
			case 22:
			{
				puts("room22");
				break;
			}
			case 23:
			{
				puts("room23");
				processRoom23();
				break;
			}
			case 24:
			{
				puts("room24");
				printf(">> Entering the Lair of the Lizardman <<\n\nYou stand before a formidable foe - a Lizardman. At your feet lies a sword, glinting ominously in the dim light. Do you choose to face the creature head-on, or retreat and seek refuge elsewhere?\n\n");

                printf("Choose your action:\n1. Fight\n2. Run Away\n\n");
                int actionChoice;
                scanf("%d", &actionChoice);

                if (actionChoice == 1)
                {
                    printf("\nYou pick up the sword, bracing yourself for the impending battle.\n\n");
                }
                else if (actionChoice == 2)
                {
                    printf("\nYou turn to flee, hoping to escape the impending danger.\n\n");
                    printf("As you retreat, you stumble and fall into a pool of murky water from the previous room. The suffocating depths claim you, and darkness consumes your vision. Game Over.\n\n");
                    break;
                }
                else
                {
                    printf("\nInvalid choice. Your hesitation killed you.\n\n");
                    break;
                }

                int playerRoll, lizardRoll;
                printf("Press ENTER to roll the dice and determine your fate: ");
                getchar();
                getchar();

                playerRoll = (rand() % 6) + 1;
                lizardRoll = (rand() % 6) + 1;

                printf("\nYour Roll: %i\nLizardman Roll: %i\n", playerRoll, lizardRoll);

                if (playerRoll == lizardRoll)
                {
                    printf("Both parties have rolled equal values. Try Again.\n\n");
                }
                else if (lizardRoll > playerRoll)
                {
                    printf("The Lizardman strikes you down with a swift blow. Game Over.\n\n");
                    break;
                }
                else
                {
                    printf("You have slain the Lizardman! You may proceed!\n\n");

                   
                    char *words[2] = {"Mango", "Garrett Poppe"};
                    char guessWord[20], wrongGuesses[6], secretWord[20], input[20];
                    int maxTries, wrongCount = 0, correctCount = 0, difficulty, i;
                    char guess;

                    printf("After passing through the door of riddles, you stand in a room with a tall centaur statue that challenges you to a guessing game.\n");
                    printf("If you win, you can continue your journey; if you lose, you perish. Do you choose the easy or hard difficulty? The stakes are high, and your decision could mean life or death.\n\n");

                 
                    printf("Select difficulty level (1 for Easy, 2 for Hard): ");
                    scanf("%d", &difficulty);
                    getchar();

                   
                    if (difficulty == 2)
                    {
                        strcpy(secretWord, words[1]);
                        maxTries = 2;
                        printf("Hint: The creator of this dungeon.\n");
                    }
                    else
                    {
                        strcpy(secretWord, words[0]);
                        maxTries = 5;
                        printf("Hint: A fruit.\n");
                    }

                    int wordLength = strlen(secretWord);

                   
                    for (i = 0; i < wordLength; i++)
                    {
                        guessWord[i] = (secretWord[i] == ' ') ? ' ' : '_';
                    }
                    guessWord[wordLength] = '\0';

                 
                    while (wrongCount < maxTries && correctCount < wordLength)
                    {
                        printf("Current word: %s\n", guessWord);
                        printf("Guess a letter or the whole word: ");
                        fgets(input, sizeof(input), stdin);
                        input[strcspn(input, "\n")] = 0;  

                        if (strlen(input) == 1)
                        {
                            guess = input[0];
                            int found = 0;
                            for (i = 0; i < wordLength; i++)
                            {
                                if (tolower(secretWord[i]) == tolower(guess) && guessWord[i] == '_')
                                {
                                    guessWord[i] = secretWord[i];
                                    correctCount++;
                                    found = 1;
                                }
                            }

                            if (!found)
                            {
                                wrongGuesses[wrongCount++] = guess;
                                wrongGuesses[wrongCount] = '\0';  
                                printf("Wrong guesses: %s\n", wrongGuesses);
                            }
                        }
                        else if (strcasecmp(input, secretWord) == 0)
                        {
                            strcpy(guessWord, secretWord);
                            correctCount = wordLength;
                            break;
                        }
                        else
                        {
                            printf("Incorrect word guess.\n");
                            wrongGuesses[wrongCount++] = '#';
                            wrongGuesses[wrongCount] = '\0';
                        }

                        printf("You have %d tries left.\n", maxTries - wrongCount);
                    }

                    if (correctCount == wordLength)
                    {
                        printf("Congratulations! You guessed the word: %s\n", secretWord);
                        printf("\nA bright blue portal appears, offering a glimmer of escape from the dungeon nightmare. You step into it, hoping it leads to freedom.");
                       
               
                        enum coin { HEADS, TAILS };
                        int userChoice;
                        int headsCount = 0;
                        int tailsCount = 0;

                        printf("Emerging from the portal's embrace, you find yourself in a dilemma, faced with two diverging paths. At the center of this decision looms a mischievous imp, its grin a sinister promise of guidance if you're willing to wager your fate. With a flicker of amusement in its eyes, the imp offers to reveal the correct path, but only if you dare to engage in a game of chance—a simple coin flip to determine your next move. This imp is unfortunately your only hope so you have to play his game.\n\n");
                        printf("What would you choose?\n(5) Press 5 for \"HEADS\"\n(6) Press 6 for \"TAILS\"\n(7) *Message to Player: Press 7 for a guaranteed win to continue the story*\n");
                        scanf("%d", &userChoice);
   
                        if (userChoice != 5 && userChoice != 6 && userChoice != 7)
                        {
                            printf("Invalid choice. Please choose 5 for \"HEADS\", 6 for \"TAILS\", or 7 for a guaranteed win to continue the story.\n");
                            return 1;
                        }
   
                        if (userChoice == 7)
                        {
                            printf("You chose the special option. You won and the story continues!\n");
                            printf("\nYour victory in the coin flip game wipes the imp's grin, replacing it with a disheartened frown as it begrudgingly points towards the correct path, to the right. With newfound confidence, you stride purposefully in that direction, trusting your instinct to guide you through the crossroads.");
                        }
                        else
                        {
                            for (int i = 0; i < 3; i++)
                            {
                                if (rand() % 2 == HEADS)
                                {
                                    printf("HEADS\n");
                                    headsCount++;
                                }
                                else
                                {
                                    printf("TAILS\n");
                                    tailsCount++;
                                }
                            }
   
                            printf("Number of HEADS: %d\n", headsCount);
                            printf("Number of TAILS: %d\n", tailsCount);
   
                            if ((userChoice == 5 && headsCount > tailsCount) || (userChoice == 6 && tailsCount > headsCount))
                            {
                                printf("\nCongratulations! You win!\n");
                                printf("Your victory in the coin flip game wipes off the imp's grin, replacing it with a disheartened frown as it begrudgingly points towards the correct path, to the right. With newfound confidence, you stride purposefully in that direction, trusting your instinct to guide you through the crossroads.");
                            }
                            else if (headsCount == tailsCount)
                            {
                                printf("It's a tie!\n");
                            }
                            else
                            {
                                printf("\nYou have lost.\n");
                                printf("Your defeat in the coin flip game ignites the imp's grin into a sinister, manic laughter, his joy tangible as he claims your soul as nourishment. With a shiver, you watch helplessly as your essence is consumed, lost to the insatiable hunger of the imp's malevolent appetite. Game Over.\n\n");
                                break;
                            }
                        }
                    }
                    else
                    {
                        printf("\nYOU ARE DEAD.\n");
                        printf("\nThe statue's stony facade cracks with an unsettling creak, before abruptly springing to life. With a swift and merciless strike, its stone spear descends upon your head, sealing your fate in a single, fatal blow. Game Over.\n\n");
                        break;
                    }
                   
                    char pathChoice[10];
                    int finalChoice;
                   
                    printf("\n\nAs you delve deeper into your path, you come across another crossroad. To your left, a staircase spirals upwards, illuminated by an eerie glow that seems to beckon you forward, making you believe that this is the way out. On the other hand, to your right, a narrow hallway stretches into the distance, illuminated by the flickering blue light of torches. As you contemplate your options, you notice that the narrow hallway seems endless, and you cannot see anything deeper but a void of the color blue, adding an unsettling mystery to its allure. (Press Enter to Continue).");
                    getchar();
                   
                    printf("\nThis is the final stretch! Which path do you want to take?\nType 'Light' for the staircase or 'Dark' for the narrow hallway: ");
                    scanf("%s", pathChoice);
                   
                    if (strcmp(pathChoice, "Light") == 0)
                    {
                        finalChoice = 9;
                    }
                    else if (strcmp(pathChoice, "Dark") == 0)
                    {
                        finalChoice = 10;
                    }
                    else
                    {
                        printf("Invalid choice! Please enter either 'Light' or 'Dark'.\n");
                        return 1;
                    }
                   
                    switch (finalChoice)
                    {
                        case 9:
                            printf("\n> You have chosen the Light option. <\n\nFueled with determination, you quickly climbed to the top of the stairs. What awaits you was not freedom but a grotesque sight awaits you: a monstrous creature with a single glowing white eyeball, its wings unfurled menacingly.\n\n");
                           
                            printf("The creature's gaze locks onto you, and before you can react, a searing pain pierces your mind as if a thousand needles were probing your thoughts. Your senses reel as blood begins to trickle from your eyes, nose, and mouth, and with a sickening realization, that your journey finally come to an end. Moments later, your head explodes from the pain. Game Over.\n\n");
                            printf("\n\n >> END <<\n\n\n");
                            break;
                       
                        case 10:
                            printf("\n> You have chosen the Dark option. <\n\nWith an unwavering determination not to be deceived by false promises, you choose the blue torchlit hallway. As you cautiously tread forward, you remain vigilant for any signs of danger, wary of falling victim to another trap.\n\n");
                           
                            printf("With each step, the endless hallway seems to stretch on indefinitely. As you cautiously make your way down the hallway, the oppressive silence is broken by the sound of a click beneath your foot. Before you can react, a trap door swings open beneath you, sending you plummeting into a dimly lit room.\n\nAt the sudden realization and hopelessness, you have moved right back to square one.");
                            printf("\n\n >> END <<\n\n\n");
                            break;
                       
                        default:
                            printf("Invalid choice! Please enter either 9 or 10.\n");
                            return 1;
                    }
                }
				break;
			}
			case 25:
			{
				puts("room25");
				break;
			}
			case 26:
			{
				puts("room26");
				break;
			}
			case 27:
			{
				puts("room27");
				break;
			}
			case 28:
			{
				puts("room28");
				break;
			}

			case 29:
			{
				puts("room29");
                bool survived = trap_d10();
                if(!survived)
                {
                    puts("You Died.");
                    return EXIT_SUCCESS;

                }
                else
                {
                    puts("You escaped the trap unharmed.");
                }

                break;
			}
			case 30:
			{
				puts("room30");
				break;
			}
			case 31:
{
        puts("room31");
        srand(time(NULL));
        //INFINITE HALLWAY
        puts("\nROOM 31 SELECTED\n");
        //alz is user input
        int alz = 0;
        //alx is fatigue counter
        int alx = 0;
        //aly is condition of closet door
        int aly = 0;
        //alr is the choice for searching the room
        int alr = rand() % 5 + 1;
        //alc is the condition of the crowbar
        int alc = 0;
        //alm is the condition of the creature
        int alm = 0;
        //alt is whether player traversed the hallway without running into the creature
        int alt = 0;
        int eswc = 0;
        //simple array w/ that doesn't allow dupes / Fisher-Yates shuffle
        int arr[15];
        int used[10] = {0};
        for (int ali = 0; ali < 15; ali++) {
            arr[ali] = ali + 1;
        }
        for (int ali = 14; ali > 0; ali--) {
            int alj = rand() % (ali + 1);
            int temp = arr[ali];
            arr[ali] = arr[alj];
            arr[alj] = temp;
        }
        while (alx < 100) {
        puts("NOTICE: Beyond this point, please use the Enter key to continue the story.");
        //This statement stops the user from being flooded with text
                ajlSpace();
        
        printf("\nYour eyes lock onto the door marked with the number 31 as water continues to flood the room around you, your hands grasp the cold and ominous knob. You turn the handle and yank the door open.\n");
        ajlSpace();
        
        printf("On the other side of the door a blinding bright flash of light hits your eyes and without thinking you brazenly step through the door realize you are in a closet.\n");
                ajlSpace();
        
        printf("You give a quick look around the room and realize the door behind you is now gone, it seems you can only go forward.\n");
                ajlSpace();
        
        printf("Your heart pulses as you realize you might be in more danger than the last room...\n");
                ajlSpace();
          
          printf("Enter a number to make a choice: \n1: Check your phone.\n2: Cry out for help.\n3: Look around.\n");
          printf("\n");
          scanf("%d", &alz);
          while (alz < 1 || alz > 3)
          {
              alx += 1;
              printf("You take a minute to breathe, and then you consider your options... \n");
              while(getchar() != '\n');
            printf("Enter a number to make a choice: \n1: Check your phone.\n2: Cry out for help.\n3: Look around.\n");
              printf("\n");
              scanf("%d", &alz);
          }
          switch(alz)
          {
                    ajlSpace();
              case 1:
                printf("You check your phone and realize water got into it... it doesn't seem to work.\n");
                        ajlSpace();
                break;
              case 2:
                printf("You yell for help in the closet... but nothing happens.\n");
                      ajlSpace();
              break;
              case 3:
                printf("You look around in the closet, there is a bright light above you illuminating the room, there seems to be a bunch of junk around here.");
                      ajlSpace();
              break;
              default:
               printf("You feel yourself lose hope...\n");
                       ajlSpace();
          }
        printf("You feel you must do something.\n");
                ajlSpace();
        printf("Enter a number to make a choice: \n1: Conquer your fear, kick open the door! \n2: Gently open the door and peek into the next room.\n3: Observe the closet closely.\n");
        printf("\n");
        scanf("%d", &alz);
        while (alz < 1 || alz > 3)
        {
            alx += 1;
            printf("You decide to stare vacantly at the door, several moments pass and you realize you only have a few options. \n");
            while(getchar() != '\n');
          printf("1: Conquer your fear, kick open the door! \n2: Gently open the door and peek into the next room.\n3: Observe the closet closely.\n");
            printf("\n");
            scanf("%d", &alz);
        }
        printf("\n");
        while(getchar() != '\n');
        //Generates result of choice
          switch(alz)
          {
              case 1:
                  printf("You violently kick the door open, it breaks the latch on the door, making it now impossible to close, you walk into the hallway and have a look around.\n");
                  alx += 2;
                  aly += 1;
                          ajlSpace();
              break;
              case 2:
                  printf("You slowly peek through the door, and realize it's a hallway, you decide to have a look around...\n");
                  alx += 1;
                          ajlSpace();
              break;
              case 3:
                  printf("You decide to closely observe the closet and search meticulously...");
                  alx += 3;
                    if (alr == 1) 
                    {
                    printf(" unfortunately you find nothing. The closet is filled with trash, you decided you had enough and kick open the door into the hallway and have a look around.\n");
                    aly += 1;
                    } 
                    else if (alr == 2) 
                    {
                    printf(" you find only a granola bar, you are hungry so you decide to eat it. After having a snack, you decided you had enough and kick open the door into the hallway and have a look around...\n");
                    alx -= 3;
                    aly += 1;
                    } 
                    else if (alr == 3) 
                    {
                    printf(" you find only a granola bar, you are hungry so you decide to eat it. After having a snack, you decided you had enough and slowly peek through the door, and realize it's a hallway, you decide to have a look around...\n");
                    alx -= 3;
                    } 
                    else if (alr == 4) 
                    {
                    printf(" you find a sturdy and practical looking crowbar. You decide to take it with you, after looking further through the closet, you find nothing else and decided you had enough and kick open the door into the hallway and have a look around... \n");
                    aly += 1;
                    alc += 1;
                    } 
                    else if (alr == 5) 
                    {
                    printf(" you find a sturdy and practical looking crowbar. You decide to take it with you, after looking further through the closet, you find nothing else and you decided you had enough and slowly peek through the door, and realize it's a hallway, you decide to have a look around... \n");
                    alc += 1;
                    }
                            ajlSpace();
              break;
              default:
                    printf("You manage to warp pass the door... this is impossible, but you did it!\n");
              break;
          }
        alz = 0;
        printf("You realize you are in what seems like a hospital hallway that only goes either left or right, seemingly forever. The hallway feels hot and humid, and the dim light makes you feel uncomfortably alone.\n");
                ajlSpace();
          if (alc == 1)
          {
        printf("You firmly grasp the crowbar in your hand, making you feel a little more confident about your predicament.\n");
                ajlSpace();
          }
        printf("When looking left into the hallway, you see dirty walls, floors littered with miscellaneous medical waste, and doors down the hallway that could lead into other rooms. You almost feel like someone is staring at you at the end of it.\n");
                ajlSpace();
        printf("When looking right into the hallway, it seems cleaner, and the hallway isn't as dim, bullet holes and, and pools of blackish red fluid stain the floor, there also seems to be doors down this hallway that could also lead into other rooms. You feel an indescribable sadness looking in this direction.\n");
                ajlSpace();
        printf("You decide you have to go one way or another... enter a number to make a choice: \n1: Go left. \n2: Go right.\n");
        printf("\n");
        scanf("%d", &alz);
        while (alz < 1 || alz > 2) 
        {
            alx += 10;
          printf("%d", alx);
            printf("Your body feels like it doesn't want to move, yet several moments pass and you realize you only have a few options. \n");
            while(getchar() != '\n');
            printf("1: Go left. \n2: Go right.\n");
            printf("\n");
            scanf("%d", &alz);
        }
        //HALLWAY LEFT
        alr = 0;
          switch(alz)
            case 1:
            {
              printf("\n");
                      ajlSpace();
                while ((alr != 1 && alr != 10) || alt != 7)
                {
                alr = arr[rand() % 10] % 10 + 1;
                  if (used[alr - 1] == 0) 
                 {
                    used[alr - 1] = 1;
                      if (alr == 2) 
                        {
                        printf("The smell in the hallway is offensive, yet you continue to march on through.\n");
                        alx++;
                        alt++;
                                ajlSpace();
                        } 
                        else if (alr == 3) 
                        {
                        printf("You hear something from afar hit the ground, chills rush up your spine as you tread faster.\n");
                        alx++;
                        alt++;
                                ajlSpace();
                        }
                        else if (alr == 4) 
                        {
                        printf("The nearby hum from an indistant machine hurts your head. As you walk along the hallway.\n");
                        alx++;
                        alt++;
                                ajlSpace();
                        }
                        else if (alr == 5) 
                        {
                        printf("You kick over a box, the noise startles you, yet you continue to tread onward.\n");
                        alx++;
                        alt++;
                                ajlSpace();
                        }
                        else if (alr == 6) 
                        {
                        printf("The dripping of liquid nearby reminds you of the drowned room you were just trapped within. Reminding you, you need to escape. \n");
                        alx++;
                        alt++;
                                ajlSpace();
                        }
                        else if (alr == 7) 
                        {
                        printf("You notice a door, you try the handle, yet it's locked... \n");
                        alx++;
                        alt++;
                        if (alc == 1)
                        {
                          printf("You try the crowbar on the door, and...");
                          alr = rand() % 2;
                          if (alr == 0) 
                          {
                          printf("It doesn't budge. What a bummer.\n");  
                          }
                          if (alr == 1) 
                          {
                          printf("The door cracks open, you look around, but there actually doesn't seem to be anything of value inside... What a bummer.\n");  
                          }
                        }
                                ajlSpace();
                        }
                        else if (alr == 8) 
                        {
                        printf("A cute drawing sits in filth on the floor, you wonder what happened here, best get a move on...\n");
                        alx++;
                        alt++;
                                ajlSpace();
                        }
                        else if (alr == 9) 
                        {
                        printf("Something in the pipes above you rattle... Is something following you? You dare not look up.\n");
                        alx++;
                        alt++;
                                ajlSpace();
                        }
                        if (alr == 1 || alr == 10 || alt == 7) 
                        {
                        break;
                        }
                    }
                  }
                  
                  if (alt == 7) 
                  {
                    printf("You finally make it to the end of the hallway.\n");
                            ajlSpace();
                    printf("You see a number written on the wall. Weird.\n");
                            ajlSpace();
                    break;
                  } 
                  else if (alr == 1)
                  {
                    printf("Even after you knew there were eyes hunting you in that side of the hallway, yet you went that way anyways. Your body screams to run. And you can't help but oblige.\n");
                    if (alc == 1)
                    {
                      printf("Your hands shake in fear and you drop your crowbar at your feet.\n");
                    alc--;
                    }
                              ajlSpace();
                      printf("You turn and bolt the other way, your heart beats fast, you know you are being chased but you don't want to look back. \n");
                              ajlSpace();
                      alx += 20;
                      alz += 1;
                      alm++;
                    }
                  else if (alr == 10)
                  {
                    printf("You knew there were eyes hunting in that side of the hallway, yet you went that way anyways. Your body screams to run. But you can't oblige.\n");
                    if (alc == 1)
                    {
                      printf("Your hands shake in fear and you grip your crowbar ready to attack.\n");
                              ajlSpace();
                    }
                      printf("The creature bolts at you, your heart beats fast... \n");
                              ajlSpace();
                    printf("You decide in a split second... : \n1: Fight. \n2: Flee.\n");
                    scanf("%d", &alz);
                    while (alz < 1 || alz > 2) 
                    {
                        printf("Your body doesn't react in time... \n");
                        while(getchar() != '\n');
                        alx+= 100;
                        printf("The creature delivers a massive blow to your body. \n");
                      alm++;
                      break;
                    }
                    alr = rand() % 10;
                    if (alc == 1)
                    {
                      printf("You try the crowbar on the door, and...");
                      alr = rand() % 2;
                      if (alr == 0) 
                      {
                      printf("It doesn't budge. What a bummer.\n");  
                      }
                      if (alr == 1) 
                      {
                      printf("The door cracks open, you look around, but there actually doesn't seem to be anything of value inside... What a bummer.\n");  
                      }
                    }
                      alx += 20;
                    break;
                  }
                if(alz == 1)
                {                
                  break;
                }
              //HALLWAY RIGHT
                  case 2:
                    if (alm == 1)
                    {
                    printf("You run, and somehow you manage to elude the monster in the hallway, you know\n");
                    }
                            ajlSpace();
                      while ((alr != 1 && alr != 10) || alt != 7)
                      {
                      alr = arr[rand() % 10] % 10 + 1;
                        if (used[alr - 1] == 0) 
                       {
                          used[alr - 1] = 1;
                            if (alr == 2) 
                              {
                              printf("As you wander through the hallway, you wonder what lead to the events that transpired here.\n");
                              alx++;
                              alt++;
                                      ajlSpace();
                              } 
                              else if (alr == 3) 
                              {
                              printf("You hear something indistance voices, is someone following you?\n");
                              alx++;
                              alt++;
                                      ajlSpace();
                              }
                              else if (alr == 4) 
                              {
                              printf("The hallway feels timeless, as if you've been there before...\n");
                              alx++;
                              alt++;
                                      ajlSpace();
                              }
                              else if (alr == 5) 
                              {
                              printf("You feel groggy, but no time to rest!\n");
                              alx++;
                              alt++;
                                      ajlSpace();
                              }
                              else if (alr == 6) 
                              {
                              printf("The air feels crusty and stale. Is there any way out? \n");
                              alx++;
                              alt++;
                                      ajlSpace();
                              }
                              else if (alr == 7) 
                              {
                              printf("You notice a door, you try the handle, yet it's locked... \n");
                              alx++;
                              alt++;
                              if (alc == 1)
                              {
                                printf("You try the crowbar on the door, and...");
                                alr = rand() % 2;
                                if (alr == 0) 
                                {
                                printf("It doesn't budge. What a bummer.\n");  
                                }
                                if (alr == 1) 
                                {
                                printf("The door cracks open, you look around, but there actually doesn't seem to be anything of value inside... What a bummer.\n");  
                                }
                              }
                                      ajlSpace();
                              }
                              else if (alr == 8) 
                              {
                              printf("A cute drawing is written on the wall, who could have done that...\n");
                              alx++;
                              alt++;
                                      ajlSpace();
                              }
                              else if (alr == 9) 
                              {
                              printf("Something in the pipes above you rattle... Is something following you? You dare not look up.\n");
                              alx++;
                              alt++;
                                      ajlSpace();
                              }
                              if (alr == 1 || alr == 10 || alt <= 7) 
                              {
                              break;
                              }
                          }
                        }

                        if (alt <= 7) 
                        {
                          printf("You finally make it to the end of the hallway.\n");
                                  ajlSpace();
                          printf("You see a door with a keypad, a white light glows on the opposite side of the door.\n");
                                  ajlSpace();
                          if (alc == 1)
                          {
                            printf("Thankfully you don't need to know the passcode, your crowbar breaks the door open,\n");
                                  ajlSpace();
                          eswc++;
                          break;
                          }
                          printf("You don't know the code... It can be pryed open with a bar or something.\n");
                                  ajlSpace();
                          printf("You could try to guess it, but it seems to accept a 7 number code... You may be here all day.\n");
                                  ajlSpace();
                          printf("You decide you have make a choice: \n1: Try to guess. \n2: Go back to the other side of the hallway.\n");
                          printf("\n");
                          scanf("%d", &alz);
                          while (alz < 1 || alz > 2) 
                          {
                              alx += 10;
                            printf("%d", alx);
                              printf("You try the third option and try to bust down the door, but after tiring yourself out... You realize you can either:\n");
                              while(getchar() != '\n');
                              printf("1: Try to guess. \n2: Go back to the other side of the hallway.\n");
                              printf("\n");
                              scanf("%d", &alz);
                          }
                          switch(alz)
                          {
                                    ajlSpace();
                              case 1:
                                printf("Time to guess, hopefully you can get lucky.\n");
                                        ajlSpace();
                                printf("After several minutes, you give up.\n");
                                        ajlSpace();
                                printf("Keep trying? \"1\" for yes, \"2\" for no.\n");
                                        ajlSpace();
                                while (alz < 1 || alz > 2) 
                                {
                                    alx += 10;
                                  printf("%d", alx);
                                    printf("You try the third option and try to bust down the door, but after tiring yourself out... You realize you can either:\n");
                                    while(getchar() != '\n');
                                    printf("1: Try to guess. \n2: Go back to the other side of the hallway.\n");
                                    printf("\n");
                                    scanf("%d", &alz);
                                }
                                if (alz == 1){
                                  printf("After several hours, you give up.\n");
                                  alx += 100;
                                          ajlSpace();
                                  break;
                                }
                                if(alz == 2){
                                  
                                }
                              case 2:
                                printf("You head down the hallway to the other side.\n");
                                      ajlSpace();
                                printf ("You find yourself getting the strangest sense of deja vu.\n");
                                        ajlSpace();
                              break;
                              default:
                               printf("You feel yourself lose hope...\n");
                                       ajlSpace();
                               break;
                          }
                        } 
                        else if (alr == 1)
                        {
                          printf("Even after you knew there were eyes hunting you in that side of the hallway, yet you went that way anyways. Your body screams to run. And you can't help but oblige.\n");
                          if (alc == 1)
                          {
                            printf("Your hands shake in fear and you drop your crowbar at your feet.\n");
                          alc--;
                          }
                                    ajlSpace();
                            printf("You turn and bolt the other way, your heart beats fast, you know you are being chased but you don't want to look back. \n");
                                    ajlSpace();
                            alx += 20;
                            alz += 1;
                            alm++;
                          }
                        else if (alr == 10)
                        {
                          printf("You knew there were eyes hunting in that side of the hallway, yet you went that way anyways. Your body screams to run. But you can't oblige.\n");
                          if (alc == 1)
                          {
                            printf("Your hands shake in fear and you grip your crowbar ready to attack.\n");
                                    ajlSpace();
                          }
                            printf("The creature bolts at you, your heart beats fast... \n");
                                    ajlSpace();
                          printf("You decide in a split second... : \n1: Fight. \n2: Flee.\n");
                          scanf("%d", &alz);
                          while (alz < 1 || alz > 2) 
                          {
                              printf("Your body doesn't react in time... \n");
                              while(getchar() != '\n');
                              alx+= 100;
                              printf("The creature delivers a massive blow to your body. \n");
                            alm++;
                            break;
                          }
                          alr = rand() % 10;
                          if (alc == 1)
                          {
                          alr += 3;  
                          }
                          if (alr < 5) 
                          {
                          printf("You miss. The creature delivers a massive blow to your body. \n");
                            alx+= 100;
                            break;
                          }
                          if (alr > 5) 
                          {
                          printf("You land a blow. The creature flees.\n");  
                          }
                            alx -= 20;
                            printf("Eventually, you tread into a room of blinding light after wandering for a while, suddenly you feel yourself fall.\n");
                                    ajlSpace();
                            printf("The flight fades and you hit the ground, you can't seem to recall the events that had just occured, making you wonder if it even happened... \n");
                                    ajlSpace();
                            printf ("You find yourself getting the strangest sense of deja vu.\n");
                                    ajlSpace();
                            break;
                        }
                      if(alz == 1)
                      {                
                        break;
                      }
                  break;
                  default:
                  printf("You split yourself in half and go in BOTH directions?! You might be the monster of the infinite hallway...\n");
                  break;
                  }
        break;
        }
      if (alx >= 100)
      {
        printf ("Your eyes get weary, and you fall to the ground... you can't remember what happened but now... ");
      if(alm == 1)
      {
        printf ("The monster hovers over your body, your eyes shut tight preparing for the worst, and you open them after a while... \n");
      }
        printf ("You find yourself getting the strangest sense of deja vu.\n");
      }
      if (eswc == 1)
      {
        printf("You tread into the room of blinding light, and suddenly you feel yourself fall.\n");
                ajlSpace();
        printf("The flight fades and you hit the ground, you can't seem to recall the events that had just occured, making you wonder if it even happened... \n");
                ajlSpace();
        printf ("You find yourself getting the strangest sense of deja vu.\n");
                ajlSpace();
      }
	}
			case 32:
			{
				int pathNum = 0;
				int choice = 0;
				srand(time(NULL));
				int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};


	puts("Welcome! You have entered room 32!\n");
	puts("There are 5 Paths around the room.\n");

	for(int i = 0; i < 5; i++){
		puts("Path options.");
		puts("Path 1 says 'Take a chance!'.");
                puts("Path 2 says 'Be aware DO NOT ENTER'.");
                puts("Path 3 says 'Enter at your own RISK'.");
                puts("Path 4 says 'Goodies'.");
                puts("Path 5 is across the main door you entered from. It is a long dark pathway seeming to be endless.\n");
		printf("Please choose a path number from 1 - 5: \n");
		scanf("%d", &pathNum);

		if(pathNum < 1 || pathNum > 5)
		{
			puts("Invalid path!");
			puts("Please chose a path between 1 - 5: ");
			scanf("%d", &pathNum);
		}
		switch(pathNum)
		{
			case 1:
				puts("You chose path 1.\n");
				puts("You have encountered a Wizard at the end of the pathway.");
				puts("The Wizard has 3 chests in front of him.\n");
				puts("The Wizard says:");
				puts("Who is there?");
				puts("Ahhh its a traveler!");
				puts("Welcome!");
				puts("I have something for you.");
			do{
				puts("Choose a chest 1 - 3:");
                                scanf("%d", &choice);
				switch (choice) 
				{
					case 1:
						puts("You open the chest and a puff of smoke hit you in the face!");
						puts("You ask the wizard what was that?");
						puts("He says you will see");
						puts("you feel a bit weird.");
						puts("The Wizard sent you back.\n");
						break;
					case 2:
						generateGold();
						puts("The Wizard sent you back.\n");
						break;
					case 3:
						puts("You currently only have flipflops and you found some old shoes.");
						puts("The Wizard tells you that these shoes are better for you.");
						puts("He convinced you to put them on.");
						puts("The Wizard sent you back.\n");
						break;
					default:
						printf("What do you mean %d! Do you see me a as fool!\n", choice);
						break;
				}
				} while(choice < 1 || choice > 3);
			continue;
		case 2: 
			puts("You chose path 2.\n");
			puts("You follow the path to only reach a dead end.");
			puts("All of a sudden the ceiling started to collapse!");
			puts("You managed to get away nearly escaping death.");
			puts("You returned the way you came from.\n");
			puts("Choose a new path.\n");

			continue;
		case 3: 
			puts("You chose path 3.\n");
			puts("You come across an opening to an under ground cave system.");
			puts("You slowly approach since there is no light.");
			puts("You slip on some damp rocks and almost fall into the cave system.");
			puts("Out of fear of almost falling into the cave system you return.");
			puts("Choose a new path.");
			continue;
		case 4: 
			puts("You chose path 4.\n");
			puts("You see a leprechaun sitting down.");
			puts("As you get closer you see a pot of gold sitting infront of him.\n");
			puts("He says:");
			puts("Oh I have a treat for you!");
			puts("Go ahead and get a hand full of coins out of my pot!");
			generateGold();
			puts("You are very welcome ungreatful human!");
			puts("He send you on your way.");
			puts("You returned.");
			puts("Choose a new path.\n");
			continue;
		case 5: 
			puts("You chose path 5.\n");
			puts("You follow the path for what seems forever.");
			puts("You encounter some bugs here and there for hours.");
			puts("You finally see some light at the end of the path!");
			puts("You came to realize that the wizard had put a trap spell on you.");
			puts("You see a pool of water, you decide to wipe your face and drink some water.");
			puts("The effects wore off!");
			puts("It was all an illusion and a dead end appeared.");
			puts("You returned");
			puts("You are now leaving room 32!");
			continue;
		default:
			puts("Invalid path! Please enter another path.\n");
			break;
	}
	
}				break;
			}

      case 33:
      {
        puts("room33");
        break;
      }
      case 34:
      {
        puts("room35");
        break;
      }

      case 36:
      {
        puts("room36");
        break;
      }

      case 37:
      {
        puts("room37");
        break;
      }

			case 38:
			{
				puts("room38");
				break;
			}
			case 39:
			{
				int seed = rand();
				char items[5][15] = {"nothing", "a sword", "a potion", "a skeleton", "a helmet"};

				puts("You enter the room and are presented with 5 choices");
				puts("1. There is chest which may contain valuables");
				puts("2. There is a crack in the wall that looks big enough to squeeze through");
				puts("3. There is another door which could lead anywhere");
				puts("4. There is a dark hallway that may have an exit");
				puts("5. There is a lever that seems to be attached to nothing");
				puts("\nWhich option do you choose?");
				scanf("%d", &choice);
				switch(choice)
				{
					case 1:
					{
						printf("\nYou open the chest and find %s then return to the main room\n\n", items[seed % 5]);
						break;
					}
					case 2:
					{
						printf("\nYou crawl into the crack and realize that its a dead end and turn back\n\n");
						break;
					}
					case 3:
					{
						printf("\nYou try to open the door but its locked. You go back to the last room\n\n");
						break;
					}
					case 4:
					{
						char previous[10] = "right";
						char current[10] = "right";
						while(strcmp(previous, "right") == 0 || strcmp(current, "right") == 0)
						{
							strcpy(previous, current);
							printf("\nYou can go left or right, what do you choose\n");
							scanf("%s", current);
						}
						printf("\nYou finally reach an exit and it leads back to the main room\n\n");
						break;
					}
					case 5:
					{
						printf("\nYou pull the lever and %s", pullLever(seed));
						break;
					}
				}

				break;															
			}
			case 40:
			{
				puts("room40");
				break;
			}
			case 41://Saul Moreno
			{
				int room41 = 0;
        int counter = 1;
        int userNum = 0;
        int userInput = 0;
        int pointTotal = 0;
        int arrayEscape[] = {0,0,0,0,0};
				puts("Welcome! To Room 41");
				printf("In order to survive this room you need to fill out this gauge by answering questions\n");
        printf("The questions are based off a point system. The easier ones being low numbers, \n");
        printf("the hard ones being high numbers. You must reach higher than 15 points to be let out\n"); 
        printf("Since I am generous I will give you a free point between 1-5 ");
				room41 = randomNumRoom41();
        arrayEscape[0] = room41;
				printf("The number is %d\n", room41);
        while(counter < 5)
        {
          printf("Pick a number between 1-5: ");
          scanf("%d", &userNum);
          switch(userNum){
            case 1: 
              printf("Hit 1 for true and 2 for false\n");
              printf("Is two + two = 1: ");
              scanf("%d", &userInput);
              
              if(userInput == 2)
              {
                printf("That is correct!\n");
                arrayEscape[counter] = 1;
              }
              else
              {
                arrayEscape[counter] = 0;
                printf("You got it wrong! No points!!!");
              }
              break;
            case 2:
            printf("Hit 1 for true and 2 for false\n");
              printf("Is Ada Lovelace considered the first programmer? ");
              scanf("%d", &userInput);
              
              if(userInput == 1)
              {
                printf("That is correct!\n");
                arrayEscape[counter] = 2;
              }
              else
              {
                arrayEscape[counter] = 0;
                printf("You got it wrong! No points!!!");
              }
              break;             
            case 3:
              printf("Hit 1 for true and 2 for false\n");
              printf("Is LISP The first object orientated language? ");
              scanf("%d", &userInput);
              
              if(userInput == 2)
              {
                printf("That is correct!\n");
                arrayEscape[counter] = 3;
              }
              else
              {
                arrayEscape[counter] = 0;
                printf("You got it wrong! No points!!!");
              }
              break;
            case 4:
              printf("Hit 1 for true and 2 for false\n");
              printf("Java is an object oriented language that has pointers? ");
              scanf("%d", &userInput);
              if(userInput == 2)
              {
                printf("That is correct!\n");
                arrayEscape[counter] = 4;
              }
              else
              {
                arrayEscape[counter] = 0;
                printf("You got it wrong! No points!!!");
              }
              break;
            case 5:
              printf("Hit 1 for true and 2 for false\n");
              printf("Python provides very little support for iteration? ");
              scanf("%d", &userInput);
              if(userInput == 2)
              {
                printf("That is correct!\n");
                arrayEscape[counter] = 5;
              }
              else
              {
                arrayEscape[counter] = 0;
                printf("You got it wrong! No points!!!");
              }
              break;
            default:
              printf("Error!");
              break;

          }//end switch(userNum){

          counter++;
        }// end  while(counter < 5)

        for(int i = 0; i < 5; i++)
        {
          pointTotal = arrayEscape[i] + pointTotal;
        }

        printf("------------------>Your total points are: %d <--------------------------\n", pointTotal);
        if(pointTotal >= 15)
          printf("You have escaped successfully!!!\n");
        else
          printf("You have failed. Leave your body, but your soul may move to the next room\n");

				break;
			}
			case 42: 
			{
				puts("room42");
				break;
			}
			case 43:
			{
				puts("room43");
				break;
			}
			case 44:
			{
				puts("room44");
				break;
			}
			case 45:
			{
				puts("room45");
				break;
			}
			case 46:
			{
				puts("room46");
				break;
			}
			case 47:
			{
				puts("room47");
				break;
			}
			case 48:
			{
				puts("room48");
				break;
			}
			case 49:
			{
				puts("room49");
				break;
			}
			case 50:
			{
				puts("room50");
				break;
			}
			case 51:
			{
				puts("room51");
				break;
			}
			case 52:
			{
				puts("room52");
				break;
			}
			case 53:
			{
				puts("room53");
				break;
			}
			case 54:
			{
				puts("room54");
				break;
			}
			case 55:
			{
				puts("room55");
				break;
			}
			case 99:
			{
				puts("You have escaped");
				break;
			}
			default:
			{
				puts("invalid choice");
			}
		}
	}
	puts("Game Over");
	return EXIT_SUCCESS;
}


void generateGold() {
	int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int randomArrIndex = 0;
	int randomNumber = 0;
	
	randomArrIndex = rand() % 10;
	randomNumber = numbers[randomArrIndex];
	
	printf("You found %d gold coins!\n", randomNumber);
}

void chooseDoor()
{
// First choice (door)
    scanf("%d", &doorChoice);
    if (doorChoice == 1)
    {
        printf("\nSteeling your nerve, you choose the warped metal door. It may look scary but judging by the scratches on the metal it"
               " likely contains something valuable if the beast was so eager to gain entrance.\n\n");
        strcpy(choices[0], "You chose the metal door.");
    }
    else if (doorChoice == 2)
    {
        printf("\nSteeling your nerve, you choose the ancient marble door. Judging by its design it was likely very expensive and time-consuming"
               " to make, so you can only assume something valuable lies behind. \n\n");
        strcpy(choices[0], "You chose the marble door.");
    }
}

void chooseWeapon()
{
// Second choice (weapon)
    scanf("%d", &weaponChoice);
    if (weaponChoice == 1)
    {
        printf("\nYou pick up the battleaxe, its weight surprises you, very light despite its large size. You swing it around experimentally"
               " a few times and think to yourself you could probably win quite a few fights with this in your hands.\n\n");
        strcpy(choices[1], "You chose the battleaxe.");
    }
    else if (weaponChoice == 2)
    {
        printf("\nYou pick up the katana, its weight surprising you. Despite how small it looked its actually quite heavy, but that heft "
               "only adds to your admiration of the craftsmanship. You swing it around a few times and smile to yourself, your previous assumption "
               "about being able to cleave a man in half was right. You pity anyone who gets in your way with this in your hands. \n\n");
        strcpy(choices[1], "You chose the katana.");
    }
}

void chooseKey()
{
    // Third choice (locked chest)
    // Vars for random number guessing
    int guess;
    int randKey = rand() % 5 + 1;
    // Do-While loop to make the player keep guessing until they get it right
    do
    {
        printf("Pick up a key (Enter 1-5 to choose):\n");
        scanf("%d", &guess);
        if (guess != randKey)
        {
            health -= 20;
            printf("\nYou grab key number %d and attempt to insert it into the lock. But to your dismay it doesn't fit. Your time is quickly running "
                   "out, your health is now at %d and dropping quickly.\n", guess, health);
            printf("You throw the key back and reach for another, hoping this one will be your salvation. \n\n");
        }
    }
    while (guess != randKey);
    strcpy(choices[2], "You eventually chose the correct key");

    // Key-Escape Text
    printf("\nYou grab key number %d and insert it, and to your immense relief it turns. You throw open the lid and look inside, "
           "seeing something completely unexpected but so incredibly relieving, a gas mask.\n\n", randKey);
    printf("You quickly throw it on, finally breathing fresh air for the first time in what feels like hours. Your vision and heart rate begin"
           " to return to normal, and as you look around you see the gas begin to leave the room. \n\n");
    printf("After a few minutes the room appears to be entirely gas free, so you take the risk and remove the mask. Fortunately your guess"
           " was correct, and you can breathe normally again. Whatever that test was, you didn't like it. Hopefully the path forward isn't as"
           " dangerous. \n\n");
}

void chooseCake()
{
// Fourth Choice (cake)
    scanf("%d", &cakeChoice);
    if (cakeChoice == 1)
    {
        printf("\nShrugging, you grab the piece of cake and dig in. Poison be damned, you're hungry and nothing will stop you from eating"
               " something so delicious.\n\n");
        printf("To your immense satisfaction the cake is divine, exactly what you needed in a place like this. You continue to feast, with "
               "nothing bad seeming to happen. You finish the cake, your morale higher than ever and your body feeling rejuvenated.\n\n");
        printf("'Health increased by 20 points'\n");
        printf("'Your health is now %d.'\n\n", health);
        printf("You continue to walk down the hallway for what seems like hours, even the joy of your feast eventually wearing off as the exhaustion"
               " hits.\n\n");
        strcpy(choices[3], "You ate the cake and gained 20 health.");
        health += 20;
    }
    else if (cakeChoice == 2)
    {
        printf("\nYou decide it's not worth the risk, and pass by the cake without touching it. It may have been delicious, or it may have"
               " been poisoned, you'll never know. \n\n");
        printf("You continue to walk down the hallway for what seems like hours, the exhaustion and fear hitting you like a truck. Maybe that"
               " cake would've been nice after all, poison or not. \n\n");
        strcpy(choices[3], "You ignored the cake and missed out on a delicious feast.");
    }
}

void chooseEnding()
{
// If player chose the axe
    if (weaponChoice == 1)
    {
        printf("You place your axe on the altar, and immediately a bright light floods the room. You can't see a thing, but suddenly a voice "
               "begins speaking in your mind. Just like the inscription on the stone it's in a language you've never heard before, but somehow"
               " you understand every word. \n\n");
        printf("'Welcome weary traveler, it seems you've been able to make it through my gauntlet, I applaud you. I can see that you've chosen"
               " my battleaxe, you clearly have incredible taste. I carried that fine weapon into many a battle, all of which it led me to victory.'\n\n");
        printf("'My name is Odin, God of war and ruler of Valhalla, it's a pleasure to make your acquaintance.' \n\n");
        printf("'You've made it through my maze, not everyone could've done that. Because of your victory I'd like to reward you with a prize"
               " befitting a god.'\n\n");
        printf("'I give you two choices, either of which I assure you will not be disappointed by. As I stated previously that axe was once mine, "
               "so if you desire you can return the axe to me, and in exchange I will grant you immense wealth beyond your wildest dreams.'\n\n");
        printf("'Before you jump on this option I will warn you, wealth and power come with a cost, and your life may not be the cakewalk you"
               " expect it to be. So please consider the second option before choosing.'\n\n");
        printf("'The second option is to keep my axe and mount it in your home, preferably somewhere anyone who enters will be able to notice "
               "and admire my amazing craftsmanship. If you do this, for as long as the axe hangs in your dwelling, you will be blessed with great luck"
               " beyond what any man considers possible.'\n\n");
        printf("'Now I know this doesn't sound as appealing as wealth beyond measure, but who's to say being the luckiest man alive won't have"
               " its own benefits? The choice is yours, neither is wrong, but you must follow your heart and choose what truly matters to you. Best of"
               " luck traveler, I hope you make a decision you won't regret.'\n\n");
        printf("What do you choose? (1: Wealth, 2: Luck)\n");

        // Fifth choice (Divine Gift)
        scanf("%d", &finalChoice);
        // If player chooses wealth
        if (finalChoice == 1)
        {
            printf("\n'So you've chose immense wealth. An understandable choice, though quite predictable for a human. I hope this decision pleases"
                   " you, I'm sure your newfound power and influence will lend themselves to many new opportunities.'\n\n");
            printf("'Once you leave this place you will find your life is far different from what it once was, so try and make the most of it.'"
                   "\n\n'Farewell traveler, I wish you a happy life.'\n\n");
            strcpy(choices[4], "You chose Immense Wealth.");
            // If player chooses luck
        }
        else if (finalChoice == 2)
        {
            printf("\n'So you've chosen the luck, a choice worthy of someone of your nature, though very surprising considering the wealth offered "
                   "to you. You may not have the riches you might have attained, but I can assure you that your life will be fulfilling and exciting"
                   " on a scale you never imagined.'\n\n");
            printf("'Once you leave this place you will find your life is far different from what it once was, so try and make the most of it.' "
                   "\n\n'Farewell traveler, I wish you a happy life.' \n\n");
            strcpy(choices[4], "You chose God-like Luck.");
        }

        // If player chose katana
    }
    else if (weaponChoice == 2)
    {
        printf("\nYou place your katana on the altar, and immediately a bright light floods the room. You can't see a thing, but suddenly a voice "
               "begins speaking in your mind. Just like the inscription on the stone it's in a foreign language, Japanese maybe? But nonetheless"
               " you somehow understand ever word.' \n\n");
        printf("'Greetings weary traveler. It seems you were able to navigate my labyrinth, well done. I see you've chosen my katana, you "
               "have exquisite taste. I watched over many warriors in my time, all with their own weapons, but I think you'll find mine to be"
               " of the highest quality.'\n\n");
        printf("'My name is Hachiman, the God of Warriors and the divine protector of my homeland, it iss a pleasure to meet you.'\n\n");
        printf("'You've made it through my maze, not everyone could've done that. Because of your victory I'd like to reward you with a prize"
               " befitting a deity.'\n\n");
        printf("'I give you two choices, either of which I can promise you will not be disappointed by. As I mentioned previously, that sword once belonged "
               "to me. I mastered that blade, and every foe I used it against felt the results of that hard-earned skill. So your first choice is this, take the sword home with you"
               " and keep it stored somewhere safe in your dwelling. Put it somewhere befitting of its divine nature, where it can be honored by all those who see it."
               " Do this, and I will bless you with the same level of skill and mastery in whatever venture you undertake as I had in my swordsmanship. By honoring me "
               "and my legacy, I will ensure whatever journey you embark on in life will result in the same success and legacy as mine.'\n\n");
        printf("'Now that is assuredly a tempting offer, but hear out my second offer out first before you decide. For your second choice, return my sword to me and I will "
               "give it an honored position in Takamagahara. And in exchange for this, I will grant you one wish of your choosing.'\n\n");
        printf("'Though I am a god, I cannot alter the lives of the living or the dead, I do not believe Izanami would be happy with me. I also cannot change the hearts"
               " of others, for Okuninushi places great worth on the sanctity of love. Anything outside of this however is within my control, so ask away.'\n\n");
        printf("What do you choose? (1: Skill Mastery, 2: One Wish)\n");

        // Fifth choice (Divine Gift)
        scanf("%d", &finalChoice);
        // Consumes newline char so user can enter their choice
        getchar();
        // If player chooses the mastery
        if (finalChoice == 1)
        {
            printf("\n'So you've chosen the mastery, a very respectable choice. For as long as my katana hangs in your abode, any venture you attempt"
                   " will go as well as if you'd spent your entire life training for it. Do not let this get to your head though, for there is far"
                   " more to life than success. Be sure to find fulfillment in other parts of living, so you do not live a hollowed existence"
                   " as many others sadly do.'\n\n");
            printf("'Once you leave this place you will find your life is far different from what it once was, so try and make the most of it. "
                   "\n'Farewell traveler, I wish you a happy life.'\n\n");
            strcpy(choices[4], "You chose Skill Mastery.");
            // If player chooses the wish
        }
        else if (finalChoice == 2)
        {
            printf("\n'So you've chosen the one wish. A bold choice, but unsurprising given the tempting nature. I am a bit disappointed though, I was hoping my"
                   " katana would reside with someone like me once again. Alas, I will take it back and gift you your wish. What does your heart desire?' \n");
            // Char array to store wish input
            char input[200];
            // Like scanf, but for strings with spaces. Allows the player to enter a sentence for their wish
            fgets(input, sizeof(input), stdin);
            // Removes the newline character from the printing
            input[strcspn(input, "\n")] = '\0';
            printf("\n'So you have chosen '%s', I will see what I can do. You might find that your life once you return is not what it as before, I pray"
                   " you are happy with your decision. I bid you farewell traveler, may you live a fulfilling existence.'\n\n",
                   input);
            strcpy(choices[4], "You chose The Wish.");
        }
    }
}
void processRoom23() 
{
	// Initialize temporary variables
	int choice = 99, randItemIndex;
	bool loopVal = true;
	char items[5][10] = {"Sword", "Shield", "Bow", "Staff", "Dagger"};

	// Initialize random number generator by time
	srand(time(NULL));

	// Outputting the room number
	printf("You have entered room 23.\n\n");

	// Loop until loopVal is false
	while(loopVal)
	{
		// Prompt user to enter an option
		printf("Please select an option:\n"
			"(1) Examine the room.\n"
			"(2) Rummage through your belongings.\n"
			"(3) Search the room for entities.\n"
			"(4) Scavenge the room for items.\n"
			"(0) Exit the room.\n\n");

		// Receive user input
		printf("Selecting: ");
		scanf("%d", &choice);

		// Switch case based on choices from 0 - 4, inclusive
		switch(choice)
		{
			// Exit the room
			case 0:
				printf("Exiting the room...\n");
				loopVal = false;
				break;
			// Examine the room
			case 1:
				printf("The room appears to be an empty, white box with a ceiling lamp.\n\n");
				break;
			// Rummage through your belongings
			case 2:
				printf("You search through your belongings, taking out an energy potion to refill your stamina.\n\n");
				break;
			// Search the room for entities
			case 3:
				printf("A shadowy, beast figure crawls about on the ceiling.\n\n");
				break;
			// Scavenge the room for items
			case 4:
				printf("Searching for items in the room...\n");
				randItemIndex = rand() % 5;
				printf("You have found a(n): %s!\n\n", items[randItemIndex]);
				break;
			// Default case, output an error on incorrect input
			default:
				printf("Error. Something went wrong!\n");
				loopVal = false;
				break;
		}
	}
}

char* pullLever(int seed)
{
	char* result;
	if(seed % 2 == 0)
	{
		result = "nothing happens\n\n";
	}
	else
	{
		result = "a large stone moves out of the way revealing a pile of gold.\nYou fill your pockets and return to the main room.\n\n";
	}
	return result;

}


void doorChoice()
{
	    puts("you find yourself in a futuristic cubed room with one door on each side and a circular latched door below you.");
	        puts("you have no recollection as to how you've ended up in such a predicament.");
		    puts("Sudenly, a voice calls out notifying you that the experiment will start in 5...4...3...2...1");
		        puts("Spikes emerge from circular holes in the ceiling, you have to decide on one of five doors in order to escape the death trap.");
			    
}
































void ajlSpace()
{
    while (getchar() != '\n')
        ;
}

void coinFlip() {
  int call = 0;

  printf("You know how this one goes: call heads{1} or tails{2}: ");
  scanf("%d", &call);
    
  if (call == 1 || call == 2) {
    printf("The coin flips!\n");
    
  }
  else {
    printf("You call an invalid number, so your opponent calls instead!\n");
    call = (rand() % 2) + 1;
    
    if (call == 1){
      printf("Your opponent calls tails!\n");
    }
    else {
      printf("Your opponent calls heads!\n");
    }
  }

    int coin = (rand() % 2) + 1;

  if (coin == 1 && call == 1) {
    printf("It's heads! Right on the dime!\n");
  }
  else if (coin == 1 && call == 2) {
    printf("It's heads. Maybe call better shots for a change.\n");
  }
  else if (coin == 2 && call == 1) {
    printf("It's tails. Can't make cents out of it? Too bad!\n");
  }
  else if (coin == 2 && call == 2) {
    printf("It's tails! You're cool as mint!\n");
  }
  
}
void JanKenPon() {
  int rps1 = 0;
  
  printf("Roshambeau! Call Rock{1} Paper{2} or Scissors{3}: \n");
  scanf("%d", &rps1);

  while (rps1 < 1 || rps1 > 3) {
    printf("You can't call 'Laser Gun.' Pick a valid option. \n");
    scanf("%d", &rps1);
  }

  int rps2 = (rand() % 3) + 1;

  if (rps1 == 1) {
    printf("You throw out Rock, ");

    if (rps2 == 1) {
      printf("but so does your opponent! Maybe make it up with a Fist-Bump? \n");
    }
    if (rps2 == 2) {
      printf("but your opponent throws Paper! It's got you covered! \n");
    }
    if (rps2 == 3) {
      printf("and destroy your opponent's Scissors! What a smashing good time! \n");
    }
  }
  else if (rps1 == 2) {
    printf("You throw out Paper, ");

    if (rps2 == 1) {
      printf("and cover your opponent's rock! Your foe really took that one for granite! \n");
    }
    if (rps2 == 2) {
      printf("but so does your opponent! No one's write, so it's a draw! \n");
    }
    if (rps2 == 3) {
      printf("but it's cut by Scissors! How tear-able! \n");
    }
  }
  else if (rps1 == 3) {
    printf("You throw out Scissors, ");

    if (rps2 == 1) {
      printf("but it's crushed by a Rock! Not a very sharp idea. \n");
    }
    if (rps2 == 2) {
      printf("and you slash your opponent's Paper! Now you're a cut above! \n");
    }
    if (rps2 == 3) {
      printf("but so does your opponent! Lesson learned: don't run with Scissors. \n");
    }
    
  }
  
  if (rps1 == rps2) {
    printf("Try again since it's a tie? \n");
    printf("[Enter {0} to try again] \n");
    printf("[Type any other number to forfit] \n");
    scanf("%d", &rps1);

    if (rps1 == 0) {
      printf("\n");
      JanKenPon();
    }
  }
  
}
void drawStraws() {
  
  int strawSet = 0;
  int youStraw = 0;
  int foeStraw = 0;

  printf("Your traveling companion friend comes out acting as a referee, and takes out 3 straws.\n");
  printf("From left to right there are straws labled 1-3.\n");
  printf("Each straw has a unique length. Pick the longest straw to win.\n");

  printf("Pick a numbered straw from 1-3: ");
  scanf("%d", &youStraw);
  printf("\n");

  while (youStraw < 1 || youStraw > 3) {
    printf("That straw is in Nowhere Land, pick a valid straw: ");
    scanf("%d", &youStraw);
    printf("\n");
  }

  foeStraw = (rand() % 2) + 1;

  while (youStraw == foeStraw) {
    foeStraw = (rand() % 2) + 1;
  }

  printf("|You: %d| |Foe: %d|\n", youStraw, foeStraw);

  youStraw -= 1;
  foeStraw -= 1;

  printf("The lengths of the straws are now revealed: ");

  strawSet = (rand() % 6) + 1;
  
  int straws[] = {0, 0, 0};
  
  if (strawSet == 1) {
    straws[0] = 1;
    straws[1] = 2;
    straws[2] = 3;
  }
  else if (strawSet == 2) {
    straws[0] = 2;
    straws[1] = 1;
    straws[2] = 3;
  }
  else if (strawSet == 3) {
    straws[0] = 2;
    straws[1] = 3;
    straws[2] = 1;
  }
  else if (strawSet == 4) {
    straws[0] = 1;
    straws[1] = 3;
    straws[2] = 2;
  }
  else if (strawSet == 5) {
    straws[0] = 3;
    straws[1] = 1;
    straws[2] = 2;
  }
  else {
    straws[0] = 3;
    straws[1] = 2;
    straws[2] = 1;
  }
  
  printf("[%d] [%d] [%d]", straws[0], straws[1], straws[2]);
  printf("\n");

  int s1 = straws[youStraw];
  int s2 = straws[foeStraw];

  printf("|You: %d| |Foe: %d|\n", s1, s2);
  printf("\n");

  if (s1 > s2) {
    printf("You got the longer straw! What victory drink would work best for it?\n");
  }
  else {
    printf("The last straw, you've gotten. Disappointed, you are?\n");
  }
  
}
void numberGuess() {
  int targetNo = rand() % 10;
  int yourGuess = -1;
  int foeGuess = -1;
  
  printf("Your traveling companion friend comes out acting as a referee and picks a number from 0-9. Closest number wins. \n");
  printf("Write your number down, your opponent will do the same: ");
  scanf("%d", &yourGuess);

  do {
    foeGuess = rand() % 10;
  } while (foeGuess == yourGuess);

  printf("The numbers are then revealed: ");
  printf("|You = %d| |Foe = %d| |Target = %d|\n", yourGuess, foeGuess, targetNo);

  if (abs(yourGuess - targetNo) < abs(foeGuess - targetNo)) {
    printf("Your guess is ");

    if (yourGuess == targetNo) {
      printf("the same as the target! Spot on! \n");
    }
    else {
      printf("closer! Nice forsight! \n");
    }
    
  }
  else if (abs(yourGuess - targetNo) > abs(foeGuess - targetNo)) {
    printf("Your opponent");
    
    if (foeGuess == targetNo) {
      printf(" guessed the number! That's gotta hurt! \n");
    }
    else {
      printf("'s guess is closer. That sucks. \n");
    }
    
  }
  else {
    printf("Both guesses are equally close, the game restarts. \n");
    printf("\n");
    numberGuess();
  }
  
}
void blackJack() {

  int youTotal = 0;
  int foeTotal = 0;
  bool youStop = false;
  bool foeStop = false;
  
  printf("You will first be given two cards dealt in front of you. \n");
  printf("Through a series of Yes or No, the first one to 21 wins. \n");
  printf("But DO NOT go over 21, or it's a bust. \n");
  printf("Aces can be 1 or 11, and cannot appear in the starting hand.\n");
  printf("\n");

  printf("Your first two cards is are: ");

  for (int i = 0; i < 2; i++) {
    youTotal += cardPull(0);
    printf(" ");
  }

  printf("= %d\n", youTotal);
  
  printf("Your foe's first two cards is are: ");

  for (int i = 0; i < 2; i++) {
    foeTotal += cardPull(0);
    printf(" ");
  }

  printf("= %d\n", foeTotal);
  
  int hit = 0;

  while ((youTotal < 21 && foeTotal < 21)) {

    if (youStop == false) {
      printf("\nDraw another card? Type '1' for yes, or another number to stop: ");
      scanf("%d", &hit);
    }
    
    if (hit == 1) {
      printf("You draw a ");
      youTotal += cardPull(1);
      printf(" for a total of %d", youTotal);
      printf("\n");
    }
    else {
      printf("You stop at %d", youTotal);
      printf("\n");
      youStop = true;
    }
    
    if (foeTotal < 17 && foeStop == false) {
      printf("Your foe draws a ");
      foeTotal += cardPull(0);
      printf(" for a total of %d", foeTotal);
      printf("\n");
    }
    else {
      printf("Your foe stops at %d", foeTotal);
      printf("\n");
      foeStop = true;
    }

    if (youStop == true && foeStop == true) {
      break;
    }
    
  }

  printf("\n");

  if (youTotal > 21 && foeTotal > 21) {
    printf("Double bust! Shameful.\n");
  }
  else if (foeTotal > 21) {
    printf("You know who to call, your foe's been busted!\n");
  }
  else if (youTotal > 21) {
    printf("You bust! Your foe triumphs!\n");
  }
  else {
    if (abs(21 - youTotal) < abs(21 - foeTotal)) {
      printf("You win! What a great deal!\n");
    }
    else if (abs(21 - youTotal) > abs(21 - foeTotal)) {
      printf("You lose. You were not well suited for this.\n");
    }
    else {
      printf("It's a draw! A luck of the draw!\n");
    }
  }
  
}
int cardPull(int ace) {
  int cardStack1[] = {2, 3, 4, 5, 6, 7, 8, 9, 10};
  char cardStack2[] = {'J', 'K', 'Q', 'A'};
  
  int pull = 0;
  int pullIndex = 0;
  int chance = rand() % 13;

  if (chance < 9) {
    pullIndex = rand() % 9;
    printf("%d", cardStack1[pullIndex]);
    pull = cardStack1[pullIndex];
  }
  else {
    
    if (ace == 0) {
      pullIndex = rand() % 3;
      printf("%c", cardStack2[pullIndex]);
      return 10;
    }
    
    else {
      pullIndex = rand() % 4;

      if (pullIndex == 3) {
        printf("Ace, (Type 1 or 11 for the value) ");
        scanf("%d", &pull);

        if (pull == 1) {
          return 1;
        }
        else if (pull == 11) {
          return 11;
        }
        else {
          printf("(Invalid, defaulting to 1)");
          return 1;
        }
      }
      else {
        printf("%c", cardStack2[pullIndex]);
        return 10;
      }
      
    }
  }
  return pull;
}
void rollTheDice_Highest() {
  int p1 = 0;
  int p2 = 0;

  int diceOneTwelve[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
  int diceFourEight[] = {4, 5, 6, 7, 8};

  printf("\n");
  printf("This is a roll the dice game, but with a catch: \n");
  printf("You can either pick a 1-12 dice block \n");
  printf("OR you can pick a 4-8 dice block.\n");
  printf("Both players are allowed to pick the same dice block.\n");
  printf("You must roll the highest number to win. \n");
  printf("\n");
  printf("Do you pick the 1-12 dice {1} or the 4-8 dice {2}?\n");
  scanf("%d", &p1);

  p2 = (rand() % 2) + 1;

  if (p1 == 1) {
    printf("You roll the 1-12 dice block.\n");
    p1 = diceOneTwelve[rand() % 12];
    printf("The number is %d\n", p1);
  }
  else if (p1 == 2) {
    printf("You roll the 4-8 dice block.\n");
    p1 = diceFourEight[(rand() % 5)];
    printf("The number is %d\n", p1);
  }

  if (p2 == 1) {
    printf("Your foe rolls the 1-12 dice block.\n");
    do {
      p2 = diceOneTwelve[rand() % 12];
    } while(p1 == p2);
    printf("The number is %d\n", p2);
  }
  else if (p2 == 2) {
    printf("Your foe rolls 4-8 dice block.\n");
    do {
      p2 = diceFourEight[(rand() % 5)];
    } while(p1 == p2);
    printf("The number is %d\n", p2);
  }

  if (p1 > p2) {
    printf("You strike the higher number! You're on a roll! \n");
  }
  else {
    printf("The die is cast, and it gives you the losing stink-eye.\n");
  }
  
}
void rollTheDice_Race(){
  int p1 = 0;
  int p2 = 0;
  int p1Rolls = 0;
  int p2Rolls = 0;
  int p1Tally = 0;
  int p2Tally = 0;
  int targetRoll = (rand() % 20) + 31;

  int diceOneTwelve[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
  int diceFourEight[] = {4, 5, 6, 7, 8};
  
  printf("\n");
  printf("This is a roll the dice game, but with a catch: \n");
  printf("You can either pick a 1-12 dice block \n");
  printf("OR you can pick a 4-8 dice block.\n");
  printf("Both players are allowed to pick the same dice block.\n");
  printf("You must reach %d with the fewest rolls to win. \n", targetRoll);
  printf("OR if both players go over, the closest total to %d wins. \n", targetRoll);
  printf("\n");
  printf("Do you pick the 1-12 dice {1} or the 4-8 dice {2}?\n");
  scanf("%d", &p1);

  p2 = (rand() % 2) + 1;

  if (p1 == 1) {
    printf("You begin to roll the 1-12 dice block.\n");
    printf("The numbers are: ");
    while (p1Tally < targetRoll) {
      p1 = diceOneTwelve[rand() % 12];
      p1Rolls += 1;
      p1Tally += p1;
      printf(" %d ", p1);
    } 
  }
  else if (p1 == 2) {
    printf("You begin to roll the 4-8 dice block.\n");
    printf("The numbers are: ");
    while (p1Tally < targetRoll) {
      p1 = diceFourEight[(rand() % 5)];
      p1Rolls += 1;
      p1Tally += p1;
      printf(" %d ", p1);
    } 
  }
  
  printf("= %d (%d Rolls)", p1Tally, p1Rolls);
  printf("\n");

  if (p2 == 1) {
    printf("Your foe begins to roll the 1-12 dice block.\n");
    printf("The numbers are: ");
    while (p2Tally < targetRoll) {
      p2 = diceOneTwelve[rand() % 12];
      p2Rolls += 1;
      p2Tally += p2;
      printf(" %d ", p2);
    }  
  }
  else if (p2 == 2) {
    printf("Your foe begins to roll the 4-8 dice block.\n");
    printf("The numbers are:");
    while (p2Tally < targetRoll) {
      p2 = diceFourEight[(rand() % 5)];
      p2Rolls += 1;
      p2Tally += p2;
      printf(" %d ", p2);
    }  
  }

  printf("= %d (%d Rolls)", p2Tally, p2Rolls);
  printf("\n");

  if (p1Rolls < p2Rolls) {
    printf("You rolled less times than your opponent! What a feat!\n");
  }
  else if (p1Rolls > p2Rolls) {
    printf("You have been out-cast by your opponent's dice. What a pity!\n");
  }
  else {
    printf("The amount of rolls are the same, closest tally to the target wins...\n");
    if (abs(p1Tally - targetRoll) > abs(p2Tally - targetRoll)) {
      printf("You lose the tie-breaker!\n");
    }
    else if (abs(p1Tally - targetRoll) < abs(p2Tally - targetRoll)) {
      printf("You win the tie-breaker!\n");
    }
    else {
      printf("Both of you win the tie breaker! With odds like that, there's no need for a redo!\n");
    }
    
  }
  
}

bool trap_d10()
{
    // Rolls the array for a trap
    int roll = rand() % 10 + 1;

    char *traps[] =
            {
                    "A series of hidden blades swing down from the ceiling when you crossed a tripwire.",
                    "A tripwire triggers a barrage of darts shooting from the walls.",
                    "A weighted net drops from above, aiming to entangle and immobilize its victims.",
                    "A pressure plates on the floor activate a volley of arrows shooting from hidden wall compartments.",
                    "A disguised pit trap opens beneath you, with a false bottom concealing a second, deeper pit.",
                    "A mechanical claw trap grabs at you, attempting to pull you into a spiked pit.",
                    "A floor tile that, when stepped on, triggers a scything blade to sweep across the corridor.",
                    "A heavy stone block drops from the ceiling when you stepped on a floor tile.",
                    "An illusory floor hides a portal to a pocket dimension filled with toxic gas.",
                    "A spring-loaded trapdoor flips you into a chute lined with razor-sharp edges.",
                    "A deceptive doorway rigged with a guillotine blade that drops when the door is opened."
            };

    // Prints the rolled trap
    printf("%s \n", traps[roll]);

    // Generates a boolean for weather or not the player fell in a trap
    bool d2 = rand() % 2;
    return d2;
}

   int selectRandom(int lower, int upper, int count) {
            lower = 1;
            upper = 10;
            count = 10;


int randomNumRoom41()
{
 srand(time(NULL));
 int randomNum = rand() % 5 + 1;
 return randomNum;
}








            for (int i = 0; i < count; i++) {
                int num = (rand() % (upper - lower)) + lower;
                return ("%d", num);
            }
        }



