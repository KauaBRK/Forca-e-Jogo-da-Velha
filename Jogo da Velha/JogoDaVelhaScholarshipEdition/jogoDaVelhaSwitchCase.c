#include<stdio.h>
#include<stdlib.h>

int jogoDaVelhaSwitchCase(char jogoDaVelha[3][3], int vezX, int par, int * jogadas) {
  	int escolhaDeLinha;
  	
  		loopJogoDaVelhaTela(jogoDaVelha);
  		printf("\n\nDigite qual lugar vai jogar: ");
  		scanf("%d", & escolhaDeLinha);
  		fflush(stdin);
  		switch (escolhaDeLinha) {
  			case 1:
    			if (jogoDaVelha[0][0] == '1' && jogoDaVelha[0][0] != '\n') {
      				fflush(stdin);
      				if (vezX == 1) {
        				jogoDaVelha[0][0] = 'X';
        				vezX = 0;
        				*jogadas+=1;
        				break;
      				}
      				if (vezX == 0) {
        				jogoDaVelha[0][0] = '0';
        				vezX = 1;
        				*jogadas+=1;
        				break;
      				}
    			}
				else {
      				printf("\nEste local ja foi jogado.\n");
      				system("pause");
				    break;
    			}
    			
  			case 2:
    			if (jogoDaVelha[0][1] == '2') {
      				fflush(stdin);
      				if (vezX == 1) {
        				jogoDaVelha[0][1] = 'X';
        				vezX = 0;
        				*jogadas+=1;
        				break;
      				}
      				if (vezX == 0) {
        				jogoDaVelha[0][1] = '0';
        				vezX = 1;
        				*jogadas+=1;
        				break;
      				}
    			}
				else {
      				printf("\nEste local ja foi jogado.\n");
      				system("pause");
      				break;
    			}
    			
  			case 3:
    			if (jogoDaVelha[0][2] == '3') {
      				fflush(stdin);
      				if (vezX == 1) {
        				jogoDaVelha[0][2] = 'X';
        				vezX = 0;
        				*jogadas+=1;
        				break;
      				}
      				if (vezX == 0) {
        				jogoDaVelha[0][2] = '0';
        				vezX = 1;
        				*jogadas+=1;
        				break;
      				}
    			}
				else {
      				printf("\nEste local ja foi jogado.\n");
      				system("pause");
      				break;
    			}
    			
  			case 4:
    			if (jogoDaVelha[1][0] == '4') {
      				fflush(stdin);
      				if (vezX == 1) {
        				jogoDaVelha[1][0] = 'X';
        				vezX = 0;
        				*jogadas+=1;
        				break;
      				}
      				if (vezX == 0) {
        			jogoDaVelha[1][0] = '0';
        			vezX = 1;
        			*jogadas+=1;
        				break;
      				}
    			}
				else {
      				printf("\nEste local ja foi jogado.\n");
      				system("pause");
      				break;
    			}
    			
  			case 5:
    			if (jogoDaVelha[1][1] == '5') {
      				fflush(stdin);
      				if (vezX == 1) {
        			jogoDaVelha[1][1] = 'X';
        			vezX = 0;
        			*jogadas+=1;
        				break;
      				}
      				if (vezX == 0) {
        			jogoDaVelha[1][1] = '0';
        			vezX = 1;
        			*jogadas+=1;
        				break;
      				}
    			}
				else {
      				printf("\nEste local ja foi jogado.\n");
      				system("pause");
      				break;
    			}
    			
  			case 6:
    			if (jogoDaVelha[1][2] == '6') {
      				fflush(stdin);
      				if (vezX == 1) {
        				jogoDaVelha[1][2] = 'X';
        				vezX = 0;
        				*jogadas+=1;
        				break;
      				}
      				if (vezX == 0) {
        				jogoDaVelha[1][2] = '0';
        				vezX = 1;
        				*jogadas+=1;
        				break;
      				}
    			}
				else {
      				printf("\nEste local ja foi jogado.\n");
      				system("pause");
      				break;
    			}
    			
  			case 7:
    			if (jogoDaVelha[2][0] == '7') {
      				fflush(stdin);
      				if (vezX == 1) {
        				jogoDaVelha[2][0] = 'X';
        				vezX = 0;
        				*jogadas+=1;
        				break;
      				}
      				if (vezX == 0) {
        				jogoDaVelha[2][0] = '0';
        				vezX = 1;
        				*jogadas+=1;
        				break;
      				}
    			}
				else {
      				printf("\nEste local ja foi jogado.\n");
      				system("pause");
      				break;
    			}
    			
  			case 8:
    			if (jogoDaVelha[2][1] == '8') {	
      				fflush(stdin);
      				if (vezX == 1) {
        				jogoDaVelha[2][1] = 'X';
        				vezX = 0;
        				*jogadas+=1;
        				break;
      				}
      				if (vezX == 0) {
        				jogoDaVelha[2][1] = '0';
        				vezX = 1;
        				*jogadas+=1;
        				break;
      				}
    			}
				else {
      				printf("\nEste local ja foi jogado.\n");
      				system("pause");
      				break;
    			}
    			
  			case 9:
    			if (jogoDaVelha[2][2] == '9') {
      				fflush(stdin);
      				if (vezX == 1) {
        				jogoDaVelha[2][2] = 'X';
        				vezX = 0;
        				*jogadas+=1;
        				break;
      				}
      				if (vezX == 0) {
        				jogoDaVelha[2][2] = '0';
        				vezX = 1;
        				*jogadas+=1;
        				break;
      				}
    			}
				else {
      				printf("\nEste local ja foi jogado.\n");
      				system("pause");
      				break;
    			}
    		case 777:
    			puts(":............................................................................................................................. .......................\n:.....................................................................................................    ....   .....................................\n:.............................................................................................#*...-++=-:-===--::...... .................   ..........\n............................................................................................::+%%##%%%%%%#+--::.:.  ..  ..........  ..................\n........................................................................................-+#%%%%%%%%%%%%%%%%%*=:+=:.                      .............\n.......................................................................................-%@%%%%%%%%%%%%%@%%%%%%%%+-..                         . .......\n......................................................................................-%%%%%%@@%%####***#%%%%%%%%#*:.                          .......\n.....................................................................................=%%%%@%%%%%**++++++++*#%%%%%%%%+.                            ....\n....................................................................................+%%%%%%%%%#**+++======+++*%%%%%%%*:             ...             ..\n...............................:#####*-...:+#######*.-*######:+######:=*######*....:%%%%%%%%%%**++==---=====++**%%%%%%%-           :-:-.            ..\n...............................-%@%*%@%:..#%%*++*%%#=%%#++++*%%%+++++#%%*+++%%# ...+%%%%%%%%%**+++=-----====+++***###%%+.         .==+-               \n...............................-%@%*#%%*:.%%%+++*%%#+%%*++-.:%%#=+=..%%%+==+%%* ..:*%%%%%%%%#**+++===========-:...    :+*.        -=+*:               \n...............................-%@%#%%%%%=%%%%%%%%%#=%%%%%= :%%%%%# .%%%%###%%* ..-#%##%%%%%*=-------------..::-+###*:  -*.      .-=++.               \n...............................-%%+ ..=%%*%%#...:%%#=%%= . .:%%*    .#%%. ..#%* ..:#-.:+%#-.  ::..:::...   :**+#%%%%%#.  *#.     :-=+=                \n...............................-%%+ ..=%%*%%# ..:%%#=%%- ...:%%+ ....#%#....#%*  ..+=--=+   +#%#**=*#%- -=.-++#%%%@@@%. ::%#.   .===*=                \n...............................-%%+ ..=%%*%%# ..:%%#=%%- ...:%%+ ....#%#....##* ...-++==.  -%@%#*+#%%%*.++=::+#%%%@@*. -#*+@+   .--=+=.               \n...............................-%%+ ..=%%*%%# ..:%%#=%%- ...:%%+ ....#%#....##* ...:+=-=-  .%@@%%%%%@#:=++++---+==-:-+#***:%%-. :===+=.               \n...............................-%%+ ..=%%*%%* ..:%%#=%%- ...:%%+ ....#%#....##* ...-====%+:  -*#%%#+--*++==+-:-==++++***+=-+#*. :===++.               \n...............................-%%+ ..=%%*%%* ..:%%#=%%- ...:#%+ ....###....##* ...-++==*#%#*=---==+***++=====*+====++**++=====--====+.               \n...............................:##= ..-##+**+ ..:**+=**- ...:**= ....***....**+ ...:++==+*##%#**+===+**##+==+*%#+==++=++++*+====+++==+:               \n.......=*****+=--+******-******+=:.+++++=:...=+++++++=.=++-++++=-.....:=++++++=.....++=-=####*+++==++*##*--=***##*+==+===========+++=+-               \n.......*@@%##%%%%%%##%%%-%%%###%%%-#%%##%%=..+%%#****+ *%#=#%####*...+###***##* ....++===*#***+++**+**#+=+=*****###++===========++*++*-               \n.......*@%-...#%%-...*%%-%%# ..-%%+#%%++%%#..+%%=--: ..*%#=###=*##=..###-::-##* ....++====*===+=+**###+=++*#*+==*@%#++======++++++*++*=               \n.......+%%-...#%%-...*%%-%%* ..:%%+#%%%%%%%#=+%%%%#= ..*##=########*:#########* ....+*+====++=+=+=++++=++**+++******#++=====++++++****+.              \n.......+%%-...#%%-...*%%-%%* ..:%%+#%%:.::#%#+%%=... ..*##=##+..:=##=###:..:##* ....+*++++++++======++==+*++++++==**#*=++======++++*+**..             \n.......+%%-...*%%:...*%%-%%* ..:%%+#%%....#%#+%#:......*##=##+ ..-##=###....##* ....-**+****++++++++++++++===+++=+###%+=++=====+=++*+**:              \n.......+%%-...*%%:...*%%-%%* ..:%%+#%%....*%#+##:......*##=##+ ..-##=###....##* ....-********+++++++*++*#%*+=++*#####%#+=++++==++++++**=              \n.......+%%-...*%%:...*%%-%%* ..:%%+*%#....*%#+##:......*##=##+ ..-##=###....##* ....:###**+**++++++*+=++##%%%%%%%%#####*++++===++++++***..            \n.......+%%-...*%%:...*%%-%%* ..:%%+*%#....*##+##:......*##=##+ ..-##=###....##* ....:*#*+++*+===+++*++++#####%%%%%%####*=+++=-=+=+++****=.            \n.......+%%-...*%%:...*%%-%%#===+%%=*%#....*##=##+===+**###=##+ ..-##=###....##*.....:*##**+*++==++++++++%########%%%%%##-++++===+++******.....        \n.......+%%-...*%%:...*%#.-*#%%%##=.*##....*##.=######*:*##=##+ ..-##=###....##*.....:+##****+==+++=++++#@%%%%%%%%%%%%%###**++=====++*****-......      \n...................................... ...... ....... ........ ......... ...........:=******+++=+++==++%%%@@@@%%%%%%%%%%#*+#*+==-=+****#*=..........  \n..................................................................................:::+****#+++=======+*%%%%%%%%%%%%%%%%%##*%#++===+**#**#*............\n...............................................................................:-=***##****+++++==-===*%%%%%%%@@%%%%%%%%#**%#*++++***#**##:...........\n.............................................................................-++**####%#***+++++=--==+#%%%%%%%%%%%%###***#%%%*++++*#######+------::...\n.........................................................................:-++***####%%%##**+*+++=--==+****#+**####*###%%##%%%#++=+**#######*#######*+=\n.....................................................................-=+*###########%%%###******+===+*#%%%%%%%%%%%%%%%%%##%##%*+++**#######*##########\n..................................................................:=*########%#######%%###****##*++***#%%%%%%%%%%%%%%%%#*%%%%%###%%%%%#####*##########\n................................................................=*############%#######%%#*****##**+*+*#%%%%%%%%%%%%%%%%##%%%%%%%%%%%#######*##%##%#%##\n..............................................................:*#######%%######%%#########****#****+++###%%%%%%%%%%%%%%*#%%%%%%%%%%%%######*****#####%\n..............................................................*##########%%%#%##%%%######################%%%%%%%%%%%%%#*%%%%%%%%%############*######%#\n.............................................................-##############%%###%%###%##################%%%%%%%%%%%%%**%%%##%################%%######\n.............................................................=#######%%#######%#####*%%###################%%%%%%%%%%%%**%%%##########***#####%%%######\n.............................................................-##########%%%%###%%%%%#%####################*%%%%%%%%%%#*+*####%#############%%%%#######\n.............................................................-**###########%%%%%%%%%%##*#################**####%%%%%%#==##-*###############%%%########\n.............................................................:**###################%#**###################**+###%%%%#=--#%+:###############%%%#######*\n..............................................................+##########################*****######*#*#*###*+*#%%%#=--.-#%#*#############%%%#######++\n..............................................................-#############################################:+*+#%%+.-=:.+%%#%###########%%%%########*\n...............................................................+#####################%%#####################:=*=*##--++*+.+%%%%##########%%%########+*\n...............................................................:*####################%%%####################+-**+++++++#+-%%%%%%########%%%%########+*\n...............................................................:=#######*****########%%%%%###################:=++*+++#%*:*%%%%%%%######%%%%#########=#\n...............................................................::+#%#+---=::-+#######%%%%%%##################--+%%*-:*#=*%%%%%%%%%#####%%%%%#######%##\n................................................................::*#%------==.-#####%%%%%%%%%################=--%%%*.+**%%%%%%%%%%%####%%%%%######%%#+\n................................................................::-###++++*#*+:-####%%####%%%%###############+.:#%#+-#%%%%%%%%%%%%%%#%%%%%%%######%#+-\n................................................................:::=###**-.---::*######%###%%%%################=*###%%%%%%%%%%%%%%%%%%%%%%%#######%#::\n\n");
    			system("pause");
    			system("cls");
				break;
			case 0:
				puts("                                                                                                                                                      \n\t                                                                                                                                                     \n\t                                                                                                                                                     \n\t                                                                                                                                                     \n\t                                                                                                                                                     \n\t                                                                     :=*#%%#*=:                                                                      \n\t                                                                   :*%%%%%%%%%%#:                                                                    \n\t                                                                  :+=%%*=::-*%%%%-                                                                   \n\t                                                                  #=%%+      =#*%%                                                                   \n\t                                                                  #=%%=      -%=%%                                                                   \n\t                                                                  -*%%%=:  .=%*#%=                                                                   \n\t                                 .+%*.                             -#%%%%%%%%%%#-                             .*#=:                                  \n\t                               -#%%%%#:                            :-#%%%%%%%%#-.                            -*=%%%*:                                \n\t                             =#%%%%%%%%+                      :=*%%%%%%%%%%%%%%%%%#*=:                     .+==%%%%%%#-                              \n\t                          .+%%%%%%%%%%%%%-                   ++.=++++++++++++++++++++%+                   =+-#%%%%%%%%%%=                            \n\t                         =%%%%%%%%%%%%%%%%*.                 ***%%%%%%%%%%%%%%%%%%%%%%+                 .*-+%%%%%%%%%%%%%%-                          \n\t                       .##*%%%%%%%%%%%%%%%%#-                +#**********************%=                =+-#%%%%%%%%%%%%%%%%#                         \n\t                        .=+=*%%%%%%%%%%%%%%%%*.               .=#%%%%%%%%%%%%%%%%%%*=.               :+-*%%%%%%%%%%%%%%%%#=.                         \n\t                           =+-*%%%%%%*%%%%%%%%%-                 .-+*%++@=+@=*%*=:                  =*-%%%%%%%#*%%%%%%%%=                            \n\t                            .=+=*%%%%%==#%%%%%%%+                 .:-+::@:-@.=+: ..                +%*%%%%%%#=*%%%%%%%=                              \n\t                               -+-+%%%%%=-*%%%%%%.           ---+*-:-*::@:-@.=+**=--=+-:           %%%%%%%*-+%%%%%%#-                                \n\t                                 -+-+%%%%#-:==+%%:      .==*#:-==----+##@#%@#%+=-==-++:.-==       .%%%++=.=%%%%%%#-                                  \n\t                                   -+*#%%%%:  +%%:   .:+-:==-=+*#@*%@=+@@%:-*@@%=*@%#*++-**--=:   .%%%-  =%%%%%#-                                    \n\t                                     :+#%%%#%%==#= -=:++--+##%#.#%:.@=.@@.++ %@=-:**.@@%%*+=-=*=-.-%*-+%#*%%#+:                                      \n\t                                         ..:-=*%+%*+-=:=%%=.=@@- +*.=* %-=##::% %+:.+@:.+:*@#-==.-%#++=::.                                           \n\t                                               :*.+-:*%*@*%- #@@:#@%%%##*****#%%@%==@-#=:*#@@@%+-+++=                                                \n\t                                             .=%-=-*%*%+:+@@*=@@#+-.             .-+#%+=-#@@@@++@+==:+:                                              \n\t                                            -=.#.=@@:.=-- -@@*:                       -#@@@@= :#:#@--#*-                                             \n\t                                           :#:+:#%-+%*:=@%%=           .:-==+==-        .#@#+%+-.*@@+==.+.                                           \n\t                                          --+=:@%*%+::*%@#        .-+*%++%%#***%@=  .=*%%#*+@@#+===-##:+=#                                           \n\t                                          #.*.@*-=::=#@*@@%-  .-**=--+###%==++=-:+*@%*-. :+ .#@%-+-.#@%-+.+                                          \n\t                                        .**+.%%:::=%#@+.@@@#**#%.:***++-%%%*+===+#-.:=*%@@@   *@# =@@#%*-=:+                                         \n\t                                        + =:#@%***+=@-  .-@#*+*+.*#@@@= ###-=====**@@#+-:.::   *@*::-=#@--**:                                        \n\t                                        *:*:@=-+=.*@*     =*-*%%:  :%. =%=#%%%#%@%+:.-*%@@#-    %*:@@%*#%.+ *                                        \n\t                                     .:-*%-*@.+%%==@.     . .:%%#*+==-=-:.::---:=-*%%*=:..:=    -@+--=+#@-=**:.                                      \n\t                                    +=::::-%@@+=-*@#       -*+:#=+=..-+#%@@@%%#%@#=..-*#@@@%:    %#-----@#-::--+-                                    \n\t                                    -++++++%#.#@-=@*        %@:-.-+%@@%*=:      =:+%@@%+-. .=    ##.@@@@@@******:                                    \n\t                                    :******@+:@@%:@*        :@%.#@#+:.:=+*%@@@@%@@%+-.:=*%@@%=   #%-#%%@@%++++++:                                    \n\t                                    ==-----%@+--=#@#         +@#:.-+%@@#*=-:::--+-.=*@@%+-:-=*=  %%===--@#:::::+=                                    \n\t                                       +=%.*@@@@@@@@.        .=+:#@%+:.-+#@@%#***%@@*-.:+%@@@%+::@=:#=-%@==*#:..                                     \n\t                                       :-:*-@@@@@%*@+         . .:::+%@%*-:.-=+++%-.=*@@@#+-.:=#@%.*:*-+@.+=+                                        \n\t                          .             +=% #@@*@#-=@-         +*++%*-.-+#@@@#+=+@%@@%+-.:+#@#+%@@*+%++@=---=            .                           \n\t                         :%-            :=:+.@*.@@@:*@-         %@=:-#@#=:=:.-*@@@%+: -*@@#-  +@=:+%@=@#:***            =#                           \n\t                         =%%*.           ==-=:@=-::=%#@=        =@%%#=.   *%@@%*-..=#@@*-    *@=#%+-.#@-+ *           :#%%.                          \n\t                         *%%#%+.          -*+--@@@@@@*#%%-       %@*      =+:..-*%@#+:     =@@%:.*@*#%.*:+:         :*%#%%=                          \n\t                         #%%+#%%+:         +..+:%@@@@:.=-@#:     .-=.      :=**+=:       =%@=. -+.#@#:*:%.        :*%%#+%%+                          \n\t                         #%%%.*%%%*-.       -*#=.*@%:%.*=*@@%=.   . .                 :+%@@@@@@#**@+:* +.      .=#%%%*:%%%+                          \n\t                         *%%%= :==+*#*=:      +.-=:##=-*@@@@@%@@*=:##+           .:+#@@@#%%@@@@@@*=+=#=     :+##*+==: +%%%=                          \n\t                         =%%%=  .*%%#+-:       =++*:-%@@@@@- .#@@@@@@@#*+++++*#%@#+*@@@#: .%@@@*:=-.+       :=*#%%#:  =%%%.                          \n\t                         :%%%-*+ *%%+            +-:==-*@@%#++@@@@+.:@*=+=%@*:=@-.%:.@@@%*@@%+==-*+-           +%%#.*#-%%#                           \n\t                          *%#%#%*.*%%=         .=%#++*+-==+%@@@@@@% #@+-*:-@@= @* ++.%@@@#+=-*=-+#%=          +%%* *%#%#%=                           \n\t                          .%%+ +%#.*%%=       =%%+-: :=-:=*--=*%@@%*@@+==:%@@#:%@@#%@#++=+=.=+: :==%%-       +%%+.*%- *%#                            \n\t                           -=   =%#.=%%*.   =#%+-:      .==-:-++-=+=+*%*@##@###++++===--#=--.     -=+%#-   .*%%=:#%-   *:                            \n\t                                 .#%=:#%%--#%+-:            .:==---*#+=.@-:@::%+-:-*=--:            -=+%#-=%%#:=%*.                                  \n\t                                   *%*.=%%%#--                      .+=.@-:@::*--:                    -=%%%%+:#%+                                    \n\t                                    -%%=:*%%#=                       .+=@+=@++-                      .=%%%*:=%#-                                     \n\t                                    :#%%#=:+%%%*-.                    :%%%%%#.                    .=#%%%+-+%%%*:                                     \n\t                                  .*%#==*%%=.=%%%%#+:                =%%%%%%%%-               .-+#%%%%+:+%%*==%%+.                                   \n\t                                .+%#+-:  :*%%+--*%%%%%#*=-:.      :+%%%%%%%%%%%#=:      .:-+*#%%%%%*--*%%*:  :==#%+.                                 \n\t                              .+%%+-:      .+%%#+--+#%%%%%%%%%###%%%%%%%%:%%%%%%%%%###%%%%%%%%%*+-=*%%#=.      :=+%%+.                               \n\t                              *%+=-           -#%%%*-:-*%%%%%%%%%%%%%%%#: %%%%%%%%%%%%%%%%%*=--+#%%%*:           ==#%*                               \n\t                               -:               .-*%%%#*=--=+*#%%%%%%%+   %%%%%%%%%#*+=====+#%%%%*-.               --                                \n\t                                                    :=*#%%%%#*+===---     %%%======++*#%%%%%#+-.                                                     \n\t                                                        .-=*%%%%%%%%%%=   %%%%%%%%%%%%%#*=:                                                          \n\t                                                              :-=*%%%%%#- %%%%%%%%*=-.                                                               \n\t                                                                   :+%%%%=%%%%%=.                                                                    \n\t                                                                      +%%%%%%-                                                                       \n\t                                                                       :*%%*.                                                                        \n\t                                                                         =-                                                                          \n\n\t ____   _    _     __  __ _____ ___ ____      _    ____  \n\t|  _ \\ / \\  | |   |  \\/  | ____|_ _|  _ \\    / \\  / ___| \n\t| |_) / _ \\ | |   | |\\/| |  _|  | || |_) |  / _ \\ \\___ \\ \n\t|  __/ ___ \\| |___| |  | | |___ | ||  _ <  / ___ \\ ___) |\n\t|_| /_/   \\_\\_____|_|  |_|_____|___|_| \\_\\/_/   \\_\\____/ \n");
				system("pause");
				system("cls");
				break;
			case 11:
				puts("\n\t++===-------:::.         .......                  .:----===+++++=+===+++++++++++++++++*#%%%%%%%%%%%%%%%#*******+++++++++++++++==========+++++++*******\n\t+===-----:::::.          .....                 .. .:----===+++===+===+++++++++++++++++#%%%%%%%%%%%%%%%%%#******+++++++++++++++++=======++++++++*******\n\t==------::::::           ...          ..      .... .----===+=====+==+++++++++++++++++*#%%%%%%%########%%#******+++++++++++++++++=======+++++++********\n\t----::::::.....          ...           ..    ....  .-:---=++=====+==+++++++++++++++++*#%%%#%%%#########%#**************************+==++++++++********\n\t::::::....    .          ...           .::.  .......::---=+=========+++++++++++++++++*#%%%%%%%#########%#***########******++++++++#+==++++++++********\n\t......        ..         ...            .::.. .......:::--====--====++++++++++++++++++#%%%%%%%###%%%##%##***#************+=======+*+==++++++++********\n\t              ..         ...             .:::...:::::::::--=-----====+++++++++++++++++*#%%%%%%%%%%%%%%##****#**++++++++*++=======+#+==++++++++********\n\t               .         ...              .::::.:::::::::--=----=--==++++++++++++++++++*#%%%%%%%%%%%%##*****##****++++++++=======**===+++++++*********\n\t               .         ...               :::--:....::::--=----=---=++++++++++++++++++++*#%%%%%%%%###******##****++++++++++++++*#*===+++++++*********\n\t               ..        ...               .::---:.....::--==--+=---=+++++++++++++++++++++***#####*********#%##****+++++********##+===+++++***********\n\t                .        ...    .           .:----:....:::--===+=---=+++++++++++++++++++++++***************#%%#####***+***########+==++++++***********\n\t                          ..   ...           .:----:...:::--=+=+=---=++++++++++++++++++++++****************#%%%%%#################+==+++++************\n\t++++++++++++++++++++++++++++++++****+.        .:-----:.:::--===+----=++++++++++++++++++++++****************#%%%####****##########*===+++++************\n\t=-------=============--==--------=*%%=         :-------:::-=++==--:-+++++++++++++++++++++++****************#%%%########*#*#######+===+++++************\n\t---------------------------------+%**#:        .:---==-:::-=====-::-+++++++++++++++++++++******************######################+==++++**************\n\t********************************#%*==#*.        .------:::-=-::-:::-+++++++++++++++++++++*********************++++++++++*********===+++***************\n\t##%%######%%###################%%@*==*%=         .----:..--=---::::-++++++++++++++++++++**************************+++++++++++=======++****************\n\t##############******************#%%+==*#.        .:--:...------.:::-+++++++++++++*****###*********####***######*********++++========+*****************\n\t##############################**##@#==+#-         .::. .:-----:.:::-++++++++*****++=-------::::::--------=----::::::::--==+**++====++*#***+***********\n\t%%%%%%%%%%%%%@@%%%%%%%%%%%%%%%%%##%@*==**:         .:   :------::::-++++++***+=---:::::::::::::-::::::::::::::::::::::::::::-=+***+**#####************\n\t=============================*@@##%@#===#=             .::----=-:::-+++**+=--::::::::::::::::::::::::::::::::::::::::::::::::::--=+**###%###**********\n\t-----------------------------*@@%##%%+==**:            ..:---===--:=***=--:::::::::::::::::::::::::::::::::::::::::::::::::::::::::--=+#####**********\n\t----------------------------=%%#@%*#%#==+#+              .--:-====**+--::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::-=+************\n\t----------------------------+@*+%@#*%%*==*#.             .:--=+***=--:-:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::---+*#********\n\t----------------------------#%+=*@#*#@%+==#=             .:-=**+=----:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::-::--+##*****+\n\t---------------------------=%#===#%#*%@*==+#-            .-**+-:::---::::::::::::::::::--:::::::::::::::::::::::::::::::::::::::::::::::---::-=*##*+**\n\t---------------------------+%*===*@%##@%+=+#+.          .=**=:::::---:::::::::::::::::-==-::::::::::::::::::::::::::::::::::::::::::::::-==--:--=*##**\n\t====================-======#%+====%@###@*==*#-         .+*=-:::::::-::::::::::::::::::-==-:::::::::::::::::::::::::::::::::::::::::::::::-=+=-:::-*###\n\t%%%%%%%%%%%%%%%%%%%%%%%%%%%@#=====*%%##%%+=+#+.       -**--::---::::::::::---::::::::-==::::::::::::::::::::----::::::::::::::::::::::::::-=+=-:::-*#%\n\t###########################%%+=====#@#*#@*==+#=.    :+##+---=+=-::::::::::-=--::::::-++-::::::::::::----:::--==--::::::::::::::::::::::::::-=+=-:::-*#\n\t############################@#+====+%%*#%%+==#*: .:-*##+=--=+=-::::::::::-==-::::::-+*=:::::::::::::-==-:::--+*+-::::-::::::::::::::::::::::-=+---::-*\n\t############################%%*=====#@#*#@*==+#-. :+##+---=+=-:::::::::::-+=::::::-=*+-:::::::::::::-+++-::-=+**=::----:--:::::::::::::::::::-++-----=\n\t#############################@%+====+%%##%%+==#+. -##+-:-=+=:::::::---::-++-:::::-=**=:::::::::::::-=+**=-:-++**+-=-----+=:::::::::::::::::::-=*+-::--\n\t#############################%@*=====#@#*#@*==+#=-##+-:-=+=-::::::-==-===++-::::-=+*+-:::::::::::::-++**=-:-++*#*=++--:-++::::::::::::::::::::-**+----\n\t##############################%%+====*%%##%%+==*###+-:--++-::::--:-+==++=*+---::-=**+-:::::::::::::=++**=--=++*%%++*+-:-+*-::::::::---:::---::-+#*---=\n\t###############################@#+====#@###@#==+##+-::-++--::--==--+==*+=*+=+=--=+**+-:::::::-::::-+++**=:-+++*##+*#*=--+*+----::::-===-----::-+##+--=\n\t###############################%@*====+%%##%%*==**----=+-:::-=++=--+++*+=*+=*+--=+*#+-:::::-:-:::-=+++**--=++*#*+**##+--+#*-----::::-+++=:::::-+*#*+=+\n\t################################@%+====*@%#%@#+==#=---+=-:::-+++=--++**=+#+=**--=++**-::::---:::--+++**+--=+***=-+#%**+-+##+----::::-=**+-::::-=+*##**\n\t#################################@#====+%@##%%*==*#=-=+-:::-=**+=--+*#*=+%#+##=-+***#+-:::-+*-::-=++*#*+==+**#+=-=*%***=+**+=-----:--=***=:::--=+*##**\n\t##############################*##%%*====*@%##%%==+#+-+=-:::-+**+=:-**%#++#**##+=+***##=-::-*#----+++*#**#*+*#*=====##+*+**+++=-------=+**+--:--=++*%%#\n\t##################################%%+===+#@##%%*==*#++=::::=***+-:=###***++#%#+++*+*%%*-::=*%=--=++*%%#%#+*#*======+*++###+=++==+----=++**+-::-++++#%%\n\t##################################%@*====*%%##%#+==##+-:::=****=--*%%+*##==*%#+*****##*=--=*#+==++*#@@@@#+##+==========*%#=-=+==++=--=++*#*=:-=++++*%%\n\t###############################*###%%+====#%##%@*==*%*-::-*#***--=+**=+##=-=**=+****#*+++-=**+*++**%%###*##+====+++****#%%***#*=++=--=+++*#+--=++++*%%\n\t#################################*##%#====+%%##%%+-=##-:-+#%#*=:=*++*+*#%****#***####*==++=*+=+***##*+**#%%#***++++++++======+*++**=-=++**#*=-++++++#@\n\t###########*########################%%*====%@##%@#==+%=-=*#%#+--++-::::-=-:::-===+*#%%+:-+**+--**##+==*%#+=-============------+*++**==++***#+=++*+++#%\n\t#####################################%%====*@%##%%+==#*-+#%%*=-++-.....::::::---:-=+*#+-:-*#*-:+%%*===##+=======+*#%%%%%#*=====+*+*#*++****#*++++*++#%\n\t#####################################%@#=--+#%###%#==+#+**#%+--**-..:::-=+*%%##%%#*****=-::==::=##=--=*+=====+##*--#@@@@%##%%#*+##*##****++*#+++++++#%\n\t######################################%%+=-=+%%##%@*==*%***#--+##*-::-+#%+===:-*@@@%*++=-:::::::=-:..::--:-+#*++=-*@@@@@*:.+%#++#%###****++*#**+++++#%\n\t#######################################@#====*@#*#@#==+%#***-+#***+-:-*#=..+**%@@@@%+---::::::::::::::::::-=-:.=#@@@@@@%=:.:++++*#%###***++*##*+*+++*%\n\t#######################################%%*===+%%##%%+==*#**+=*#++**=::-=+:.=%@@@@@%#-.:::::::::::::::::::::::..:+%@@@%%+:.:-=+**#%%##%#***+*##**++++*%\n\t########################################@%+===*@%*#%%+=+##*****+**#*=:..--.-#%@@@%#=:::::::::-::::::::::::::::..-*%%%%*-.:-+**#%%++**#%**++*##*+++++#%\n\t%#######################################%@#===+%@#*%@*==*####*++*###*=:.....::::---::::::::::==:::::::::::::::..:::::::::-*%%###*=+%####*++*##*+++++#%\n\t@%#######################################%%+===#@#*#@%+=+#%%**+++*###*=:..............::::..:=+-::::::::.::::::......::+####++*+=+*%%*#%#++*##++++++##\n\t@%########################################@#+==+%@##%@*==*%#***++++*###*-::...:::...:::::.::=##=---::::..::::......:=+**++--=*++****%#*%#++*#*+++++*##\n\t##*##*####################################%%*===*@%##%%+=+##*+++++++*#%%%*-:..:::.::.....:-*%#+====-:::::..........:::-----=***#*++*##*#%*+*#*++++*###\n\t*******####################################@%+===%@###@#==+#+++++==++**#*##*-::::.::.....:+%@#=-==--:::::..........:::----+*#%%#+++*##**%#*##*++++*#%%\n\t*****######################################%@*===*@%##%%+==#*==+*+=++****=-=**+-::::......:-+#*---:::::::..........:::::-+#%#**+=++*****#%###++++*%%%*\n\t****########################################%%+===#@#*#@#=-+#+-=+*+++*###*+-:::-::::::......::-::::::::::.............:-*%#+=++==**+=++**%%#*+++*%%%+.\n\t\n\t****#########################################@#===*%%##%%+-=##=-=**+++*#%%#*=:.........:::...::::::::::::........:::.:+%#*==*#+=+*+--=+**%%#+++#%%*-. \n\t***##########################################%%+===#@###@#=-+#*=-=**+++*#%%%%*-:.........:....:-======-:::........:-*##+==*%%#--+=---=+++##*++*%%*:.  \n\t##############################################@#+==+@%##%%+-=#*=--=**+++*%%%@@%*-:...............................:-++===+#@@%+-++----=+++*#*+*%#=:... \n\t###############################################@#===#@#*#%%==+*+=--=**++*#%%%%%#++=-:...........::::::::::....:..::---+#%%@%#==*=--:-=++*#*+#%#:      \n\t##########################################****#%%+==+%%##%@#*#%%#=--=##*+*#%%%%%#+=-:...........::::::::::.....::--=+**++#%#==#+--:--+*##**#%*=.   ..:\n\t##############################****#########***#%@#===*@%%%@%*=-*%#=:-*%#+++#%%%%%%%*-:........................::-=*#*=-=+#%++##=-::=*#%#**##=. ....:::\n\t################################################%%*+*#%%#*=:...-*%#=:=%%#*+*%%%%#####*=:.....................:-=*%#+=---=*++#%+-:-=*#####%%%##+=-:... \n\t%%%%%%%%%%%%%%%%%%%%%%%%@@@@@@@@@%%%%%%%%%%%%%%%%%%#*+=---::.::::=##+-+%%#*+*%#*****###*+-:................:-+##*===---=+**%@*--=*#%%%%%%%%%%%%%%%*+=:\n\t------+*##%#*++*%%%%%%%%%%%%%%%%%%%%%@@@%%##*=-+*=::..::-----==---=+*#*#%%#*+#%#####*+-:=*+=:...........:-+#%#+=====--=**#%@#==*###*=-:::=#%%%%%%%%%%%\n\t*++++=+##%%%%%###%%%%%%%%%%%%%#%%%%%@@@@@%####+*#%#*++=+++***%%%#****##%%%%%*###+==--.  .*%#+=-::...::-=*%%%*==--=====*###%@%##*+++=-:... .=%@%%%%%%%%\n\t###############################################################%@#*****#####%%%%*=:.   :+++*+=+++++*##%%%#+=---======*%#+=*%*===--::::.....:-*%@@@@@@%\n\t#################%%%%%%%%##*#*##########****##########*****##*#%@*============#@#:    .#*.:=+=-----======--------=-=*#*===+*-..:....... .:---:-#%@@@@@\n\t%%%%%%%%%%%%#####****+++*%%#################################***%@*===========+#@%+====+#+==+***+********++++++++++**##*+****+===========+++++++*#%%%%%\n\t+++=======================*%@%#################################%@%############%+-:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\t===========================+#%@%#********************++++++++++++=-------::::::.......................................................................\n\t==========++++****#####%%%%#####=:....................................................................................................................\n\t########****+++=====----::::::........................................................................................................................\n\n");
				system("pause");
				system("cls");
				break;
  		}
  		
  		system("cls");
  		return vezX;
}
