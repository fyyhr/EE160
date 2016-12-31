/** Lab 1 Presentation
 * Author: Conner Higashino
 * EE160-002 Spring 2017
 */

/* These are your called libraries. Generally you'll be calling stdio.h
 * You'll learn about stdlib.h and string.h later
 * This program could be written only calling stdio.h, but I always call these three.
 * If you don't know what a library does, then do not call it. I don't want you to call every
 * single library that exists but only use functions in stdio.h
 * If you need an additional library, the compiler will usually alert you that some functions
 * have not been declared.
 * For more information about C libraries, visit http://www.cplusplus.com/reference/clibrary/
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* This is a function prototype. You'll learn about these later */
void waitForInput();

/* You don't have to declare main() to be any type of function. If I simply left it as 'main() {',
 *  the function would work perfectly fine. You'll learn about function types later.
 */
void main () {
  /*This is a "system" call. Basically, it tells your shell to do something. In this case, it's
   * passing the clear command to clear the shell. For this class, don't worry about system calls.
   * Everything else in this program, you should understand by the end of the semester, ideally 
   * before then. If you have any questions, please ask!
   */
  system("clear");

  /* From this point on, the comments will be limited to describing what blocks of code do in
   * general. You will also be expected to do this. This procedure of documenting code is hugely
   * important in your career. And yes, documentation will affect your grade.
   */

  //print the computer frame
  printf("             ____________________________________________________\n");
  printf("            /                                                    \\\n");
  printf("           |    _____________________________________________     |\n");
  printf("           |   |                                             |    |\n");
  printf("           |   |              Welcome to EE160               |    |\n");
  printf("           |   |                 Section 002                 |    |\n");
  printf("           |   |                                             |    |\n");
  printf("           |   |                                             |    |\n");
  printf("           |   |                                             |    |\n");
  printf("           |   |                 Spring 2017                 |    |\n");
  printf("           |   |                                             |    |\n");
  printf("           |   |                                             |    |\n");
  printf("           |   |                                             |    |\n");
  printf("           |   |                                             |    |\n");
  printf("           |   |                                             |    |\n");
  printf("           |   |_____________________________________________|    |\n");
  printf("           |                                                      |\n");
  printf("            \\_____________________________________________________/\n");
  printf("                   \\_______________________________________/\n");
  printf("                _______________________________________________\n");
  printf("             _-'    .-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.  --- `-_\n");
  printf("          _-'.-.-. .---.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.--.  .-.-.`-\n");
  printf("       _-'.-.-.-. .---.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-`__`. .-.-.-.`-_\n");
  printf("    _-'.-.-.-.-. .-----.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-----. .-.-.-.-.`-_\n");
  printf(" _-'.-.-.-.-.-. .---.-. .-----------------------------. .-.---. .---.-.-.-.`-_\n");
  printf(":-----------------------------------------------------------------------------:\n");
  printf("`---._.-----------------------------------------------------------------._.---'");
  waitForInput();
  //move the cursor to within the computer "screen" and overwrite the text
  printf("\033[23A\033[30C  TA Information:\n");
  printf("\033[17C                               \n");
  printf("\033[28CName: Conner Higashino\n");
  printf("\033[25CMajor: Computer Engineering\n");
  printf("\033[30CGrade level: Senior\n");
  printf("\033[27COther things: HP: 20/20\n");
  printf("\033[34CAttack: 6\n");
  printf("\033[33CDefense: 3\n");
  printf("\033[33CAgility: 12\n");
  printf("\033[34CMagic: 99\n");
  printf("\033[32CIEEE Webmaster\n");
  //flush buffer to make sure everything is printed to stdout
  fflush(stdout);
  waitForInput();
  printf("\033[12A\033[30C                 \n");
  printf("\033[21C                              \n");
  printf("\033[28C                              \n");
  printf("\033[25C                           \n");
  printf("\033[30C                            \n");
  printf("\033[21CLab 1 - Setting up your environment\n");
  printf("\033[34C                        \n");
  printf("\033[33C                        \n");
  printf("\033[33C                        \n");
  printf("\033[34C                        \n");
  printf("\033[32C                        ");
  fflush(stdout);
  waitForInput();
  printf("\033[6A\033[19C          BASh looks like.  .  .        \n");
  fflush(stdout);
  waitForInput();
  printf("\033[2A\033[20C                                 ");
  printf("\033[6A\033[37DBash-4.3$ ");
  fflush(stdout);
  waitForInput();
  printf("\033[A\r\033[16C                                             \n");
  printf("\033[5B\033[27CC-shell looks like.  .  .\n");
  fflush(stdout);
  waitForInput();
  printf("\033[2A\033[27C                             ");
  printf("\033[6A\033[40D[username@wiliki ~]$");
  fflush(stdout);
  waitForInput();
  printf("\033[A\r\033[16C                                             \n");
  printf("\033[A\r\033[16CYou can use whichever shell you find\n");
  printf("\033[16Ccomfortable, but if you don't have a \n");
  printf("\033[16Cpreference or don't know, you should use \n");
  printf("\033[16CC-Shell\n");
  //go to bottom of keyboard to end
  printf("\033[20B");
  fflush(stdout);
}

/** Wait for the ENTER key to be pressed, ignores all characters
 *
 */
void waitForInput() {
  int ch;
  //loop until there are no more characters, then proceed
  while((ch = getchar()) != '\n');
}
