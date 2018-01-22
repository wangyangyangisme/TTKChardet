#ifndef CHECKERHELPER_H
#define CHECKERHELPER_H

/* =================================================
 * This file is part of the TTK Chardet project
 * Copyright (C) 2015 - 2018 Greedysky Studio

 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License along
 * with this program; If not, see <http://www.gnu.org/licenses/>.
 ================================================= */

#include <map>
#include <string>
#include "checker.h"
using namespace std;

class CheckerHelper
{
public:
    CheckerHelper();
    ~CheckerHelper();

    CheckerBase* getChecker(const string &name);

    bool contains(const string &name);

    bool check(const string &charset, const string &str);
    string detect(const string &str);

private:
    map<string, CheckerBase*> m_checkers;

};

#endif // CHECKERHELPER_H
