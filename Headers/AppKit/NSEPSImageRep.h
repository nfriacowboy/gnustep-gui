/* 
   NSEPSImageRep.h

   EPS image representation.

   Copyright (C) 1996 Free Software Foundation, Inc.

   Written by:  Adam Fedor <fedor@colorado.edu>
   Date: Feb 1996
   
   This file is part of the GNUstep GUI Library.

   This library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Library General Public
   License as published by the Free Software Foundation; either
   version 2 of the License, or (at your option) any later version.
   
   This library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Library General Public License for more details.

   You should have received a copy of the GNU Library General Public
   License along with this library; see the file COPYING.LIB.
   If not, write to the Free Software Foundation,
   59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
*/ 

#ifndef _GNUstep_H_NSEPSImageRep
#define _GNUstep_H_NSEPSImageRep

#include <Foundation/NSGeometry.h>
#include <AppKit/NSImageRep.h>

@class NSData;

@interface NSEPSImageRep : NSImageRep
{
  // Attributes
  NSRect _bounds;
  NSData *_epsData;
}

//
// Initializing a New Instance 
//
+ (id)imageRepWithData:(NSData *)epsData;
- (id)initWithData:(NSData *)epsData;

//
// Getting Image Data 
//
- (NSRect)boundingBox;
- (NSData *)EPSRepresentation;

//
// Drawing the Image 
//
- (void)prepareGState;

@end

#endif // _GNUstep_H_NSEPSImageRep
