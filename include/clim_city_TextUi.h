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
#ifndef _CLIM_CITY_TEXT_UI_H_
#define _CLIM_CITY_TEXT_UI_H_

#include "FSM_UI.h"
#include "clim_city_situation.h"

class clim_city_TextUi:public FSM_UI<clim_city_situation>
{
 public:
  clim_city_TextUi(void);

  //Methods inherited from interface
  void displaySpecificSituation(const clim_city_situation *p_situation);
  std::string toString(void)const;
	


 private:
};
#endif
