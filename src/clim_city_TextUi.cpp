/*    This file is part of clim_city_TextUi
      Copyright (C) 2014  Julien Thevenon ( julien_thevenon at yahoo.fr )

      This program is free software: you can redistribute it and/or modify
      it under the terms of the GNU General Public License as published by
      the Free Software Foundation, either version 3 of the License, or
      (at your option) any later version.

      This program is distributed in the hope that it will be useful,
      but WITHOUT ANY WARRANTY; without even the implied warranty of
      MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
      GNU General Public License for more details.

      You should have received a copy of the GNU General Public License
      along with this program.  If not, see <http://www.gnu.org/licenses/>
*/
#include "clim_city_TextUi.h"
#include "clim_city_situation.h"

clim_city_TextUi::clim_city_TextUi(void):FSM_UI<clim_city_situation>()
{
}

void clim_city_TextUi::displaySpecificSituation(const clim_city_situation *p_situation)
{
  cout << p_situation->toString() << endl ;
}

string clim_city_TextUi::toString(void)const
{
  return "clim_city_TextUi";
}


FSM_UI_if* createGameOfLifeTextUi(void)
{
  return new clim_city_TextUi();
}

extern "C"
{
  void registerFsmUi(map<string,FSM_UI_creator> *p_factory)
  {
    registerFsmUi("clim_city",createGameOfLifeTextUi,p_factory);
  }
}
