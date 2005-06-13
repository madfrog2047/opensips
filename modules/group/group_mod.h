/*
 * $Id$
 *
 * Group membership 
 *
 * Copyright (C) 2001-2003 FhG Fokus
 *
 * This file is part of openser, a free SIP server.
 *
 * openser is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version
 *
 * openser is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License 
 * along with this program; if not, write to the Free Software 
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 * History:
 * --------
 * 2003-02-25 - created by janakj
 */


#ifndef GROUP_MOD_H
#define GROUP_MOD_H

#include "../../db/db.h"
#include "../../str.h"
#include "../../parser/digest/digest.h" /* auth_body_t */
#include "../../parser/msg_parser.h"    /* struct sip_msg */


/*
 * Module parameters variables
 */
extern str table;           /* 'group' table name */
extern str user_column;     /* 'user' column name in group table */
extern str domain_column;   /* 'domain' column name in group table */
extern str group_column;    /* "group' column name in group table */
extern int use_domain;      /* Use domain in is_user_in */


#endif /* GROUP_MOD_H */
