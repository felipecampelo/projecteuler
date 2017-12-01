/***************************************************************************
 *   projecteuler.h                           Version 20170112.001402      *
 *                                                                         *
 *   Project Euler                                                         *
 *   Copyright (C) 2015-2017    by Ruben Carlo Benante                     *
 ***************************************************************************
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 3 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************
 *   To contact the author, please write to:                               *
 *   Ruben Carlo Benante                                                   *
 *   Email: rcb@beco.cc                                                    *
 *   Webpage: http://www.beco.cc                                           *
 *   Phone: +55 (81) 3184-7555                                             *
 ***************************************************************************/

#ifndef _PROJECTEULER_H
#define _PROJECTEULER_H

/* ---------------------------------------------------------------------- */
/* includes */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <signal.h>
#include <string.h>
#include <unistd.h>
#include <gmp.h>
#include <limits.h>

/* ---------------------------------------------------------------------- */
/* typedefs */
typedef unsigned long ulong;
typedef unsigned int uint;

/* ---------------------------------------------------------------------- */
/* definitions */
#define sinal(i) ((i)<0?-1:1)
#define abs(i) (sinal(i)*(i))

#ifndef VERSION /* gcc -DVERSION="0.1.160612.142306" */
#define VERSION "20171130.203448" /* Version Number (string) */
#endif

/* Debug */
#ifndef DEBUG /* gcc -DDEBUG=1 */
#define DEBUG 0 /* Activate/deactivate debug mode */
#endif

#if DEBUG==0
#define NDEBUG
#endif
#include <assert.h> /* Verify assumptions with assert. Turn off with #define NDEBUG */ 

/* Debug message if DEBUG on */
#define IFDEBUG(M) if(DEBUG) fprintf(stderr, "[DEBUG file:%s line:%d]: " M "\n", __FILE__, __LINE__); else {;}

/* limits */
#define SBUFF 256 /* string buffer */
#define SAFEMEM 1000 /* a thousand integers in cache maximum */
#define ONEMINUTE 60 /* wait 60 seconds before warning */

/* static long mfor_val, mfor_inc; */ /* mfor (middle for) support variables */
/* static uint mfor_loop; */ /* mfor (middle for) break loop flag */
/* #define mfor(min, max) \
    for(mfor_val=((ulong)(((double)((max)+(min))/2.0)+0.5)), mfor_inc=0, mfor_loop=1;\
        mfor_val>(min) && mfor_val<(max) && mfor_loop;\
        mfor_inc=(mfor_loop?(-1*sinal(mfor_inc)*(abs(mfor_inc)+1)):0), mfor_val+=mfor_inc)*/
    
/* ---------------------------------------------------------------------- */
/* prototypes */
void startmain(const char *s);
void startfunc(const char *s);

/* Grab Ctrl-C to show info */
void sigproc(); /* ctrl-c */
void quitproc(); /* ctrl-\ */
void oneminuterule(); /* one minute rule */

/* math auxiliary functions */

/* ... your functions here */

#endif

/* ---------------------------------------------------------------------- */
/* vi: set ai et ts=4 sw=4 tw=0 wm=0 fo=croql : C config for Vim modeline */
/* Template by Dr. Beco <rcb at beco dot cc> Version 20160612.142044      */
