/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

/*
██████╗ ███╗   ███╗███████╗███╗   ██╗██╗   ██╗
██╔══██╗████╗ ████║██╔════╝████╗  ██║██║   ██║
██║  ██║██╔████╔██║█████╗  ██╔██╗ ██║██║   ██║
██║  ██║██║╚██╔╝██║██╔══╝  ██║╚██╗██║██║   ██║
██████╔╝██║ ╚═╝ ██║███████╗██║ ╚████║╚██████╔╝
╚═════╝ ╚═╝     ╚═╝╚══════╝╚═╝  ╚═══╝ ╚═════╝ 
dmenu
https://tools.suckless.org/dmenu/

Status: experimental
Last update: 26.12.2022
*/

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"monospace:size=13"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#c0caf5", "#1a1b26" },
	[SchemeSel] = { "#000000", "#7aa2f7" },
	[SchemeSelHighlight] = { "#e0af68", "#7aa2f7" },
	[SchemeNormHighlight] = { "#e0af68", "#222222" },
	[SchemeOut] = { "#000000", "#00ffff" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;
/* -h option; minimum height of a menu line */
static unsigned int lineheight = 0;
static unsigned int min_lineheight = 8;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
