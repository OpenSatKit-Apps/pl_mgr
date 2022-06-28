/*
**  Copyright 2022 bitValence, Inc.
**  All Rights Reserved.
**
**  This program is free software; you can modify and/or redistribute it
**  under the terms of the GNU Affero General Public License
**  as published by the Free Software Foundation; version 3 with
**  attribution addendums as found in the LICENSE.txt
**
**  This program is distributed in the hope that it will be useful,
**  but WITHOUT ANY WARRANTY; without even the implied warranty of
**  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
**  GNU Affero General Public License for more details.
**
**  Purpose:
**    Define message IDs for the Playload Manager App
**
**  Notes:
**    1. See JSON init file.
**    2. PL_MGR_CMD_MID is defined in this header because it is needed by stored commands.
**
**  References:
**    1. OpenSatKit Object-based Application Developer's Guide.
**    2. cFS Application Developer's Guide.
**
*/
#ifndef _pl_mgr_msgids_
#define _pl_mgr_msgids_

/*
** Command Message IDs
*/

#define  PL_MGR_CMD_MID  0x1862  /* 6242 */
#define  PL_MGR_EXE_MID  0x1863

/*
** Telemetry Message IDs
*/

#define  PL_MGR_TLM_MID  0x0860  /* 2144: Needed for LC, must match pl_mgr_ini.json definition */

#endif /* _pl_mgr_msgids_ */
