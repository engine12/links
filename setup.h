/* setup.h
 * (c) 2002 Mikulas Patocka
 * This file is a part of the Links program, released under GPL.
 */

#if 0
#define VERSION_STRING			VERSION " ["__DATE__ " " __TIME__"]"
#else
#define VERSION_STRING			VERSION
#endif

/* DEBUG LEVEL:
 *		 0=vsechno vypnuty
 *		 1=leaky
 *		 2=leaky, ruda zona
 *		 3=leaky, ruda zona, alloc, realloc a free patterny
 *		-1=tajny level ;-)
 */
/* nastavuje se v configure --enable-debuglevel=-1,0,1,2,3
#define DEBUGLEVEL			2
*/

#if DEBUGLEVEL >= 1
#define DEBUG
#define LEAK_DEBUG
#define LEAK_DEBUG_LIST
#endif

#if DEBUGLEVEL < 0
#define OOPS
#define LEAK_DEBUG
#endif

#define LINKS_MANUAL_URL		(!strcmp(cast_const_char language_name(current_language),"Czech") || !strcmp(cast_const_char language_name(current_language),"Slovak")?\
					"http://links.twibright.com/user.html":\
					"http://links.twibright.com/user_en.html")
#define LINKS_HOMEPAGE_URL		(!strcmp(cast_const_char language_name(current_language),"Czech") || !strcmp(cast_const_char language_name(current_language),"Slovak")?\
					"http://links.twibright.com/index_cz.php":\
					"http://links.twibright.com/")
#define LINKS_CALIBRATION_URL		(!strcmp(cast_const_char language_name(current_language),"Czech") || !strcmp(cast_const_char language_name(current_language),"Slovak")?\
					"http://links.twibright.com/kalibrace.html":\
					"http://links.twibright.com/calibration.html")

#define LINKS_SOCK_NAME			"socket"
#define LINKS_PORT			23755
#define MAX_BIND_TRIES			3
#define AF_UNIX_SOCKET_TIMEOUT		2

#define FG_POLL_TIME			500

#define DNS_TIMEOUT			3600000UL

#define HTTP_KEEPALIVE_TIMEOUT		300000
#define FTP_KEEPALIVE_TIMEOUT		600000
#define MAX_KEEPALIVE_CONNECTIONS	30
#define KEEPALIVE_CHECK_TIME		20000

#define MAX_REDIRECTS			10
#define MAX_CACHED_REDIRECTS		5

#define DOWNLOAD_NAME_TRIES		10000

#define MEMORY_CACHE_GC_PERCENT		9/10
#define MAX_CACHED_OBJECT		1/4

#define MAX_HISTORY_ITEMS		4096
#define MENU_HOTKEY_SPACE		2

#define COL(x)				(x)

#define COLOR_MENU_TEXT			(term && !term->spec->braille ? COL(070) : COL(007))
#define COLOR_MENU_FRAME		(term && !term->spec->braille ? COL(070) : COL(007))
#define COLOR_MENU_SELECTED		(term && !term->spec->braille ? COL(007) : COL(007))
#define COLOR_MENU_HOTKEY		(term && !term->spec->braille ? COL(007) : COL(0107))

#define COLOR_MAINMENU			(term && !term->spec->braille ? COL(070) : COL(007))
#define COLOR_MAINMENU_SELECTED		(term && !term->spec->braille ? COL(007) : COL(007))
#define COLOR_MAINMENU_HOTKEY		(term && !term->spec->braille ? COL(070) : COL(0107))

#define COLOR_DIALOG			(term && !term->spec->braille ? COL(070) : COL(007))
#define COLOR_DIALOG_FRAME		(term && !term->spec->braille ? COL(070) : COL(007))
#define COLOR_DIALOG_TITLE		(term && !term->spec->braille ? COL(007) : COL(007))
#define COLOR_DIALOG_TEXT		(term && !term->spec->braille ? COL(070) : COL(007))
#define COLOR_DIALOG_CHECKBOX		(term && !term->spec->braille ? COL(070) : COL(0107))
#define COLOR_DIALOG_CHECKBOX_TEXT	(term && !term->spec->braille ? COL(070) : COL(007))
#define COLOR_DIALOG_BUTTON		(term && !term->spec->braille ? COL(070) : COL(0107))
#define COLOR_DIALOG_BUTTON_SELECTED	(term && !term->spec->braille ? COL(0107) : COL(0107))
#define COLOR_DIALOG_FIELD		(term && !term->spec->braille ? COL(007) : COL(0107))
#define COLOR_DIALOG_FIELD_TEXT		(term && !term->spec->braille ? COL(007) : COL(0107))
#define COLOR_DIALOG_METER		(term && !term->spec->braille ? COL(007) : COL(0177))
#define CHAR_DIALOG_METER		(term && !term->spec->braille ? 0 : '*')

#define SCROLL_ITEMS			2

#define DIALOG_LEFT_BORDER		3
#define DIALOG_TOP_BORDER		1
#define DIALOG_LEFT_INNER_BORDER	2
#define DIALOG_TOP_INNER_BORDER		0
#define DIALOG_FRAME			2

