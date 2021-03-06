//////////////////////////////////////////////////////////////////////
// Yet Another Tibia Client
//////////////////////////////////////////////////////////////////////
// Item instance class
//////////////////////////////////////////////////////////////////////
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software Foundation,
// Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
//////////////////////////////////////////////////////////////////////


#ifndef __ITEMUI_H
#define __ITEMUI_H

#include "thingui.h"
#include "objects.h"

class ItemUI : virtual public ThingUI
{
public:
	ItemUI(uint16_t id);
	virtual ~ItemUI();

	virtual void Blit(int x, int y, float scale = 1., int map_x = 0, int map_y = 0) const = 0;

protected:

	void BlitItem(int x, int y, uint8_t count, ObjectType* obj, float scale = 1., int map_x = 0, int map_y = 0) const;
	void BlitCount(int x, int y, uint8_t count, float scale) const;
	uint16_t m_id;
};

#endif
