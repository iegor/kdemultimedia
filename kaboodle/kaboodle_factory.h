/*****************************************************************

Copyright (c) 2000-2001 the noatun authors. See file AUTHORS.

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL THE
AUTHORS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIAB\ILITY, WHETHER IN
AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

******************************************************************/

#ifndef KABOODLE_FACTORY_H
#define KABOODLE_FACTORY_H

#include <kaboutdata.h>
#include <kinstance.h>
#include <kparts/factory.h>

namespace Kaboodle
{
class Player;

class KaboodleFactory : public KParts::Factory
{
Q_OBJECT

public:
	KaboodleFactory();
	virtual ~KaboodleFactory();

	virtual KParts::Part *createPartObject(QWidget *widgetParent, const char *widgetName, QObject *parent = 0, const char *name = 0, const char *classname = "QObject", const QStringList &args = QStringList());

	static const KAboutData *aboutData();
	static KInstance *instance();
	
private:
	static KInstance *s_instance;
	static KAboutData *s_aboutData;
};

}

#endif
