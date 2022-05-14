//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"",	"volumen",				2,	            0 },
	{"",	"battery",	        		15,	            0 },
	{"", 	"clock",				30,	            0},
	{"", 	"watch",				30,	            0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
