/*
 * $Id$
 *
 * Copyright (C) 2004 Voice Sistem SRL
 *
 * This file is part of SIP Express Router.
 *
 * openser is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * openser is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 *
 *
 * History:
 * ---------
 *  2004-10-28  first version (ramona)
 *  2005-05-30  acc_extra patch commited (ramona)
 */


#ifndef _ACC_EXTRA_H_
#define _ACC_EXTRA_H_

#include "../../str.h"
#include "../../parser/msg_parser.h"
#include "dict.h"

struct acc_extra
{
	int flags;       /* if attr is an avp or a header */
	str name;       /* name (log comment/ column name) */
	/* value - hdr name or avp name */
	str sval;       /* hdr or avp name */
	int ival;       /* avp ID */
	struct acc_extra *next;
};

#define ACC_EXTRA_HEADER      (1<<1)
#define ACC_EXTRA_AVP         (1<<2)
#define ACC_EXTRA_IS_INT      (1<<3)
#define ACC_EXTRA_GLOBAL      (1<<4)

#define MAX_ACC_EXTRA 64



void init_acc_extra();

struct acc_extra *parse_acc_extra(char *extra, int allowed_flags);

void destroy_extras( struct acc_extra *extra);

int extra2strar( struct acc_extra *extra, struct sip_msg *rq,
	int *val_len, int *attr_len, str *attrs_arr, str **val_arr);

int extra2attrs( struct acc_extra *extra, struct attr *attrs, int offset);

int extra2int( struct acc_extra *extra );

#endif

