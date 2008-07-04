// This file is part of Mtp Target.
// Copyright (C) 2008 Vialek
// 
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License along
// with this program; if not, write to the Free Software Foundation, Inc.,
// 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
// 
// Vianney Lecroart - gpl@vialek.com

#ifndef MT_GUI_STRETCHED_QUAD_H
#define MT_GUI_STRETCHED_QUAD_H


//
// Includes
//

#include <nel/3d/u_material.h>


//
// Classes
//

class CGuiStretchedQuad
{
public:
	CGuiStretchedQuad();
	virtual ~CGuiStretchedQuad();
	virtual void render();
	
	NLMISC::CVector size();
	void size(const NLMISC::CVector &size);
	NLMISC::CVector position();
	void position(const NLMISC::CVector &position);
	
	NL3D::UMaterial material();
	void material(NL3D::UMaterial material);

	void color(NLMISC::CRGBA color);
	NLMISC::CRGBA color();
	void offset(const NLMISC::CVector &offset);
	NLMISC::CVector offset();

	void stretched(bool stretched);
	bool stretched();
	
private:
	
	NLMISC::CVector _size;
	
	NLMISC::CVector _position;

	NL3D::UMaterial _material;

	NLMISC::CRGBA _color;
	NLMISC::CVector _offset;

	bool _stretched;
};


#endif