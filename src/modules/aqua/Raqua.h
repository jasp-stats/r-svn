/*
 *  R : A Computer Language for Statistical Data Analysis
 *  Copyright (C) 1995, 1996  Robert Gentleman and Ross Ihaka
 *  Copyright (C) 1997--2002  Robert Gentleman, Ross Ihaka
 *			      and the R Development Core Team
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

/* See system.txt for a description of functions
 */
#ifndef __RAQUA_H__
#define __RAQUA_H__

#ifndef max
#define max(a, b) (((a)>(b))?(a):(b))
#endif
#ifndef min
#define min(a, b) (((a)<(b))?(a):(b))
#endif


#define kRAppSignature '0FFF'
#define kRVersionInfoID 132
#define kRCopyrightID 133
#define kRAquaAuthorsID 134
#define kRAquaThanksToID 135
#define kRImageID 136



/* RPreferences structure */
typedef struct
{
   long		prefsTypeVers;
   char		ConsoleFontName[255];
   int	       	ConsoleFontSize;
   int  	TabSize;
   RGBColor	FGInputColor;
   RGBColor	BGInputColor;
   RGBColor	FGOutputColor;
   RGBColor	BGOutputColor;
   char		DeviceFontName[255];
   int       	DevicePointSize;
   double	DeviceWidth;
   double	DeviceHeight;
   int		AntiAlias;
   int  	AutoRefresh;
   int		OverrideRDefaults;
  int           Buffering;
  int           BufferSize;
  char          CRANmirror[255];
  char          BIOCmirror[255];
  int           GlobalPackages;
}  RAquaPrefs, *RAquaPrefsPointer, **RAquaPrefsHandle;




#endif /* __RAQUA_H__ */
