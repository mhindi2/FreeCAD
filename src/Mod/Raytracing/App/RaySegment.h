/***************************************************************************
 *   Copyright (c) 2007 Jürgen Riegel <juergen.riegel@web.de>              *
 *                                                                         *
 *   This file is part of the FreeCAD CAx development system.              *
 *                                                                         *
 *   This library is free software; you can redistribute it and/or         *
 *   modify it under the terms of the GNU Library General Public           *
 *   License as published by the Free Software Foundation; either          *
 *   version 2 of the License, or (at your option) any later version.      *
 *                                                                         *
 *   This library  is distributed in the hope that it will be useful,      *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU Library General Public License for more details.                  *
 *                                                                         *
 *   You should have received a copy of the GNU Library General Public     *
 *   License along with this library; see the file COPYING.LIB. If not,    *
 *   write to the Free Software Foundation, Inc., 59 Temple Place,         *
 *   Suite 330, Boston, MA  02111-1307, USA                                *
 *                                                                         *
 ***************************************************************************/

#ifndef _RaySegment_h_
#define _RaySegment_h_

#include <App/DocumentObject.h>
#include <App/PropertyStandard.h>
#include <Mod/Raytracing/RaytracingGlobal.h>


namespace Raytracing
{

/** Base class of all View Features in the drawing module
 */
class RaytracingExport RaySegment: public App::DocumentObject
{
  PROPERTY_HEADER_WITH_OVERRIDE(Raytracing::RaySegment);

public:
    /// Constructor
    RaySegment(void);
    ~RaySegment() override;

    App::PropertyString Result;


    /** @name methods override Feature */
    //@{
    /// recalculate the Feature
    App::DocumentObjectExecReturn *execute(void) override;
    
    /// returns the type name of the ViewProvider
    const char* getViewProviderName(void) const override {
        return "Gui::ViewProviderDocumentObject"; 
    }
    //@}
};


} //namespace Raytracing



#endif
