/*
 * $Id: Window.h,v 1.3 2004-08-03 01:19:17 ghudson Exp $
 *
 * Copyright 1990, 1991 by the Massachusetts Institute of Technology. 
 *
 * For copying and distribution information, please see the file
 * <mit-copyright.h>. 
 *
 */

#ifndef _Xj_Window_h
#define _Xj_Window_h

#include "Jets.h"
#include <X11/Xutil.h>

extern JetClass windowJetClass;
extern void MapWindow();
extern void UnmapWindow();
extern int WindowMapped(); /* s.b. boolean */
extern int WindowVisibility();

typedef struct {int littlefoo;} WindowClassPart;

typedef struct _WindowClassRec {
  CoreClassPart		core_class;
  WindowClassPart	window_class;
} WindowClassRec;

extern WindowClassRec windowClassRec;

typedef struct {
  int foreground, background, borderColor;
  int borderWidth;
  Boolean overrideRedirect, rootTransient, showCommand, global;
  char *title;
  char *geometry;
  char *defGeometry;
  int minWidth, minHeight;
  XSizeHints sizeHints;
  int cursorCode;
  Cursor cursor;
  XjPixmap *pixmap;
  XjCallback *deleteProc;
  XjCallback *clientMessageProc;
  XjCallback *mapNotifyProc;
  Boolean mapped, iconic, input;
  Boolean forceNWGravity;
  Boolean reverseVideo;
  int visibility;
  Jet iconWindow;
} WindowPart;

typedef struct _WindowRec {
  CorePart	core;
  WindowPart	window;
} WindowRec;

typedef struct _WindowRec *WindowJet;
typedef struct _WindowClassRec *WindowJetClass;

typedef struct _WindowInfo {
  WindowJet window;
  XEvent *event;
} WindowInfo;

#define XjCTitle "Title"
#define XjNtitle "title"
#define XjCGeometry "Geometry"
#define XjNgeometry "geometry"
#define XjNdefGeometry "defGeometry"
#define XjCMinWidth "minWidth"
#define XjNminWidth "minWidth"
#define XjCMinHeight "minHeight"
#define XjNminHeight "minHeight"
#define XjCOverrideRedirect "OverrideRedirect"
#define XjNoverrideRedirect "overrideRedirect"
#define XjCShowCommand "ShowCommand"
#define XjNshowCommand "showCommand"
#define XjCGlobal "Global"
#define XjNglobal "global"
#define XjCRootTransient "RootTransient"
#define XjNrootTransient "rootTransient"
#define XjNcursorCode "cursorCode"
#define XjCCursorCode "CursorCode"
#define XjCMapped "Mapped"
#define XjNmapped "mapped"
#define XjCIconic "Iconic"
#define XjNiconic "iconic"
#define XjCInput "Input"
#define XjNinput "input"
#define XjCForceNWGravity "ForceNWGravity"
#define XjNforceNWGravity "forceNWGravity"
#define XjNbackgroundPixmap "backgroundPixmap"
#define XjCBackgroundPixmap "BackgroundPixmap"
#define XjNdeleteProc "deleteProc"
#define XjCDeleteProc "DeleteProc"
#define XjNiconWindow "iconWindow"
#define XjCIconWindow "IconWindow"
#define XjRWindow "Window"
#define XjCMapNotifyProc "MapNotifyProc"
#define XjNmapNotifyProc "mapNotifyProc"
#define XjCBorderWidth "BorderWidth"
#define XjNborderWidth "borderWidth"
#define XjCBorderColor "BorderColor"
#define XjNborderColor "borderColor"
#define XjCClientMessageProc "ClientMessageProc"
#define XjNclientMessageProc "clientMessageProc"

#endif /* _Xj_Window_h */