#define COLOR_TITLE			COL(007)
#define COLOR_STATUS			COL(070)

#define G_BFU_DEFAULT_FONT		"century-medium-roman-serif-vari"
#define G_BFU_DEFAULT_FONT_SIZE		16
#define G_DEFAULT_BFU_FG_COLOR		0x000000
#define G_DEFAULT_BFU_BG_COLOR		0xe0e0e0

#define G_MENU_LEFT_BORDER		8
#define G_MENU_LEFT_INNER_BORDER	8
#define G_MENU_TOP_BORDER		16
#define G_MENU_HOTKEY_SPACE		16
#define G_MAINMENU_LEFT_BORDER		8
#define G_MAINMENU_BORDER		8

#define G_DIALOG_TITLE_BORDER		8
#define G_DIALOG_LEFT_BORDER		2
#define G_DIALOG_TOP_BORDER		2
#define G_DIALOG_HLINE_SPACE		2
#define G_DIALOG_VLINE_SPACE		2
#define G_DIALOG_LEFT_INNER_BORDER	 4
#define G_DIALOG_TOP_INNER_BORDER	6

#define G_DIALOG_BUTTON_SPACE		4
#define G_DIALOG_CHECKBOX_SPACE		4

#define G_DIALOG_GROUP_SPACE		5
#define G_DIALOG_GROUP_TEXT_SPACE	5

#define G_DIALOG_CHECKBOX_L		"["
#define G_DIALOG_CHECKBOX_R		"]"
#define G_DIALOG_CHECKBOX_X		"X"

#define G_DIALOG_RADIO_L		"["
#define G_DIALOG_RADIO_R		"]"
#define G_DIALOG_RADIO_X		"X"

#define G_DIALOG_BUTTON_L		"[ "
#define G_DIALOG_BUTTON_R		" ]"

#define G_LEFT_ARROW			" \342\206\220 "
#define MENU_SUBMENU			(!F ? cast_uchar ">" : cast_uchar "\342\206\222")

#if 1 /* ZIPIT_Z2 */
/* Shave a few pixels off the big fat scroll bar. */
#define G_SCROLL_BAR_WIDTH		3
#else
#define G_SCROLL_BAR_WIDTH		12
#endif
#define G_SCROLL_BAR_MIN_SIZE		20
#define G_DEFAULT_SCROLL_BAR_FRAME_COLOR	0x000000
#define G_DEFAULT_SCROLL_BAR_AREA_COLOR		0xc0c0c0
#define G_DEFAULT_SCROLL_BAR_BAR_COLOR		0x000000

#define G_HTML_DEFAULT_FAMILY		"century"

#define G_HTML_TABLE_FRAME_COLOR	0xe0

#define G_HTML_MARGIN			4

#define G_IMG_REFRESH			1	/* Karle, nedavej sem 0 */

#define MAX_FONT_SIZE			500

#define SLOW_FPU_DETECT_THRESHOLD	1000
#define SLOW_FPU_MAX_STARTUP		5000

#define ESC_TIMEOUT			200

#define DISPLAY_TIME_MIN		200
#define DISPLAY_TIME_MAX_FIRST		1000
#define DISPLAY_TIME			15
#define IMG_DISPLAY_TIME		7

#define STAT_UPDATE_MIN			100
#define STAT_UPDATE_MAX			1000

#define HTML_LEFT_MARGIN		1
#define HTML_MAX_TABLE_LEVEL		10
#define HTML_MAX_FRAME_DEPTH		7
#define HTML_CHAR_WIDTH			7
#define HTML_CHAR_HEIGHT		12
#define HTML_FRAME_CHAR_WIDTH		10
#define HTML_FRAME_CHAR_HEIGHT		12
#define HTML_TABLE_2ND_PASS
#define HTML_DEFAULT_INPUT_SIZE		20
#define HTML_MINIMAL_TEXTAREA_WIDTH	6
#define HTML_DEFAULT_TEXTAREA_WIDTH	40
#define HTML_DEFAULT_TEXTAREA_HEIGHT	7

#define MAX_INPUT_URL_LEN		4096

#define SPD_DISP_TIME			200
#define CURRENT_SPD_SEC			50
#define CURRENT_SPD_AFTER		100

#define RESOURCE_INFO_REFRESH		100

#define DOWN_DLG_MIN			20

/* width and height of BFU element in list window in graphical mode
 * (draw_bfu_element function in listedit.c)
 * BFU_ELEMENT_WIDTH is a size of one bfu element (doesn't depend on graphical/text mode)
 */
#define BFU_GRX_WIDTH                 (G_BFU_FONT_SIZE>>1)
#define BFU_ELEMENT_WIDTH             (gf_val(5,5*BFU_GRX_WIDTH))
#define BFU_GRX_HEIGHT                        G_BFU_FONT_SIZE

/* higher number=more sensitive scrolling */
/* used in list_event_handler in listedit.c */
#define MOUSE_SCROLL_DIVIDER          1

#define MAGICKA_KONSTANTA_NA_MAXIMALNI_DYLKU_JS_KODU_PRI_ERRORU	256
