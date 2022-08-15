#include <limits.h>

//Modify this file to change what commands output to your statusbar, and recompile using the make command.

static const Block blocks[] = {
	// clang-format off
	/*Icon*/                     /*Command*/                     /*Update Interval*/  /*Update Signal*/
	{"",     "~/dotfiles/scripts/dwmblocks/media_info.sh",       1,                   0},
	{"",     "~/dotfiles/scripts/dwmblocks/media_prev.sh",       UINT_MAX,            1},
	{"",     "~/dotfiles/scripts/dwmblocks/media_play_pause.sh", 1,                   2},
	{"",     "~/dotfiles/scripts/dwmblocks/media_next.sh",       UINT_MAX,            3},
	{"",     "~/dotfiles/scripts/dwmblocks/ping.sh",             5,                   4},
	{":",   "~/dotfiles/scripts/dwmblocks/mem.sh",              5,                   5},
	{":",   "~/dotfiles/scripts/dwmblocks/cpu.sh",              5,                   6},
	{"",     "~/dotfiles/scripts/dwmblocks/date.sh",             5,                   7},
	{"",     "~/dotfiles/scripts/dwmblocks/vol.sh",              5,                   8},
	{"",     "~/dotfiles/scripts/dwmblocks/battery.sh",          5,                   9},
	// clang-format on
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ";
static unsigned int delimLen = 5;
