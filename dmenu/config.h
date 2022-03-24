static int topbar = 0;                      /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 0;                    /* -c option; centers dmenu on screen */
static int min_width = 990;                    /* minimum width when centered */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Hermit:style=Bold:pixelsize=12:antialias=true"
};
static const char *prompt      = NULL;      /* -p option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#bccddd", "#121416" },
	[SchemeSel] = { "#121416", "#bccddd" }, 
	[SchemeSelHighlight] = { "#121416", "#7fb1d4" },
	[SchemeNormHighlight] = { "#121416", "#7fb1d4" },
	[SchemeOut] = { "#121416", "#7bc2c5" },
	[SchemeMid] = { "#121416", "#93b9ba" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;
static unsigned int lineheight = 24;         /* -h option; minimum height of a menu line     */
/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
/* Size of the window border */
static unsigned int border_width = 0;  /* -bw option; to add border width */
