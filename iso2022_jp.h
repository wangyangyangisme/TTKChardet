#ifndef ISO2022_JP_H
#define ISO2022_JP_H

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

#include "checker.h"

typedef function<bool(const unsigned char *str)> ISO2022_jp_func_type;
typedef pair<int, ISO2022_jp_func_type> ISO2022_jp_pair;

class ISO2022_JPChecker : public CheckerBase
{
public:
    ISO2022_JPChecker();
    virtual bool detect(const string &str) const override;

private:
    tuple<bool, ISO2022_jp_pair> checkFlag(const char *&str) const;

};

#endif // ISO2022_JP_H
