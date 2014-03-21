/**
  sdl key syms

  XXX: i'know this is stupit but i'm preparing for some good solution :)

*/


#ifndef _SDL_KEYS_INC
#define _SDL_KEYS_INC

#define ZIPIT_Z2 1

struct t_sdl_keysym
{
	unsigned short	sym;
	int		key;
#ifdef ZIPIT_Z2
        int		skey; 
        int		akey; 
        int		sakey;
#endif
};

#ifdef ZIPIT_Z2
/* dead key accent mappings for latin15 */
int acute_map[] = {
0xC1,'B','C','D',0xC9,'F','G','H',0xCD,'J','K','L','M','N',0xD3,'P','Q','R','S','T',0xDA,'V','W','X',0xDD,'Z',
'\'',0,0,0,0,0,
0xE1,'b','c','d',0xE9,'f','g','h',0xED,'j','k','l','m','n',0xF3,'p','q','r','s','t',0xFA,'v','w','x',0xFD,'z'};
int grave_map[] = {
0xC0,'B','C','D',0xC8,'F','G','H',0xCC,'J','K','L','M','N',0xD2,'P','Q','R','S','T',0xD9,'V','W','X','Y','Z',
'`',0,0,0,0,0,
0xE0,'b','c','d',0xE8,'f','g','h',0xEC,'j','k','l','m','n',0xF2,'p','q','r','s','t',0xF9,'v','w','x','y','z'};
int circumflex_map[] = {
0xC2,'B','C','D',0xCA,'F','G','H',0xCE,'J','K','L','M','N',0xD4,'P','Q','R','S','T',0xDB,'V','W','X','Y','Z',
'^',0,0,0,0,0,
0xE2,'b','c','d',0xEA,'f','g','h',0xEE,'j','k','l','m','n',0xF4,'p','q','r','s','t',0xFB,'v','w','x','y','z'};
int diaeresis_map[] = {
0xC4,'B','C','D',0xCB,'F','G','H',0xCF,'J','K','L','M','N',0xD6,'P','Q','R','S','T',0xDC,'V','W','X','Y','Z',
'\"',0,0,0,0,0,
0xE4,'b','c','d',0xEB,'f','g','h',0xEF,'j','k','l','m','n',0xF6,'p','q','r','s','t',0xFC,'v','w','x',0xFF,'z'};
int cedilla_map[] = {
'A','B',0xC7,'D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',
',',0,0,0,0,0,
'a','b',0xE7,'d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
int tilde_map[] = {
0xC3,'B','C','D','E','F','G','H','I','J','K','L','M',0xD1,0xD5,'P','Q','R','S','T','U','V','W','X','Y','Z',
'~',0,0,0,0,0,
0xE3,'b','c','d','e','f','g','h','i','j','k','l','m',0xF1,0xF5,'p','q','r','s','t','u','v','w','x','y','z'};
#endif

/* big mapping SDL->LINKS */
static struct t_sdl_keysym sdl_keysyms[] =
{
#ifdef ZIPIT_Z2
	{ SDLK_UNKNOWN		,0 ,0, 0, 0},
	{ SDLK_FIRST		,0 ,0, 0, 0},
	{ SDLK_ESCAPE,KBD_ESC,KBD_ESC,'|',KBD_ESC},
	{ SDLK_0,'0',')','0',')'},
	{ SDLK_1,'1','!','1','!'},
	{ SDLK_2,'2','@','2','@'},
	{ SDLK_3,'3','#','3','#'},
	{ SDLK_4,'4','$','4','$'},
	{ SDLK_5,'5','%','5','%'},
	{ SDLK_6,'6','^','6','^'},
	{ SDLK_7,'7','&','7','&'},
	{ SDLK_8,'8','*','8','*'},
	{ SDLK_9,'9','(','9','('},
	{ SDLK_a,'a','A','$','A'},
	{ SDLK_b,'b','B','=','B'},
	{ SDLK_c,'c','C','+','C'},
	{ SDLK_d,'d','D','&','D'},
	{ SDLK_e,'e','E','3','E'},
	{ SDLK_f,'f','F','@','F'},
	{ SDLK_g,'g','G','"','G'},
	{ SDLK_h,'h','H','\'','`'},
	{ SDLK_i,'i','I','8','I'},
	{ SDLK_j,'j','J','[','J'},
	{ SDLK_k,'k','K',']','`'},
	{ SDLK_l,'l','L','-','|'},
	{ SDLK_m,'m','M','?','%'},
	{ SDLK_n,'n','N','_','N'},
	{ SDLK_o,'o','O','9','O'},
	{ SDLK_p,'p','P','0','P'},
	{ SDLK_q,'q','Q','1','Q'},
	{ SDLK_r,'r','R','4','R'},
	{ SDLK_s,'s','S','#','S'},
	{ SDLK_t,'t','T','5','T'},
	{ SDLK_u,'u','U','7','U'},
	{ SDLK_v,'v','V','*','V'},
	{ SDLK_w,'w','W','2','W'},
	{ SDLK_x,'x','X','/','\\'},
	{ SDLK_y,'y','Y','6','Y'},
	{ SDLK_z,'z','Z','!','C'},
	{ SDLK_MINUS,'-','_','-','_'},
	{ SDLK_EQUALS,'=','+','=','+'},
	{ SDLK_LEFTBRACKET,'[','{','[','{'},
	{ SDLK_RIGHTBRACKET,']','}',']','}'},
	{ SDLK_SEMICOLON,';','~',':','^'},
	{ SDLK_QUOTE,'\'','"','\'','"'},
	{ SDLK_BACKSLASH,'\\','|','\\','|'},
	{ SDLK_SLASH,'/','?','/','?'},
	{ SDLK_PERIOD,'.',')','>','}'},
	{ SDLK_COMMA,',','(','<','{'},
	{ SDLK_BACKQUOTE,'`','~','`','~'},
	{ SDLK_BACKSPACE,KBD_BS,KBD_BS,KBD_BS,KBD_BS},
	{ SDLK_TAB,KBD_TAB,KBD_TAB,'~',KBD_TAB},
	{ SDLK_DELETE,127,127,127,127},
	{ SDLK_RETURN,KBD_ENTER,KBD_ENTER,KBD_ENTER,KBD_ENTER},
	{ SDLK_F1,KBD_F1,KBD_F1,KBD_F1,KBD_F1},
	{ SDLK_F2,KBD_F2,KBD_F2,KBD_F2,KBD_F2},
	{ SDLK_F3,KBD_F3,KBD_F3,KBD_F3,KBD_F3},
	{ SDLK_F4,KBD_F4,KBD_F4,KBD_F4,KBD_F4},
	{ SDLK_F5,KBD_F5,KBD_F5,KBD_F5,KBD_F5},
	{ SDLK_F6,KBD_F6,KBD_F6,KBD_F6,KBD_F6},
	{ SDLK_F7,KBD_F7,KBD_F7,KBD_F7,KBD_F7},
	{ SDLK_F8,KBD_F8,KBD_F8,KBD_F8,KBD_F8},
	{ SDLK_F9,KBD_F9,KBD_F9,KBD_F9,KBD_F9},
	{ SDLK_F10,KBD_F10,KBD_F10,KBD_F10,KBD_F10},
	{ SDLK_ESCAPE,0x1b,0x1b,'|',0x1b},

	{ SDLK_LEFT,KBD_LEFT,KBD_LEFT,KBD_LEFT,KBD_LEFT},
	{ SDLK_RIGHT,KBD_RIGHT,KBD_RIGHT,KBD_RIGHT,KBD_RIGHT},
	{ SDLK_UP,KBD_UP,KBD_UP,KBD_UP,KBD_UP},
	{ SDLK_DOWN,KBD_DOWN,KBD_DOWN,KBD_DOWN,KBD_DOWN},
//	{ SDLK_PAGEUP,KBD_PAGE_UP,KBD_PAGE_UP,']', KBD_PAGE_UP},
//	{ SDLK_PAGEDOWN,KBD_PAGE_DOWN,KBD_PAGE_DOWN, '[', KBD_PAGE_DOWN},
//      The [] was a hack for left/rt, but INS/DEL for scroll is a better fit.
	{ SDLK_PAGEUP,KBD_PAGE_UP,KBD_PAGE_UP,KBD_INS, KBD_INS},
	{ SDLK_PAGEDOWN,KBD_PAGE_DOWN,KBD_PAGE_DOWN, KBD_DEL, KBD_DEL},
	{ SDLK_SPACE,' ',' ',' ',' '},
	{ SDLK_HOME,KBD_HOME,KBD_HOME,KBD_PAGE_UP,KBD_PAGE_UP},
	{ SDLK_END,KBD_END,KBD_END,KBD_PAGE_DOWN,KBD_PAGE_DOWN},

	{ SDLK_LALT,308,308,308,308},
	{ SDLK_RALT,307,307,307,307},
	{ SDLK_LCTRL,306,306,306,306},
	{ SDLK_RCTRL,305,305,305,305},
	{ SDLK_LSHIFT,304,304,304,304},
	{ SDLK_RSHIFT,303,303,303,303},
  { SDLK_LAST		,0 ,0, 0, 0},
#else
	{ SDLK_UNKNOWN		,0 },
	{ SDLK_FIRST		,0 },
	{ SDLK_BACKSPACE	,KBD_BS },
	{ SDLK_TAB		,KBD_TAB },
	{ SDLK_CLEAR		,12 },
	{ SDLK_RETURN		,KBD_ENTER },
	{ SDLK_PAUSE		,19 },
	{ SDLK_ESCAPE		,KBD_ESC },
	{ SDLK_SPACE		,32 },
	{ SDLK_EXCLAIM		,33 },
	{ SDLK_QUOTEDBL		,34 },
	{ SDLK_HASH		,35 },
	{ SDLK_DOLLAR		,36 },
	{ SDLK_AMPERSAND		,38 },
	{ SDLK_QUOTE		,39 },
	{ SDLK_LEFTPAREN		,40 },
	{ SDLK_RIGHTPAREN		,41 },
	{ SDLK_ASTERISK		,42 },
	{ SDLK_PLUS		,43 },
	{ SDLK_COMMA		,44 },
	{ SDLK_MINUS		,45 },
	{ SDLK_PERIOD		,46 },
	{ SDLK_SLASH		,47 },
	{ SDLK_0			,48 },
	{ SDLK_1			,49 },
	{ SDLK_2			,50 },
	{ SDLK_3			,51 },
	{ SDLK_4			,52 },
	{ SDLK_5			,53 },
	{ SDLK_6			,54 },
	{ SDLK_7			,55 },
	{ SDLK_8			,56 },
	{ SDLK_9			,57 },
	{ SDLK_COLON		,58 },
	{ SDLK_SEMICOLON		,59 },
	{ SDLK_LESS		,60 },
	{ SDLK_EQUALS		,61 },
	{ SDLK_GREATER		,62 },
	{ SDLK_QUESTION		,63 },
	{ SDLK_AT			,64 },
	/* 
	   Skip uppercase letters
	 */
	{ SDLK_LEFTBRACKET	,91 },
	{ SDLK_BACKSLASH		,92 },
	{ SDLK_RIGHTBRACKET	,93 },
	{ SDLK_CARET		,94 },
	{ SDLK_UNDERSCORE		,95 },
	{ SDLK_BACKQUOTE		,96 },
	{ SDLK_a			,97 },
	{ SDLK_b			,98 },
	{ SDLK_c			,99 },
	{ SDLK_d			,100 },
	{ SDLK_e			,101 },
	{ SDLK_f			,102 },
	{ SDLK_g			,103 },
	{ SDLK_h			,104 },
	{ SDLK_i			,105 },
	{ SDLK_j			,106 },
	{ SDLK_k			,107 },
	{ SDLK_l			,108 },
	{ SDLK_m			,109 },
	{ SDLK_n			,110 },
	{ SDLK_o			,111 },
	{ SDLK_p			,112 },
	{ SDLK_q			,113 },
	{ SDLK_r			,114 },
	{ SDLK_s			,115 },
	{ SDLK_t			,116 },
	{ SDLK_u			,117 },
	{ SDLK_v			,118 },
	{ SDLK_w			,119 },
	{ SDLK_x			,120 },
	{ SDLK_y			,121 },
	{ SDLK_z			,122 },
	{ SDLK_DELETE		,127 },
	/* End of ASCII mapped keysyms */

	/* International keyboard syms */
	{ SDLK_WORLD_0		,160 },		/* 0xA0 */
	{ SDLK_WORLD_1		,161 },
	{ SDLK_WORLD_2		,162 },
	{ SDLK_WORLD_3		,163 },
	{ SDLK_WORLD_4		,164 },
	{ SDLK_WORLD_5		,165 },
	{ SDLK_WORLD_6		,166 },
	{ SDLK_WORLD_7		,167 },
	{ SDLK_WORLD_8		,168 },
	{ SDLK_WORLD_9		,169 },
	{ SDLK_WORLD_10		,170 },
	{ SDLK_WORLD_11		,171 },
	{ SDLK_WORLD_12		,172 },
	{ SDLK_WORLD_13		,173 },
	{ SDLK_WORLD_14		,174 },
	{ SDLK_WORLD_15		,175 },
	{ SDLK_WORLD_16		,176 },
	{ SDLK_WORLD_17		,177 },
	{ SDLK_WORLD_18		,178 },
	{ SDLK_WORLD_19		,179 },
	{ SDLK_WORLD_20		,180 },
	{ SDLK_WORLD_21		,181 },
	{ SDLK_WORLD_22		,182 },
	{ SDLK_WORLD_23		,183 },
	{ SDLK_WORLD_24		,184 },
	{ SDLK_WORLD_25		,185 },
	{ SDLK_WORLD_26		,186 },
	{ SDLK_WORLD_27		,187 },
	{ SDLK_WORLD_28		,188 },
	{ SDLK_WORLD_29		,189 },
	{ SDLK_WORLD_30		,190 },
	{ SDLK_WORLD_31		,191 },
	{ SDLK_WORLD_32		,192 },
	{ SDLK_WORLD_33		,193 },
	{ SDLK_WORLD_34		,194 },
	{ SDLK_WORLD_35		,195 },
	{ SDLK_WORLD_36		,196 },
	{ SDLK_WORLD_37		,197 },
	{ SDLK_WORLD_38		,198 },
	{ SDLK_WORLD_39		,199 },
	{ SDLK_WORLD_40		,200 },
	{ SDLK_WORLD_41		,201 },
	{ SDLK_WORLD_42		,202 },
	{ SDLK_WORLD_43		,203 },
	{ SDLK_WORLD_44		,204 },
	{ SDLK_WORLD_45		,205 },
	{ SDLK_WORLD_46		,206 },
	{ SDLK_WORLD_47		,207 },
	{ SDLK_WORLD_48		,208 },
	{ SDLK_WORLD_49		,209 },
	{ SDLK_WORLD_50		,210 },
	{ SDLK_WORLD_51		,211 },
	{ SDLK_WORLD_52		,212 },
	{ SDLK_WORLD_53		,213 },
	{ SDLK_WORLD_54		,214 },
	{ SDLK_WORLD_55		,215 },
	{ SDLK_WORLD_56		,216 },
	{ SDLK_WORLD_57		,217 },
	{ SDLK_WORLD_58		,218 },
	{ SDLK_WORLD_59		,219 },
	{ SDLK_WORLD_60		,220 },
	{ SDLK_WORLD_61		,221 },
	{ SDLK_WORLD_62		,222 },
	{ SDLK_WORLD_63		,223 },
	{ SDLK_WORLD_64		,224 },
	{ SDLK_WORLD_65		,225 },
	{ SDLK_WORLD_66		,226 },
	{ SDLK_WORLD_67		,227 },
	{ SDLK_WORLD_68		,228 },
	{ SDLK_WORLD_69		,229 },
	{ SDLK_WORLD_70		,230 },
	{ SDLK_WORLD_71		,231 },
	{ SDLK_WORLD_72		,232 },
	{ SDLK_WORLD_73		,233 },
	{ SDLK_WORLD_74		,234 },
	{ SDLK_WORLD_75		,235 },
	{ SDLK_WORLD_76		,236 },
	{ SDLK_WORLD_77		,237 },
	{ SDLK_WORLD_78		,238 },
	{ SDLK_WORLD_79		,239 },
	{ SDLK_WORLD_80		,240 },
	{ SDLK_WORLD_81		,241 },
	{ SDLK_WORLD_82		,242 },
	{ SDLK_WORLD_83		,243 },
	{ SDLK_WORLD_84		,244 },
	{ SDLK_WORLD_85		,245 },
	{ SDLK_WORLD_86		,246 },
	{ SDLK_WORLD_87		,247 },
	{ SDLK_WORLD_88		,248 },
	{ SDLK_WORLD_89		,249 },
	{ SDLK_WORLD_90		,250 },
	{ SDLK_WORLD_91		,251 },
	{ SDLK_WORLD_92		,252 },
	{ SDLK_WORLD_93		,253 },
	{ SDLK_WORLD_94		,254 },
	{ SDLK_WORLD_95		,255 },		/* 0xFF */

	/* Numeric keypad */
	{ SDLK_KP0		,256 },
	{ SDLK_KP1		,257 },
	{ SDLK_KP2		,258 },
	{ SDLK_KP3		,259 },
	{ SDLK_KP4		,260 },
	{ SDLK_KP5		,261 },
	{ SDLK_KP6		,262 },
	{ SDLK_KP7		,263 },
	{ SDLK_KP8		,264 },
	{ SDLK_KP9		,265 },
	{ SDLK_KP_PERIOD	,266 },
	{ SDLK_KP_DIVIDE	,267 },
	{ SDLK_KP_MULTIPLY	,268 },
	{ SDLK_KP_MINUS		,269 },
	{ SDLK_KP_PLUS		,270 },
	{ SDLK_KP_ENTER		,KBD_ENTER },
	{ SDLK_KP_EQUALS	,272 },

	/* Arrows + Home/End pad */
	{ SDLK_UP		,KBD_UP },
	{ SDLK_DOWN		,KBD_DOWN },
	{ SDLK_RIGHT		,KBD_RIGHT },
	{ SDLK_LEFT		,KBD_LEFT },
	{ SDLK_INSERT		,KBD_INS },
	{ SDLK_HOME		,KBD_HOME },
	{ SDLK_END		,KBD_END },
	{ SDLK_PAGEUP		,KBD_PAGE_UP },
	{ SDLK_PAGEDOWN		,KBD_PAGE_DOWN },

	/* Function keys */
	{ SDLK_F1		,KBD_F1 },
	{ SDLK_F2		,KBD_F2 },
	{ SDLK_F3		,KBD_F3 },
	{ SDLK_F4		,KBD_F4 },
	{ SDLK_F5		,KBD_F5 },
	{ SDLK_F6		,KBD_F6 },
	{ SDLK_F7		,KBD_F7 },
	{ SDLK_F8		,KBD_F8 },
	{ SDLK_F9		,KBD_F9 },
	{ SDLK_F10		,KBD_F10 },
	{ SDLK_F11		,KBD_F11 },
	{ SDLK_F12		,KBD_F12 },
	{ SDLK_F13		,294 },
	{ SDLK_F14		,295 },
	{ SDLK_F15		,296 },

	/* Key state modifier keys */
	{ SDLK_NUMLOCK		,300 },
	{ SDLK_CAPSLOCK		,301 },
	{ SDLK_SCROLLOCK		,302 },
	{ SDLK_RSHIFT		,303 },
	{ SDLK_LSHIFT		,304 },
	{ SDLK_RCTRL		,305 },
	{ SDLK_LCTRL		,306 },
	{ SDLK_RALT		,307 },
	{ SDLK_LALT		,308 },
	{ SDLK_RMETA		,309 },
	{ SDLK_LMETA		,310 },
	{ SDLK_LSUPER		,311 },		/* Left "Windows" key */
	{ SDLK_RSUPER		,312 },		/* Right "Windows" key */
	{ SDLK_MODE		,313 },		/* "Alt Gr" key */
	{ SDLK_COMPOSE		,314 },		/* Multi-key compose key */

	/* Miscellaneous function keys */
	{ SDLK_HELP		,315 },
	{ SDLK_PRINT		,316 },
	{ SDLK_SYSREQ		,317 },
	{ SDLK_BREAK		,318 },
	{ SDLK_MENU		,KBD_F9 },
	{ SDLK_POWER		,320 },		/* Power Macintosh power key */
	{ SDLK_EURO		,321 },		/* Some european keyboards */
	{ SDLK_UNDO		,322 },		/* Atari keyboard has Undo */

	/* Add any other keys here */

	{ SDLK_LAST		,0  },
#endif
};

#endif
