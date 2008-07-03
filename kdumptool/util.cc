/*
 * (c) 2008, Bernhard Walle <bwalle@suse.de>, SUSE LINUX Products GmbH
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
 * 02110-1301, USA.
 */
#include <string>
#include <errno.h>
#include <sys/utsname.h>
#include <cstring>

#include "global.h"
#include "util.h"
#include "debug.h"

using std::string;
using std::strerror;

// -----------------------------------------------------------------------------
std::string Util::getArch()
    throw (KError)
{
    static struct utsname utsname;

    if (!utsname.machine) {
        int ret = uname(&utsname);
        if (ret < 0)
            throw KError(string("uname failed: ") + strerror(errno));
    }

    Debug::debug()->dbg("uname = %s\n", utsname.machine);

    return utsname.machine;
}

// vim: set sw=4 ts=4 fdm=marker et: