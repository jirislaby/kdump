/*
 * (c) 2013, Petr Tesarik <ptesarik@suse.cz>, SUSE LINUX Products GmbH
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
#ifndef DUMPCONFIG_H
#define DUMPCONFIG_H

#include "subcommand.h"

//{{{ DumpConfig ---------------------------------------------------------------

/**
 * Subcommand to dump the configuration options.
 */
class DumpConfig : public Subcommand {

    public:
        /**
         * Creates a new DumpConfig object.
         */
        DumpConfig()
        throw ();

    public:
        /**
         * Returns the name of the subcommand (dump_config).
         */
        const char *getName() const
        throw ();

        /**
         * Executes the function.
         *
         * @throw KError on any error. No exception indicates success.
         */
        void execute()
        throw (KError);
};

//}}}

#endif /* DUMPCONFIG_H */

// vim: set sw=4 ts=4 fdm=marker et: :collapseFolds=1: