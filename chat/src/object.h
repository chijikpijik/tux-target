/* Copyright, 2001 MELTING POT.
 *
 * This file is part of MTP CHAT.
 * MTP CHAT is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.

 * MTP CHAT is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with MTP CHAT; see the file COPYING. If not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330, Boston,
 * MA 02111-1307, USA.
 */

/* Object.H */

#ifndef OBJECT_H
#define OBJECT_H

/* Constants */

#define ID_SIZE 8

enum {
   LIST     = 0x01,
   RESERVED = 0x02,
   SERVER   = 0x04,
   USER     = 0x08,
   GROUP    = 0x10,
   CHANNEL  = 0x20,
   ALIAS    = 0x40
};

#define OBJECT (LIST|RESERVED|SERVER|USER|GROUP|CHANNEL)

/* Types */

typedef struct {
   int   Type;
   char *Id;
} object;

#endif /* ! defined OBJECT_H */

/* End of Object.H */
