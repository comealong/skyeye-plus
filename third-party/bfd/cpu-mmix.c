/* BFD library support routines for MMIX.
   Copyright 2001, 2002, 2007 Free Software Foundation, Inc.
   Contributed by Hans-Peter Nilsson (hp@bitrange.com)

   This file is part of BFD, the Binary File Descriptor library.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street - Fifth Floor, Boston,
   MA 02110-1301, USA.  */

#include "sysdep.h"
#include "bfd.h"
#include "libbfd.h"

const bfd_arch_info_type
bfd_mmix_arch =
 {
   64,				/* 64 bits in a word.  */
   64,				/* 64 bits in an address.  */
   8,				/* 8 bits in a byte.  */
   bfd_arch_mmix,		/* Architecture.  */
   0,				/* Machine number - 0 for now.  */
   /* Sorry, these are by custom and creeping assumption lower-case.  */
   "mmix",			/* Architecture name.  */
   "mmix",			/* Printable name.  */
   3,				/* Section align power.  */
   TRUE,			/* This is the default architecture.  */
   bfd_default_compatible,	/* Architecture comparison function.  */
   bfd_default_scan,		/* String to architecture conversion.  */
   NULL				/* Next in list.  */
};
