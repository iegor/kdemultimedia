/*
  Copyright ( C ) 2004 Richard Lärkäng <nouseforaname@home.se>

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Library General Public
  License as published by the Free Software Foundation; either
  version 2 of the License, or (  at your option ) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Library General Public License for more details.

  You should have received a copy of the GNU Library General Public License
  along with this library; see the file COPYING.LIB.  If not, write to
  the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
  Boston, MA 02111-1307, USA.
*/

#ifndef KCDDB_SITES_H
#define KCDDB_SITES_H

#include <qvaluelist.h>
#include "cddb.h"
#include "lookup.h"
#include <kdelibs_export.h>

namespace KCDDB
{
  class Mirror
  {
    public:
      QString address;
      Lookup::Transport transport;
      uint port;
      QString description;
  } ;

  class KDE_EXPORT Sites : public CDDB
  {
    public:
      Sites();

      QValueList<Mirror> siteList();
    private:
      QValueList<Mirror> readFile(const QString& fileName);
      Mirror parseLine(const QString& line);
  } ;
}

#endif

// vim:tabstop=2:shiftwidth=2:expandtab:cinoptions=(s,U1,m1
