#include <limits.h>

//Modify this file to change what commands output to your statusbar, and recompile using the make command.

static const Block blocks[] = {
	// clang-format off
	/*Icon*/                     /*Command*/                     /*Update Interval*/  /*Update Signal*/
	{"",     "$DOTFILES/scripts/dwmblocks/media_info.sh",       1,                   0},
	{"",     "$DOTFILES/scripts/dwmblocks/media_prev.sh",       UINT_MAX,            1},
	{"",     "$DOTFILES/scripts/dwmblocks/media_play_pause.sh", 1,                   2},
	{"",     "$DOTFILES/scripts/dwmblocks/media_next.sh",       UINT_MAX,            3},
	{"",     "$DOTFILES/scripts/dwmblocks/ping.sh",             5,                   4},
	{":",   "$DOTFILES/scripts/dwmblocks/mem.sh",              5,                   5},
	{":",   "$DOTFILES/scripts/dwmblocks/cpu.sh",              5,                   6},
	{"",     "$DOTFILES/scripts/dwmblocks/date.sh",             5,                   7},
	{"",     "$DOTFILES/scripts/dwmblocks/vol.sh",              5,                   8},
	{"",     "$DOTFILES/scripts/dwmblocks/battery.sh",          5,                   9},
	// clang-format on
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ";
static unsigned int delimLen = 5;
