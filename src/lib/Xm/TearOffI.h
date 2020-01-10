/*
 * @OPENGROUP_COPYRIGHT@
 * COPYRIGHT NOTICE
 * Copyright (c) 1990, 1991, 1992, 1993 Open Software Foundation, Inc.
 * Copyright (c) 1996, 1997, 1998, 1999, 2000 The Open Group
 * ALL RIGHTS RESERVED (MOTIF).  See the file named COPYRIGHT.MOTIF for
 * the full copyright text.
 * 
 * This software is subject to an open license. It may only be
 * used on, with or for operating systems which are themselves open
 * source systems. You must contact The Open Group for a license
 * allowing distribution and sublicensing of this software on, with,
 * or for operating systems which are not Open Source programs.
 * 
 * See http://www.opengroup.org/openmotif/license for full
 * details of the license agreement. Any use, reproduction, or
 * distribution of the program constitutes recipient's acceptance of
 * this agreement.
 * 
 * EXCEPT AS EXPRESSLY SET FORTH IN THIS AGREEMENT, THE PROGRAM IS
 * PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, EITHER EXPRESS OR IMPLIED INCLUDING, WITHOUT LIMITATION, ANY
 * WARRANTIES OR CONDITIONS OF TITLE, NON-INFRINGEMENT, MERCHANTABILITY
 * OR FITNESS FOR A PARTICULAR PURPOSE
 * 
 * EXCEPT AS EXPRESSLY SET FORTH IN THIS AGREEMENT, NEITHER RECIPIENT
 * NOR ANY CONTRIBUTORS SHALL HAVE ANY LIABILITY FOR ANY DIRECT,
 * INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING WITHOUT LIMITATION LOST PROFITS), HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OR DISTRIBUTION OF THE PROGRAM OR THE
 * EXERCISE OF ANY RIGHTS GRANTED HEREUNDER, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGES.
 * 
 */
/*
 * HISTORY
 */
/* $XConsortium: TearOffI.h /main/5 1995/07/13 18:02:12 drk $ */
#ifndef _XmTearOffI_h
#define _XmTearOffI_h

#include <Xm/TearOffP.h>

#ifdef __cplusplus
extern "C" {
#endif


/********    Private Function Declarations    ********/

extern void _XmTearOffBtnDownEventHandler( 
                        Widget reportingWidget,
                        XtPointer data,
                        XEvent *event,
                        Boolean *cont) ;
extern void _XmTearOffBtnUpEventHandler( 
                        Widget reportingWidget,
                        XtPointer data,
                        XEvent *event,
                        Boolean *cont) ;
extern void _XmDestroyTearOffShell( 
                        Widget wid) ;
extern void _XmDismissTearOff( 
                        Widget shell,
                        XtPointer closure,
                        XtPointer call_data) ;
extern void _XmTearOffInitiate( 
                        Widget wid,
                        XEvent *event) ;
extern void _XmAddTearOffEventHandlers( 
                        Widget wid) ;
extern Boolean _XmIsTearOffShellDescendant( 
                        Widget wid) ;
extern void _XmLowerTearOffObscuringPoppingDownPanes(
			Widget ancestor,
			Widget tearOff ) ;
extern void _XmRestoreExcludedTearOffToToplevelShell( 
                        Widget wid,
                        XEvent *event) ;
extern void _XmRestoreTearOffToToplevelShell( 
                        Widget wid,
                        XEvent *event) ;
extern void _XmRestoreTearOffToMenuShell( 
                        Widget wid,
                        XEvent *event) ;

/********    End Private Function Declarations    ********/


#ifdef __cplusplus
}  /* Close scope of 'extern "C"' declaration which encloses file. */
#endif

#endif /* _XmTearOffI_h */
/* DON'T ADD ANYTHING AFTER THIS #endif */
