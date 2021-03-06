/***************************************************************************
 *   This file is part of libdatanetwork                                   *
 *                                                                         *
 *   Copyright (C) 2009 by Marije Baalman                                  *
 *   nescivi _at_ gmail _dot_ com                                          *
 *                                                                         *
 *   This library is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU Lesser General Public License as        *
 *   published by the Free Software Foundation; either version 3 of the    *
 *   License, or (at your option) any later version.                       *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/

#ifndef DATANETWORKMINIBEE_H
#define DATANETWORKMINIBEE_H

#include <string>

using namespace std;

namespace SWDataNetwork {

class DataNode;

/**
	@author Marije Baalman <nescivi@gmail.com>
*/
class MiniBee{
public:
    MiniBee(int ident, int insize, int outsize);
    MiniBee();
    ~MiniBee();

	void setNode( DataNode * dn );
	void setMapped( DataNode * dn );
	
	void setInSize( int sz );
	void setOutSize( int sz );

	int getID();
	int getInSize();
	int getOutSize();

  private:
	DataNode * datanode;
	int id;
	int inputSize;
	int outputSize;
	DataNode * mappedNode;
};

}

#endif
