// SciTE - small text editor to debug Scintilla
// SciTE.h - define command IDs used within SciTE
// Copyright 1998-2001 by Neil Hodgson <neilh@scintilla.org>
// The License.txt file describes the conditions under which this software may be distributed.

#ifndef SCITE_H
#define SCITE_H

// Menu IDs
#define IDM_MRUFILE			50
#define IDM_TOOLS			60
#define IDM_BUFFER			70

// File
#define IDM_NEW				101
#define IDM_OPEN			102
#define IDM_OPENSELECTED	103
#define IDM_REVERT			104
#define IDM_CLOSE			105
#define IDM_SAVE			106
#define IDM_SAVEAS			110
#define IDM_SAVEASHTML		111
#define IDM_SAVEASRTF		112
#define IDM_SAVEASPDF		113
#define IDM_FILER			114
#define IDM_MRU_SEP			120
#define IDM_PRINTSETUP		130
#define IDM_PRINT			131
#define IDM_QUIT			140

#define MRU_START	8

// Edit
#define IDM_UNDO			201
#define IDM_REDO			202
#define IDM_CUT				203
#define IDM_COPY			204
#define IDM_PASTE			205
#define IDM_CLEAR			206
#define IDM_SELECTALL		207
#define IDM_FIND			210
#define IDM_FINDNEXT		211
#define IDM_FINDNEXTBACK	212
#define IDM_FINDNEXTSEL		213
#define IDM_FINDNEXTBACKSEL	214
#define IDM_FINDINFILES		215
#define IDM_REPLACE			216
#define IDM_GOTO			220
#define IDM_BOOKMARK_NEXT	221
#define IDM_BOOKMARK_TOGGLE	222
#define IDM_BOOKMARK_PREV	223
#define IDM_MATCHBRACE		230
#define IDM_SELECTTOBRACE	231
#define IDM_SHOWCALLTIP		232
#define IDM_COMPLETE		233
#define IDM_COMPLETEWORD	234
#define IDM_EXPAND			235
#define IDM_TOGGLE_FOLDALL	236
#define IDM_UPRCASE			240
#define IDM_LWRCASE			241

#define IDM_WORDPARTLEFT		250
#define IDM_WORDPARTLEFTEXTEND	251
#define IDM_WORDPARTRIGHT		252
#define IDM_WORDPARTRIGHTEXTEND	253

// Tools
#define IDM_COMPILE			301
#define IDM_BUILD			302
#define IDM_GO				303
#define IDM_STOPEXECUTE		304
#define IDM_FINISHEDEXECUTE	305
#define IDM_NEXTMSG			306
#define IDM_PREVMSG			307
#define IDM_TOGGLEOUTPUT		308

#define IDM_ACTIVATE		320

#define IDM_SRCWIN			350
#define IDM_RUNWIN			351
#define IDM_TOOLWIN			352
#define IDM_STATUSWIN		353
#define IDM_TABWIN			354

// Options
#define IDM_SPLITVERTICAL	401
#define IDM_VIEWSPACE		402
#define IDM_VIEWEOL			403
#define IDM_VIEWGUIDES		404
#define IDM_SELMARGIN		410
#define IDM_FOLDMARGIN		411
#define IDM_LINENUMBERMARGIN	412
#define IDM_VIEWTOOLBAR		420
#define IDM_VIEWTABBAR		421
#define IDM_VIEWSTATUSBAR	422

#define IDM_EOL_CRLF		430
#define IDM_EOL_CR			431
#define IDM_EOL_LF			432
#define IDM_EOL_CONVERT		433

#define IDM_TABSIZE			440

#define IDM_FIXED_FONT		450

#define IDM_OPENLOCALPROPERTIES		460
#define IDM_OPENUSERPROPERTIES		461
#define IDM_OPENGLOBALPROPERTIES	462

//#define IDM_SELECTIONMARGIN	490
//#define IDM_BUFFEREDDRAW	491
//#define IDM_USEPALETTE		492

// Buffers
#define IDM_PREVFILE		501
#define IDM_NEXTFILE		502
#define IDM_CLOSEALL		503
#define IDM_BUFFERSEP		504

// Help
#define IDM_HELP			901
#define IDM_ABOUT			902

#define LEXER_BASE			800

#define IDM_LEXER_NONE		LEXER_BASE
#define IDM_LEXER_CPP		LEXER_BASE+1
#define IDM_LEXER_VB		LEXER_BASE+2
#define IDM_LEXER_RC		LEXER_BASE+3
#define IDM_LEXER_HTML		LEXER_BASE+4
#define IDM_LEXER_XML		LEXER_BASE+5
#define IDM_LEXER_JS		LEXER_BASE+6
#define IDM_LEXER_WSCRIPT	LEXER_BASE+7
#define IDM_LEXER_PROPS		LEXER_BASE+8
#define IDM_LEXER_BATCH		LEXER_BASE+9
#define IDM_LEXER_MAKE		LEXER_BASE+10
#define IDM_LEXER_ERRORL	LEXER_BASE+11
#define IDM_LEXER_JAVA		LEXER_BASE+12
#define IDM_LEXER_LUA		LEXER_BASE+13
#define IDM_LEXER_PYTHON	LEXER_BASE+14
#define IDM_LEXER_PERL		LEXER_BASE+15
#define IDM_LEXER_SQL		LEXER_BASE+16
#define IDM_LEXER_PLSQL		LEXER_BASE+17
#define IDM_LEXER_PHP		LEXER_BASE+18
#define IDM_LEXER_LATEX		LEXER_BASE+19
#define IDM_LEXER_DIFF		LEXER_BASE+20
#define IDM_LEXER_CS		LEXER_BASE+21
#define IDM_LEXER_CONF		LEXER_BASE+22
#define IDM_LEXER_PASCAL	LEXER_BASE+23
#define IDM_LEXER_AVE	LEXER_BASE+24

// Dialog control IDs
#define IDGOLINE			220
#define IDABOUTSCINTILLA	221
#define IDFINDWHAT			222
#define IDFILES				223
#define IDDIRECTORY			224
#define IDCURRLINE			225
#define IDLASTLINE			226
#define IDEXTEND			227
#define IDTABSIZE			228
#define IDINDENTSIZE		229
#define IDUSETABS			230

#define IDREPLACEWITH		231
#define IDWHOLEWORD			232
#define IDMATCHCASE			233
#define IDDIRECTIONUP		234
#define IDDIRECTIONDOWN		235
#define IDREPLACE			236
#define IDREPLACEALL		237
#define IDREGEXP			238

// Dialog IDs
#define IDD_FIND			400
#define IDD_REPLACE			401

#endif
