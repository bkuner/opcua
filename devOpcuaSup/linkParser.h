/*************************************************************************\
* Copyright (c) 2018 ITER Organization.
* This module is distributed subject to a Software License Agreement found
* in file LICENSE that is included with this distribution.
\*************************************************************************/

/*
 *  Author: Ralph Lange <ralph.lange@gmx.de>
 *
 *  based on prototype work by Bernhard Kuner <bernhard.kuner@helmholtz-berlin.de>
 *  and code by Michael Davidsaver <mdavidsaver@ospreydcs.com>
 */

#ifndef DEVOPCUA_LINKPARSER_H
#define DEVOPCUA_LINKPARSER_H

#include <dbCommon.h>

#include "devOpcua.h"
#include "RecordConnector.h"

namespace DevOpcua {

std::unique_ptr<linkInfo> parseLink(dbCommon* prec, DBEntry &ent);

} // namespace DevOpcua

#endif // DEVOPCUA_LINKPARSER_H